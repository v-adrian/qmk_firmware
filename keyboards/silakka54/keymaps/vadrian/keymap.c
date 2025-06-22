// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define UNDO C(KC_Z)
#define CUT C(KC_X)
#define COPY C(KC_C)
#define PASTE C(KC_P)
#define REDO C(KC_Y)

enum layers {
    BASE,
    MEDIA,
    NAV,
    MOUSE,
    SYM,
    NUM,
    FUN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
        LCTL_T(KC_ESC),   LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    KC_G,                               KC_H,    RSFT_T(KC_J),    RCTL_T(KC_K),    RALT_T(KC_L),    RGUI_T(KC_SCLN), KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            LT(MEDIA,KC_ESC), LT(NAV,KC_SPC), LT(MOUSE,KC_TAB),           LT(SYM,KC_ENT),  LT(NUM,KC_BSPC),  LT(FUN,KC_DEL)
    ),
    [MEDIA] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,                            KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,           KC_MSTP,  KC_MPLY,  KC_MUTE
    ),
    [NAV] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS,
        KC_TRNS,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,                            KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            REDO, PASTE, COPY, CUT, UNDO, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,           KC_ENT,  KC_BSPC,  KC_DEL
    ),
    [MOUSE] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, MS_WHLL, MS_UP, MS_WHLR, MS_WHLU, KC_TRNS,
        KC_TRNS,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,                            KC_TRNS, MS_LEFT, MS_DOWN, MS_RIGHT, MS_WHLD, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            REDO, PASTE, COPY, CUT, UNDO, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,           MS_BTN2,  MS_BTN1,  MS_BTN3
    ),
    [SYM] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                            KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS,
        KC_TRNS,  KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_LPRN, KC_RPRN, KC_UNDS,           KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [NUM] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,                            KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS,
        KC_TRNS,  KC_GRV, KC_1, KC_2, KC_3, KC_BSLS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_DOT, KC_0, KC_MINS,           KC_TRNS,  KC_TRNS,  KC_TRNS
    [FUN] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
};
