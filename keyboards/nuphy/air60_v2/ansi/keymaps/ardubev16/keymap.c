/*
Copyright 2025 Lorenzo Bevilacqua lorenzobevilacqua02@gmail.com @ardubev16

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

#include QMK_KEYBOARD_H


enum layer_names {
    _BL,
    _NL,
    _ML,
    _QL,
    _SL,
    _5L,
    _6L,
};


#define KC_MICM KC_F20 // Microphone Mute

#define LCTL_ESC LCTL_T(KC_ESC)

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define CTL_S LCTL_T(KC_S)
#define SHFT_T LSFT_T(KC_T)

// Right-hand home row mods
#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Base Layer (Mac SW)
[_BL] = LAYOUT(
    KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_EQL,     KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_BSPC,
    KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_LBRC,    KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_QUOT,    KC_BSLS,
    KC_ESC,     GUI_A,      ALT_R,      CTL_S,      SHFT_T,     KC_G,       KC_RBRC,    KC_M,       SFT_N,      CTL_E,      ALT_I,      GUI_O,                  KC_ENT,
    _______,    KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       _______,    KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_UP,      _______,
    _______,    _______,    MO(_ML),                                        LT(_NL, KC_SPC),                    MO(_SL),    _______,    KC_LEFT,    KC_DOWN,    KC_RGHT),

// Navigation Layer
[_NL] = LAYOUT(
    KC_ESC,     KC_BRID,    KC_BRIU,    MAC_TASK,   MAC_SEARCH, MAC_VOICE,  MAC_DND,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_DEL,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    _______,    _______,    KC_H,       KC_J,       KC_K,       KC_L,       CW_TOGG,                _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     _______,    _______,    _______,
    _______,    _______,    _______,                                        _______,                            _______,    _______,    _______,    _______,    _______),

// Media Layer
[_ML] = LAYOUT(
    KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     DEV_RESET,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    RGB_VAD,    KC_BRID,    KC_BRIU,    RGB_VAI,    KC_MICM,    SLEEP_MODE, BAT_SHOW,
    _______,    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    _______,    _______,    KC_MPRV,    KC_VOLD,    KC_VOLU,    KC_MNXT,    KC_MPLY,                RGB_MOD,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    LNK_RF,     LNK_BLE1,   LNK_BLE2,   LNK_BLE3,   KC_MUTE,    _______,    _______,
    _______,    _______,    _______,                                        _______,                            _______,    _______,    _______,    _______,    _______),

// Symbol Layer
[_SL] = LAYOUT(
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_RSFT,    KC_RCTL,    KC_LALT,    KC_RGUI,                _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,                                        _______,                            _______,    _______,    _______,    _______,    _______),

// QWERTY Layer (Win SW)
[_QL] = LAYOUT(
    KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_EQL,     KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_BSPC,
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_LBRC,    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_QUOT,    KC_BSLS,
    LCTL_ESC,   KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_RBRC,    KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,                KC_ENT,
    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SLSH,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_PGUP,    KC_UP,      KC_PGDN,
    KC_LCTL,    KC_LGUI,    KC_LALT,                                        KC_SPC,                             KC_LALT,    MO(_SL),    KC_LEFT,    KC_DOWN,    KC_RGHT),

// // layer 5 win fn+shift
// [5] = LAYOUT(
//     SHIFT_GRV,  KC_BRID,    KC_BRIU,    _______,    _______,    _______,    _______,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MUTE,    KC_VOLD,    KC_VOLU,    _______,
//     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
//     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,                _______,
//     _______,    _______,    _______,    RGB_TEST,   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
//     _______,    _______,    _______,                                        _______,                            _______,    _______,    _______,    _______,    _______),

// layer 6 function
[6] = LAYOUT(
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,                _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    SIDE_SPD,   SIDE_SPI,   _______,    _______,    SIDE_VAI,    _______,
    _______,    _______,    _______,                                        _______,                            _______,    _______,    SIDE_MOD,   SIDE_VAD,    SIDE_HUI)
};


const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
    {0, A_16,   B_16,   C_16},      // "Esc"
    {0, A_2,    B_2,    C_2},       // "!1"
    {0, A_3,    B_3,    C_3},       // "@2"
    {0, A_4,    B_4,    C_4},       // "#3"
    {0, A_5,    B_5,    C_5},       // "$4"
    {0, A_6,    B_6,    C_6},       // "%5"
    {0, A_7,    B_7,    C_7},       // "^6"
    {0, A_8,    B_8,    C_8},       // "&7"
    {0, A_9,    B_9,    C_9},       // "*8"
    {0, A_10,   B_10,   C_10},      // "(9"
    {0, A_11,   B_11,   C_11},      // ")0"
    {1, D_1,    E_1,    F_1},       // "_-"
    {1, D_2,    E_2,    F_2},       // "+="
    {1, D_3,    E_3,    F_3},       // "Backsp"
    {0, D_1,    E_1,    F_1},       // "Tab"
    {0, D_2,    E_2,    F_2},       // "Q"
    {0, D_3,    E_3,    F_3},       // "W"
    {0, D_4,    E_4,    F_4},       // "E"
    {0, D_5,    E_5,    F_5},       // "R"
    {0, D_6,    E_6,    F_6},       // "T"
    {0, D_7,    E_7,    F_7},       // "Y"
    {0, D_8,    E_8,    F_8},       // "U"
    {0, D_9,    E_9,    F_9},       // "I"
    {0, D_10,   E_10,   F_10},      // "O"
    {0, D_11,   E_11,   F_11},      // "P"
    {1, G_1,    H_1,    I_1},       // "{["
    {1, G_2,    H_2,    I_2},       // "}]"
    {1, G_3,    H_3,    I_3},       // "|\\"
    {0, G_1,    H_1,    I_1},       // "Caps"
    {0, G_2,    H_2,    I_2},       // "A"
    {0, G_3,    H_3,    I_3},       // "S"
    {0, G_4,    H_4,    I_4},       // "D"
    {0, G_5,    H_5,    I_5},       // "F"
    {0, G_6,    H_6,    I_6},       // "G"
    {0, G_7,    H_7,    I_7},       // "H"
    {0, G_8,    H_8,    I_8},       // "J"
    {0, G_9,    H_9,    I_9},       // "K"
    {0, G_10,   H_10,   I_10},      // "L"
    {0, G_11,   H_11,   I_11},      // ":"
    {1, G_16,   H_16,   I_16},      // "\""
    {1, G_14,   H_14,   I_14},      // "Enter"
    {0, J_1,    K_1,    L_1},       // "Shift"
    {0, J_3,    K_3,    L_3},       // "Z"
    {0, J_4,    K_4,    L_4},       // "X"
    {0, J_5,    K_5,    L_5},       // "C"
    {0, J_6,    K_6,    L_6},       // "V"
    {0, J_7,    K_7,    L_7},       // "B"
    {0, J_8,    K_8,    L_8},       // "N"
    {0, J_9,    K_9,    L_9},       // "M"
    {0, J_10,   K_10,   L_10},      // "<,"
    {0, J_11,   K_11,   L_11},      // ">."
    {1, J_1,    K_1,    L_1},       // "?/"
    {1, J_3,    K_3,    L_3},       // "Shift"
    {1, J_4,    K_4,    L_4},       // "↑"
    {1, G_4,    H_4,    I_4},       // "Del"
    {0, J_16,   K_16,   L_16},      // "Ctrl"
    {0, J_15,   K_15,   L_15},      // "Opt"
    {0, J_14,   K_14,   L_14},      // "Cmd"
    {0, J_13,   K_13,   L_13},      // "Space"
    {0, J_12,   K_12,   L_12},      // "Cmd"
    {1, J_16,   K_16,   L_16},      // "Fn"
    {1, J_13,   K_13,   L_13},      // "←"
    {1, J_12,   K_12,   L_12},      // "↓"
    {1, J_11,   K_11,   L_11},      // "→"

    {1, A_5,    B_5,    C_5},       // logo left
    {1, A_4,    B_4,    C_4},       //
    {1, A_3,    B_3,    C_3},       //
    {1, A_2,    B_2,    C_2},       //
    {1, A_1,    B_1,    C_1},       //

    {1, A_6,    B_6,    C_6},       // logo right
    {1, A_7,    B_7,    C_7},       //
    {1, A_8,    B_8,    C_8},       //
    {1, A_9,    B_9,    C_9},       //
    {1, A_10,   B_10,   C_10}       //
};
