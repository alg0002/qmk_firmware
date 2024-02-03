// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define L1_SPC  LT(1,KC_SPC)
#define L2_ZKHK LT(2,KC_GRV)
#define L2_APP  LT(2,KC_APP)
#define MU_LSFT LSFT_T(KC_INT5)
#define ET_LCTL LCTL_T(KC_ENT)
#define ET_RCTL RCTL_T(KC_ENT)
#define HE_RSFT RSFT_T(KC_INT4)
#define SF_2    LSFT(KC_2)
#define SF_7    LSFT(KC_7)
#define SF_8    LSFT(KC_8)
#define SF_9    LSFT(KC_9)
#define SF_COLN LSFT(KC_COLN)
#define SF_MINS LSFT(KC_MINS)
#define SF_QUOT LSFT(KC_QUOT)
#define SF_INT3 LSFT(KC_INT3)
#define SF_EQL  LSFT(KC_EQL)
#define SF_RBRC LSFT(KC_RBRC)
#define SF_BSLS LSFT(KC_BSLS)
#define SF_LBRC LSFT(KC_LBRC)
#define LCA_DEL LCA(KC_DEL)
#define LCA_END LCA(KC_END)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_MINS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_INT1,
        L2_ZKHK, KC_LGUI, KC_LALT, MU_LSFT, ET_LCTL, L1_SPC,           L1_SPC,  ET_RCTL, HE_RSFT, KC_RALT, KC_RGUI, L2_APP
    ),
    [1] = LAYOUT(
        _______, SF_COLN, KC_MINS, SF_QUOT, KC_SLSH, SF_MINS,          KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  KC_PSCR,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_EQL,  KC_INT3,
        KC_CAPS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,             SF_INT3, SF_EQL,  _______, _______, _______, _______,
        _______, _______, _______, _______, KC_BSPC, _______,          _______, KC_DEL,  _______, _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,          _______, SF_RBRC, SF_BSLS, SF_7,    _______, _______,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            KC_F11,  KC_RBRC, KC_BSLS, SF_2,    _______, LCA_DEL,
        _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,           KC_F12,  SF_8,    SF_9,    SF_LBRC, _______, LCA_END,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______
    )
};
