#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_fang(
                 KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,  KC_A,                                        KC_C,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_L,
                 KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,  KC_B,                                        KC_D,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_L,
        	     KC_LGUI,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,  KC_B,                                        KC_D,     KC_H,    KC_J,    KC_K,    KC_L,    KC_L, KC_L,
                 KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,  KC_MUTE,  KC_LGUI,                  KC_INS,  XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_L, KC_L,
                                    KC_L,    KC_LALT, KC_LCTRL, KC_LALT, KC_ENT,   KC_LGUI,                  XXXXXXX, KC_SPC,  KC_LALT,   KC_DEL,  KC_PSCR, KC_L
    ),
};
