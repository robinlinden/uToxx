#include "chatlog.h"

#include "filesys.h"
#include "messages.h"
#include "text.h"

#include "native/filesys.h"

#include <stdint.h>
#include <stdlib.h>

static FILE* chatlog_get_file(char hex[TOX_PUBLIC_KEY_SIZE * 2], bool append) {
    char name[TOX_PUBLIC_KEY_SIZE * 2 + sizeof(".new.txt")];
    snprintf(name, sizeof(name), "%.*s.new.txt", TOX_PUBLIC_KEY_SIZE * 2, hex);

    FILE *file;
    if (append) {
        file = utox_get_file(name, NULL, UTOX_FILE_OPTS_READ
                                         | UTOX_FILE_OPTS_WRITE
                                         | UTOX_FILE_OPTS_MKDIR);
        if (!file) {
            return NULL;
        }

        fseek(file, 0, SEEK_END);
    } else {
        file = utox_get_file(name, NULL, UTOX_FILE_OPTS_READ);
    }

    return file;
}

size_t utox_save_chatlog(char hex[TOX_PUBLIC_KEY_SIZE * 2], uint8_t *data, size_t length) {
    FILE *fp = chatlog_get_file(hex, true);
    if (!fp) {
        return 0;
    }

    fseeko(fp, 0, SEEK_END);
    off_t offset = ftello(fp);
    fwrite(data, length, 1, fp);
    fclose(fp);

    return offset;
}

static size_t utox_count_chatlog(char hex[TOX_PUBLIC_KEY_SIZE * 2]) {
    FILE *file = chatlog_get_file(hex, false);

    if (!file) {
        return 0;
    }

    LOG_FILE_MSG_HEADER header;
    size_t records_count = 0;

    while (fread(&header, sizeof(header), 1, file) == 1) {
        fseeko(file, header.author_length + header.msg_length + 1, SEEK_CUR);
        records_count++;
    }


    if (ferror(file) || !feof(file)) {
        /* TODO: consider removing or truncating the log file.
         * If !feof() this means that the file has an incomplete record,
         * which would prevent it from loading forever, even though
         * new records will keep being appended as usual. */
                fclose(file);
        return 0;
    }

    fclose(file);
    return records_count;
}

/* TODO create fxn that will try to recover a corrupt chat history.
 *
 * In the majority of bug reports the corrupt message is often the first, so in
 * theory we should be able to trim the start of the chatlog up to and including
 * the first \n char. We may have to do so multiple times, but once we find the
 * first valid message everything else should "work" */
MSG_HEADER **utox_load_chatlog(char hex[TOX_PUBLIC_KEY_SIZE * 2], size_t *size, uint32_t count, uint32_t skip) {
    /* Becasue every platform is different, we have to ask them to open the file for us.
     * However once we have it, every platform does the same thing, this should prevent issues
     * from occuring on a single platform. */

    size_t records_count = utox_count_chatlog(hex);
    if (skip >= records_count) {
        return NULL;
    }

    FILE *file = chatlog_get_file(hex, false);
    if (!file) {
        return NULL;
    }

    if (count > (records_count - skip)) {
        count = records_count - skip;
    }

    MSG_HEADER **data = calloc(count + 1, sizeof(MSG_HEADER *));
    MSG_HEADER **start = data;

    size_t start_at = records_count - count - skip;
    size_t actual_count = 0;

    size_t file_offset = 0;

    LOG_FILE_MSG_HEADER header;
    while (fread(&header, sizeof(header), 1, file) == 1) {
        if (start_at) {
            fseeko(file, header.author_length, SEEK_CUR); /* Skip the recorded author */
            fseeko(file, header.msg_length, SEEK_CUR);    /* Skip the message */
            fseeko(file, 1, SEEK_CUR);                    /* Skip the newline char */
            start_at--;
            file_offset = ftello(file);
            continue;
        }

        if (count) {
            // We have to skip the author name for now.
            // It's left here for group chats support in the future.
            fseeko(file, header.author_length, SEEK_CUR);
            if (header.msg_length > 1 << 16) {
                if (size) {
                    *size = 0;
                }

                fclose(file);
                return start;
            }

            MSG_HEADER *msg = calloc(1, sizeof(MSG_HEADER));

            msg->our_msg       = header.author;
            msg->receipt_time  = header.receipt;
            msg->time          = header.time;
            msg->msg_type      = header.msg_type;
            msg->disk_offset   = file_offset;

            msg->via.txt.length        = header.msg_length;
            msg->via.txt.msg = calloc(1, msg->via.txt.length);

            msg->via.txt.author_length = header.author_length;
            // TODO: msg->via.txt.author used to be allocated but left empty. Commented out for now.
            // msg->via.txt.author = calloc(1, msg->via.txt.author_length);
            // if (!msg->via.txt.author) {
            //                 //     free(msg->via.txt.msg);
            //     free(msg);
            //     fclose(file);
            //     return NULL;
            // }

            if (fread(msg->via.txt.msg, msg->via.txt.length, 1, file) != 1) {
                // free(msg->via.txt.author);
                free(msg->via.txt.msg);
                free(msg);
                break;
            }

            msg->via.txt.length = utf8_validate((uint8_t *)msg->via.txt.msg, msg->via.txt.length);
            *data++ = msg;
            --count;
            ++actual_count;
            fseeko(file, 1, SEEK_CUR); /* seek an extra \n char */
            file_offset = ftello(file);
        }
    }

    fclose(file);

    if (size) {
        *size = actual_count;
    }

    return start;
}

