#include "main.h"

#include "gtk.h"

#include "../chatlog.h"
#include "../file_transfers.h"
#include "../filesys.h"
#include "../friend.h"
#include "../settings.h"
#include "../tox.h"

#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/** Takes data from µTox and loads it up! */
uint8_t *native_load_data(const uint8_t *name, size_t name_length, size_t *out_size) {
    char path[UTOX_FILE_NAME_LENGTH] = { 0 };

    if (settings.portable_mode) {
        snprintf((char *)path, UTOX_FILE_NAME_LENGTH, "./tox/");
    } else {
        snprintf((char *)path, UTOX_FILE_NAME_LENGTH, "%s/.config/tox/", getenv("HOME"));
    }

    if (strlen(path) + name_length >= UTOX_FILE_NAME_LENGTH) {
                return 0;
    } else {
        snprintf(path + strlen(path), UTOX_FILE_NAME_LENGTH - strlen(path), "%s", name);
    }

    FILE *file = fopen(path, "rb");
    if (!file) {
        if (out_size) {
            *out_size = 0;
        }
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    fseek(file, 0, SEEK_SET);

    uint8_t *data = calloc(size + 1, 1); // needed for the ending null byte
    if (fread(data, size, 1, file) != 1) {
        fclose(file);
        free(data);
        if (out_size) {
            *out_size = 0;
        }
        return NULL;
    }

    fclose(file);

    if (out_size) {
        *out_size = size;
    }
    return data;
}

void native_export_chatlog_init(uint32_t friend_number) {
    if (libgtk) {
        ugtk_save_chatlog(friend_number);
    } else {
        char name[TOX_MAX_NAME_LENGTH + sizeof(".txt")];
        FRIEND *f = get_friend(friend_number);
        if (!f) {
            return;
        }
        snprintf((char *)name, sizeof(name), "%.*s.txt", (int)f->name_length,
                 f->name);

        FILE *file = fopen((char *)name, "wb");
        if (file) {
            utox_export_chatlog(get_friend(friend_number)->id_str, file);
        }
    }
}

bool native_remove_file(const uint8_t *name, size_t length, bool portable_mode) {
    char path[UTOX_FILE_NAME_LENGTH] = { 0 };

    if (portable_mode) {
        snprintf((char *)path, UTOX_FILE_NAME_LENGTH, "./tox/");
    } else {
        snprintf((char *)path, UTOX_FILE_NAME_LENGTH, "%s/.config/tox/", getenv("HOME"));
    }

    if (strlen((const char *)path) + length >= UTOX_FILE_NAME_LENGTH) {
        return false;
    }

    snprintf((char *)path + strlen((const char *)path), UTOX_FILE_NAME_LENGTH - strlen((const char *)path), "%.*s",
             (int)length, (char *)name);

    if (remove((const char *)path)) {
        return false;
    }

    return true;
}

void native_select_dir_ft(uint32_t fid, uint32_t file_number, FILE_TRANSFER *file) {
    if (libgtk) {
        ugtk_native_select_dir_ft(fid, file);
    } else {
        // fall back to working dir
        char *path = malloc(file->name_length + 1);
        memcpy(path, file->name, file->name_length);
        path[file->name_length] = 0;

        postmessage_toxcore(TOX_FILE_ACCEPT, fid, file_number, path);
    }
}

void native_autoselect_dir_ft(uint32_t fid, FILE_TRANSFER *file) {
    if (!file){
        return;
    }

    uint8_t *path = malloc(file->name_length + 1);

    if (settings.portable_mode) {
        snprintf((char *)path, UTOX_FILE_NAME_LENGTH, "./tox/Tox_Auto_Accept/");
        native_create_dir(path);
        snprintf((char *)path, UTOX_FILE_NAME_LENGTH, "./tox/Tox_Auto_Accept/%.*s", (int)file->name_length, file->name);
    } else {
        memcpy(path, file->name, file->name_length);
        path[file->name_length] = 0;
    }

    postmessage_toxcore(TOX_FILE_ACCEPT, fid, file->file_number, path);
}

// TODO: This function has the worst name.
void file_save_inline_image_png(MSG_HEADER *msg) {
    if (libgtk) {
        ugtk_file_save_inline(msg);
    } else {
        // fall back to working dir inline.png
        FILE *fp = fopen("inline.png", "wb");
        if (fp) {
            fwrite(msg->via.ft.data, 1, msg->via.ft.data_size, fp);
            fclose(fp);

            snprintf((char *)msg->via.ft.path, UTOX_FILE_NAME_LENGTH, "inline.png");
            msg->via.ft.inline_png = false;
        }
    }
}

int file_lock(FILE *file, uint64_t start, size_t length) {
    struct flock fl;
    fl.l_type   = F_WRLCK;
    fl.l_whence = SEEK_SET;
    fl.l_start  = start;
    fl.l_len    = length;

    int result = fcntl(fileno(file), F_SETLK, &fl);
    if (result == -1) {
        return 0;
    }

    return 1;
}

int file_unlock(FILE *file, uint64_t start, size_t length) {
    struct flock fl;
    fl.l_type   = F_UNLCK;
    fl.l_whence = SEEK_SET;
    fl.l_start  = start;
    fl.l_len    = length;

    int result = fcntl(fileno(file), F_SETLK, &fl);
    if (result == -1) {
        return 0;
    }

    return 1;
}
