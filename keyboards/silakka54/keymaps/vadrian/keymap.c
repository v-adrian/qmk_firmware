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

// Layer switch keys
#define MED_ESC LT(MEDIA,KC_ESC)
#define NAV_SPC LT(NAV,KC_SPC)
#define MOU_TAB LT(MOUSE,KC_TAB)
#define SYM_ENT LT(SYM,KC_ENT)
#define NUM_BSP LT(NUM,KC_BSPC)
#define FUN_DEL LT(FUN,KC_DEL)
#define T_GAME TG(GAME)

// Other tap-hold keys
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
        CW_TOGG, KC_Z,  KC_X,  KC_C,             KC_V,           KC_B,             KC_N,           KC_M,            KC_COMM,       KC_DOT, KC_SLSH, T_GAME,
                               MED_ESC, NAV_SPC, MOU_TAB, SYM_ENT, NUM_BSP, FUN_DEL
    ),
    [GAME] = LAYOUT(
        _______, KC_5,    KC_1, KC_2,    KC_3,   KC_4,   _______, _______, _______, _______, _______, _______,
        KC_T,    KC_TAB,  KC_Q, KC_W,    KC_E,   KC_R,   _______, _______, _______, _______, _______, _______,
        KC_G,    KC_LSFT, KC_A, KC_S,    KC_D,   KC_F,   _______, KC_J,    KC_K,    KC_L,    KC_SCLN, _______,
        KC_B,    KC_LCTL, KC_Z, KC_X,    KC_C,   KC_V,   _______, _______, _______, _______, _______, _______,
                                KC_LALT, KC_SPC, KC_ESC, _______, _______, _______
    ),
    [MEDIA] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, _______, _______, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______, KC_MSTP, KC_MPLY, KC_MUTE
    ),
    [NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
        _______, _______, _______, _______, _______, _______, KC_INS,  KC_HOME, KC_UP,   KC_END,   KC_PGUP, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, SELWORD,
        _______, _______, _______, _______, _______, _______, C_REDO,  C_PASTE, C_COPY,  C_CUT,    C_UNDO,  _______,
                                   _______, _______, _______, KC_ENT,  KC_BSPC, KC_DEL
    ),
    [MOUSE] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, MS_WHLL, MS_UP,   MS_WHLR, MS_WHLU, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, _______,
        _______, _______, _______, _______, _______, _______, C_REDO,  C_PASTE, C_COPY,  C_CUT,   C_UNDO,  _______,
                                   _______, _______, _______, MS_BTN2, MS_BTN1, MS_BTN3
    ),
    [SYM] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, _______, _______, _______, _______, _______, _______,
        _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
        _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, _______, _______, _______, _______, _______, _______,
                                   KC_LPRN, KC_RPRN, KC_UNDS, _______, _______, _______
    ),
    [NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, _______, _______, _______, _______, _______, _______,
        _______, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
        _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, _______, _______, _______, _______, _______, _______,
                                   KC_DOT,  KC_0,    KC_MINS, _______, _______, _______
    ),
    [FUN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,  _______, _______, _______, _______, _______, _______,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,  _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUSE, _______, _______, _______, _______, _______, _______,
                                   KC_APP,  KC_SPC,  KC_TAB,   _______, _______, _______
    ),
};

/* Turn off permissive hold for pinky keys
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Do not select the hold action when another key is tapped.
        case HRM_A:
        case HRM_SC:
            return false;
        // Immediately select the hold action when another key is tapped.
        default:
            return true;
    }
}
*/

// Higher tapping term for pinky keys
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HRM_A:
        case HRM_SC:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}

// Chordal hold layout
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
                       '*', '*', '*',  '*', '*', '*'
    );