bool utox_update_chatlog(char hex[TOX_PUBLIC_KEY_SIZE * 2], size_t offset,
                         uint8_t *data, size_t length)
{
    FILE *file = chatlog_get_file(hex, true);

    if (!file) {
        return false;
    }

    if (fseeko(file, offset, SEEK_SET)) {
        fclose(file);
        return false;
    }

    fwrite(data, length, 1, file);
    fclose(file);

    return true;
}

bool utox_remove_friend_chatlog(char hex[TOX_PUBLIC_KEY_SIZE * 2]) {
    char name[TOX_PUBLIC_KEY_SIZE * 2 + sizeof(".new.txt")];

    snprintf(name, sizeof(name), "%.*s.new.txt", TOX_PUBLIC_KEY_SIZE * 2, hex);

    return utox_remove_file((uint8_t*)name, sizeof(name));
}

void utox_export_chatlog_init(uint32_t friend_number) {
    native_export_chatlog_init(friend_number);
}

void utox_export_chatlog(char hex[TOX_PUBLIC_KEY_SIZE * 2], FILE *dest_file) {
    if (!dest_file) {
        return;
    }

    struct tm tm_prev = { .tm_mday = 1 };

    LOG_FILE_MSG_HEADER header;
    FILE *file = chatlog_get_file(hex, false);

    while (fread(&header, sizeof(header), 1, file) == 1) {
        struct tm *tm_curr = localtime(&header.time);

        char buffer[128];
        if (tm_curr->tm_year > tm_prev.tm_year
            || (tm_curr->tm_year == tm_prev.tm_year
                && tm_curr->tm_mon > tm_prev.tm_mon)
            || (tm_curr->tm_year == tm_prev.tm_year
                && tm_curr->tm_mon == tm_prev.tm_mon
                && tm_curr->tm_mday > tm_prev.tm_mday))
        {
            size_t len = strftime(buffer, 128, "Day has changed to %A %B %d %Y\n", tm_curr);
            fwrite(buffer, len, 1, dest_file);
        }

        // Write timestamp
        fprintf(dest_file, "[%02d:%02d] ", tm_curr->tm_hour, tm_curr->tm_min);
        tm_prev.tm_year = tm_curr->tm_year;
        tm_prev.tm_mon = tm_curr->tm_mon;
        tm_prev.tm_mday = tm_curr->tm_mday;

        int c;
        // Write author
        fwrite("<", 1, 1, dest_file);
        for (size_t i = 0; i < header.author_length; ++i) {
            c = fgetc(file);
            if (c != EOF) {
                fputc(c, dest_file);
            }
        }
        fwrite(">", 1, 1, dest_file);

        // Write text
        fwrite(" ", 1, 1, dest_file);
        for (size_t i = 0; i < header.msg_length; ++i) {
            c = fgetc(file);
            if (c != EOF) {
                fputc(c, dest_file);
            }
        }
        c = fgetc(file); /* the newline char */
        fputc(c, dest_file);
    }

    fclose(file);
    fclose(dest_file);
}
