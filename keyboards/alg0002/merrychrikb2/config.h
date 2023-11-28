// Copyright 2023 alg (@alg)
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

#define WS2812_DI_PIN GP0
#define RGBLED_NUM 6

#define RGBLIGHT_DEFAULT_HUE 170
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL 128
