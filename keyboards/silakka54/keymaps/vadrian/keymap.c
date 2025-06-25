// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Windows shortcuts
#define C_UNDO C(KC_Z)
#define C_CUT C(KC_X)
#define C_COPY C(KC_C)
#define C_PASTE C(KC_P)
#define C_REDO C(KC_Y)

// HRM keys
#define HRM_A LGUI_T(KC_A)
#define HRM_S LALT_T(KC_S)
#define HRM_D LCTL_T(KC_D)
#define HRM_F LSFT_T(KC_F)
#define HRM_J RSFT_T(KC_J)
#define HRM_K RCTL_T(KC_K)
#define HRM_L RALT_T(KC_L)
#define HRM_SC RGUI_T(KC_SCLN)

#define C_ESC LCTL_T(KC_ESC)

enum layers {
    BASE,
    GAME,
    MEDIA,
    NAV,
    MOUSE,
    SYM,
    NUM,
    FUN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT(
        KC_GRV,  KC_1,  KC_2,  KC_3,             KC_4,           KC_5,             KC_6,           KC_7,            KC_8,          KC_9,   KC_0,    KC_MINS,
        KC_TAB,  KC_Q,  KC_W,  KC_E,             KC_R,           KC_T,             KC_Y,           KC_U,            KC_I,          KC_O,   KC_P,    KC_EQL,
        C_ESC,   HRM_A, HRM_S, HRM_D,            HRM_F,          KC_G,             KC_H,           HRM_J,           HRM_K,         HRM_L,  HRM_SC,  KC_QUOT,
        CW_TOGG, KC_Z,  KC_X,  KC_C,             KC_V,           KC_B,             KC_N,           KC_M,            KC_COMM,       KC_DOT, KC_SLSH, TG(GAME),
                               LT(MEDIA,KC_ESC), LT(NAV,KC_SPC), LT(MOUSE,KC_TAB), LT(SYM,KC_ENT), LT(NUM,KC_BSPC), LT(FUN,KC_DEL)
    ),
    [GAME] = LAYOUT(
        KC_TRNS, KC_5,    KC_1, KC_2,    KC_3,   KC_4,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_T,    KC_TAB,  KC_Q, KC_W,    KC_E,   KC_R,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_G,    KC_LSFT, KC_A, KC_S,    KC_D,   KC_F,   KC_TRNS, KC_J,    KC_K,    KC_L,    KC_SCLN, KC_TRNS,
        KC_B,    KC_LCTL, KC_Z, KC_X,    KC_C,   KC_V,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                KC_LALT, KC_SPC, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [MEDIA] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_MUTE
    ),
    [NAV] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_HOME, KC_UP,   KC_END,   KC_PGUP, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, SELWORD,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, C_REDO,  C_PASTE, C_COPY,  C_CUT,    C_UNDO,  KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,  KC_BSPC, KC_DEL
    ),
    [MOUSE] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MS_WHLL, MS_UP,   MS_WHLR, MS_WHLU, KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, C_REDO,  C_PASTE, C_COPY,  C_CUT,   C_UNDO,  KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS, MS_BTN2, MS_BTN1, MS_BTN3
    ),
    [SYM] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS,
        KC_TRNS, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_LPRN, KC_RPRN, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [NUM] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS,
        KC_TRNS, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_DOT,  KC_0,    KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [FUN] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,  KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS,
        KC_TRNS, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUSE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_APP,  KC_SPC,  KC_TAB,   KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

