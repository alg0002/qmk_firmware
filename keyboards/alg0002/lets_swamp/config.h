// Copyright 2023 alglabnet (@alg0002)
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
#define RGBLED_NUM 12
#define RGBLIGHT_LED_MAP { 5, 4, 3, 2, 1, 0, 6, 7, 8, 9,10,11 }
