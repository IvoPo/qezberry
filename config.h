/*
Copyright 2021 kb-elmo<mail@elmo.space>

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
#define VENDOR_ID    0xA68C
#define PRODUCT_ID   0x675F
#define DEVICE_VER   0x0001
#define MANUFACTURER isp
#define PRODUCT      QEZ2040

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { GP19, GP23, GP5, GP4 }
#define MATRIX_COL_PINS { GP18, GP17, GP14, GP12, GP11, GP9, GP3, GP2, GP1, GP0 }

/* --- additional settings --- */
#define DEBUG_MATRIX_SCAN_RATE
#define LAYER_STATE_16BIT

// reducing chattering, set to 0 if not necessary
#define DEBOUNCE 5
#define DIODE_DIRECTION COL2ROW

/* Indicator LEDs */
#define LED_CAPS_LOCK_PIN GP20

/* --- RP2040 specific settings */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

