// Copyright 2022 Andreas Karlsvik (@Andreas Karlsvik)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define SOFT_SERIAL_PIN GP1
#define WS2812_PIO_USE_PIO1

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

#define GRAVE_ESC_CTRL_OVERRIDE
#define SERIAL_USE_MULTI_TRANSACTION

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE

#define TAPPING_TERM 100
#define TAP_CODE_DELAY 10
