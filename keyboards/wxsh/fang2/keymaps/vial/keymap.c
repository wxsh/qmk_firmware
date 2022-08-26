#include QMK_KEYBOARD_H
#define ____ KC_TRNS
#include "keymap_norwegian.h"
#include <stdio.h>

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_GAMING,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
    KC_APOSMFIX,
    KC_ATMFIX,
    KC_GRTRMFIX,
    KC_LESSMFIX,
    KC_LCBRMFIX,
    KC_RCBRMFIX,
    KC_PIPEMFIX,
    KC_BSLSMFIX
  };

#define KC_LOWER MO(1)
#define KC_RAISE MO(2)
#define NO_ACUT_MAC NO_BSLS       // ´
#define NO_APOS_MAC NO_LABK       // '
#define NO_AT_MAC   NO_QUOT       // @
#define NO_BSLS_MAC S(ALGR(NO_7)) // (backslash)
#define NO_DLR_MAC  S(NO_4)       // $
#define NO_GRV_MAC  ALGR(NO_BSLS) // `
#define NO_GRTR_MAC S(NO_PIPE)    // >
#define NO_LCBR_MAC S(ALGR(NO_8)) // {
#define NO_LESS_MAC NO_PIPE       // <
#define NO_PIPE_MAC ALGR(NO_7)    // |
#define NO_RCBR_MAC S(ALGR(NO_9)) // }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                 KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5, 	  KC_A,                                        KC_C,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    NO_PLUS,
                 KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,	  KC_B,                                        KC_D,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    NO_ARNG,
        	     KC_LGUI,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                                            KC_H,    KC_J,    KC_K,    KC_L,    NO_OSTR, NO_AE,
                 KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,  KC_LGUI,                    KC_INS,  XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  NO_MINS, NO_QUOT,
                                            KC_LALT, KC_LCTRL,   LT(1, KC_DEL), KC_ENT, KC_LGUI,      XXXXXXX, KC_SPC,  LT(2, KC_BSPC),   KC_DEL,   KC_PSCR
    ),
    [1] = LAYOUT(
                 NO_ACUT, KC_F1,  KC_F2,  KC_F3, KC_F4, KC_F5, _______, 		                 _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, NO_QUES,
                 _______, KC_F11, KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, _______,                          _______, XXXXXXX,  XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX,
        	     _______, NO_EXLM,  KC_ATMFIX, NO_HASH, KC_LESSMFIX, KC_GRTRMFIX,                                             NO_LPRN, NO_RPRN, NO_ASTR, NO_CIRC, KC_PIPEMFIX, KC_APOSMFIX,
                 _______, NO_EQL, NO_MINS, NO_PLUS, KC_LCBRMFIX, KC_RCBRMFIX, _______, _______,        _______, _______, NO_LBRC, NO_RBRC, NO_SCLN, NO_COLN, KC_BSLSMFIX, _______,
                                            _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT(
                 _______, _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______, NO_BSLS,
                 _______, KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX, _______, 		                 _______, KC_PGUP, KC_PRVWD,   KC_UP, KC_NXTWD,KC_DLINE, KC_BSPC,
        	     _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                                            KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
                 _______, KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______, _______,        _______, _______, XXXXXXX, KC_LSTRT, XXXXXXX, KC_LEND, XXXXXXX, _______,
                                            _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
                 XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 RESET,   XXXXXXX, KC_QWERTY, XXXXXXX,   CG_TOGG, XXXXXXX, XXXXXXX, 		                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        	     XXXXXXX, XXXXXXX, CG_TOGG,   XXXXXXX,   XXXXXXX, XXXXXXX,                                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                              _______,   _______, _______, _______, _______,          _______, _______, _______, _______, _______
    ),
};

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_BSPC):
            return true;
        default:
            return false;
    }
}

void keyboard_post_init_user(void) {
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(0);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
        case KC_APOSMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_APOS_MAC);
                } else {
                    tap_code16(NO_QUOT);
                }
            }
            return false;
            break;
        case KC_ATMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_AT_MAC);
                } else {
                    tap_code16(NO_AT);
                }
            }
            return false;
            break;
        case KC_GRTRMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_GRTR_MAC);
                } else {
                    tap_code16(NO_RABK);
                }
            }
            return false;
            break;
        case KC_LESSMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_LESS_MAC);
                } else {
                    tap_code16(NO_LABK);
                }
            }
            return false;
            break;
        case KC_LCBRMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_LCBR_MAC);
                } else {
                    tap_code16(NO_LCBR);
                }
            }
            return false;
            break;
        case KC_RCBRMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_RCBR_MAC);
                } else {
                    tap_code16(NO_RCBR);
                }
            }
            return false;
            break;
        case KC_PIPEMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_PIPE_MAC);
                } else {
                    tap_code16(NO_PIPE);
                }
            }
            return false;
            break;
        case KC_BSLSMFIX:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    tap_code16(NO_BSLS_MAC);
                } else {
                    tap_code16(NO_BSLS);
                }
            }
            return false;
            break;
        }
    return true;
}
