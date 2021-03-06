#include "notify.h"

#include "userbadge.h"

#include "../avatar.h"
#include "../notify.h"
#include "../self.h"
#include "../theme.h"
#include "../tox.h"
#include "../ui.h"

#include "../ui/svg.h"
#include "../ui/draw.h"
#include "../ui/button.h"

bool btn_move_window_down;

static void draw_notification(int x, int y, int w, int h) {
    if (!tox_thread_init) {
        return;
    }

    drawrect(x, y, w, h, COLOR_BKGRND_MAIN);

    if (self_has_avatar()) {
        draw_avatar_image(self.avatar->img, SIDEBAR_AVATAR_LEFT, SIDEBAR_AVATAR_TOP, self.avatar->width,
                          self.avatar->height, BM_CONTACT_WIDTH, BM_CONTACT_WIDTH);
    } else {
        drawalpha(BM_CONTACT, SIDEBAR_AVATAR_LEFT, SIDEBAR_AVATAR_TOP, BM_CONTACT_WIDTH, BM_CONTACT_WIDTH,
                  COLOR_MENU_TEXT);
    }

    setcolor(!button_name.mouseover ? COLOR_MENU_TEXT : COLOR_MENU_TEXT_SUBTEXT);
    setfont(FONT_SELF_NAME);
    drawtext(SIDEBAR_NAME_LEFT, SIDEBAR_NAME_TOP, "This is a test of the new uTox popup", 36);
}

PANEL
panel_notify_generic = {
    .type = PANEL_NONE,
    .drawfunc = draw_notification,
    .disabled = 0,
    .child = (PANEL*[]) {
        (PANEL*)&button_notify_one,
        (PANEL*)&button_notify_two,
        (PANEL*)&button_notify_three,

        // (PANEL*)&button_move_notify,
        NULL
    }
};


static void btn_notify_one_mup(void) {}

BUTTON button_notify_one = {
    // .bm_fill = BM_SBUTTON,
    .update = button_setcolors_success,
    .on_mup = btn_notify_one_mup,
    .nodraw = false,
};

static void btn_notify_two_mup(void) {}

BUTTON button_notify_two = {
    // .bm_fill = BM_SBUTTON,
    .update = button_setcolors_success,
    .on_mup = btn_notify_two_mup,
    .nodraw = false,
};

static void btn_notify_three_mup(void) {}

BUTTON button_notify_three = {
    // .bm_fill = BM_SBUTTON,
    .update = button_setcolors_success,
    .on_mup = btn_notify_three_mup,
    .nodraw = false,
};

static void btn_move_notify_mup(void) {
    // window_tween();
}

BUTTON button_move_notify = {
    .nodraw   = false,
    .disabled = false,
    .on_mup   = btn_move_notify_mup,
};


static void btn_notify_create_mup(void) {
    notify_new(NOTIFY_TYPE_MSG);
}

BUTTON button_notify_create = {
    .bm_fill      = BM_SBUTTON,
    .update       = button_setcolors_success,
    .on_mup       = btn_notify_create_mup,
    .button_text  = {.i18nal = STR_SHOW },
    .tooltip_text = {.i18nal = STR_SHOW },
};
