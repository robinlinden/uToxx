#ifndef SETTINGS_H
#define SETTINGS_H

#include "../langs/i18n_decls.h"

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

extern uint16_t loaded_audio_in_device, loaded_audio_out_device;

#define MAIN_WIDTH 750
#define MAIN_HEIGHT 500

typedef struct utox_settings {
    // Low level settings (network, profile, portable-mode)
    bool portable_mode;

    bool save_encryption;

    bool force_proxy;
    bool enable_udp;
    bool enable_ipv6;

    bool use_proxy;
    uint16_t proxy_port;

    // User interface settings
    UTOX_LANG language;
    bool audiofilter_enabled;
    bool push_to_talk;
    bool audio_preview;
    bool video_preview;
    bool send_typing_status;
    bool inline_video;
    bool use_long_time_msg;
    bool accept_inline_images;

    // UX Settings
    bool logging_enabled;
    bool close_to_tray;
    bool start_in_tray;
    bool use_mini_flist;
    bool magic_flist_enabled;

    // Notifications / Alerts
    bool    ringtone_enabled;
    bool    status_notifications;
    uint8_t group_notifications;

    uint32_t theme;

    // OS interface settings
    uint32_t window_x;
    uint32_t window_y;
    uint32_t window_height;
    uint32_t window_width;

    uint8_t video_fps;
} SETTINGS;

extern SETTINGS settings;

/* House keeping for uTox save file. */
#define UTOX_SAVE_VERSION 3
typedef struct utox_save {
    uint8_t save_version;
    uint8_t scale;
    uint8_t enableipv6;
    uint8_t disableudp;

    uint16_t window_x, window_y, window_width, window_height;
    uint16_t proxy_port;

    uint8_t proxyenable;

    uint8_t logging_enabled : 1;
    uint8_t audible_notifications_enabled : 1;
    uint8_t filter : 1;
    uint8_t audio_filtering_enabled : 1;
    uint8_t close_to_tray : 1;
    uint8_t start_in_tray : 1;
    uint8_t auto_startup : 1; // Unused, included here because compatability.
    uint8_t no_typing_notifications : 1;

    uint16_t audio_device_in;
    uint16_t audio_device_out;

    uint8_t theme;

    uint8_t push_to_talk         : 1;
    uint8_t use_mini_flist       : 1;
    uint8_t group_notifications  : 4;
    uint8_t status_notifications : 1;
    uint8_t magic_flist_enabled  : 1;

    uint32_t utox_last_version;      // Unused, included here because compatability.

    uint8_t auto_update         : 1; // Unused, included here because compatability.
    uint8_t update_to_develop   : 1; // Unused, included here because compatability.
    uint8_t send_version        : 1; // Unused, included here because compatability.
    uint8_t zero_2              : 5;
    uint8_t zero_3              : 8;

    uint16_t language;
    uint8_t video_fps;

    uint8_t unused[53];

    uint8_t proxy_ip[];
} UTOX_SAVE;

/**
 * Parses the arguments passed to uTox and dumps them into the settings struct.
 */
void parse_args(int argc, char *argv[]);

/*
 * Loads the config file and returns a settings struct
 */
UTOX_SAVE *config_load(void);

/*
 * Writes save_in to the disk
 */
void config_save(UTOX_SAVE *save_in);


/**
 * Saves the settings for uTox
 *
 * Returns a bool indicating if it succeeded or not
 */
bool utox_data_save_utox(UTOX_SAVE *data, size_t length);

/**
 * Loads uTox settings
 *
 * Returns a memory pointer of *size, the caller needs to free this
 * Returns NULL on failure
 */
UTOX_SAVE *utox_data_load_utox(void);

#endif
