/*
Copyright 2021 Andreas Karlsvik

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0003
#define DEVICE_VER   0x0001
#define MANUFACTURER Andreas Karlsvik
#define PRODUCT      fant

#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, B5 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D2  // or D1, D2, D3, E6

#define TAPPING_TERM 100
#define DEBOUNCE 5
#define TAP_CODE_DELAY 10


/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
#define GRAVE_ESC_CTRL_OVERRIDE

#define FORCE_NKRO

#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODER_RESOLUTION 2

#define USE_SERIAL

#define MASTER_LEFT
#define SERIAL_USE_MULTI_TRANSACTION

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE
