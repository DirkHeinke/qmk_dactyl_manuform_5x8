#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _BUT     1
#define _NUMPAD 2

// Some basic macros
#define TASK    LCTL(LSFT(KC_ESC))
#define TAB_R   LCTL(KC_TAB)
#define TAB_L   LCTL(LSFT(KC_TAB))
#define TAB_RO  LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_5x8(
  // left hand// right hand
   KC_ESC,          KC_1,    KC_2,    KC_3,   KC_4,     KC_5,   KC_6,                KC_7,        KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_GRV,
   KC_TAB,          KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,   KC_LBRC,             KC_RBRC,     KC_Z,    KC_U,    KC_I,     KC_O,     KC_P,     KC_BSLS,
   KC_LCTL,         KC_A,    KC_S,    KC_D,   KC_F,     KC_G,   TAB_RO,              TG(_BUT),    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
   OSM(MOD_LSFT),   KC_Y,    KC_X,    KC_C,   KC_V,     KC_B,                                     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  OSM(MOD_RSFT),
   KC_CAPS,         KC_LGUI, TAB_L,   TAB_R,                                                                        KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT,
                                              KC_SPC,   KC_SPC,                                   KC_BSPC, KC_ENT,
                                                        KC_END, KC_HOME,                 KC_PGUP, KC_PGDN,
                                                        KC_PSCR, TASK,                   KC_LCTL, KC_LALT),
        
        
[_BUT] = LAYOUT_5x8(
  // left hand// right hand
   KC_ESC,   KC_1,    KC_2,    KC_3,   KC_4,     KC_5,   KC_NO,                   KC_NO,    KC_6,       KC_7,       KC_8,       KC_9,     KC_0,     KC_NO,
   KC_X,     KC_F,    KC_M,    KC_L,   KC_C,     KC_P,   KC_NO,                   KC_NO,    KC_SCLN,    KC_COMM,    KC_DOT,     KC_U,     KC_B,     KC_LBRC,
   KC_TAB,   KC_S,    KC_N,    KC_R,   KC_T,     KC_D,   KC_NO,                   TG(_BUT), KC_O,       KC_A,       KC_E,       KC_I,     KC_H,     KC_NO,
   KC_NO,    KC_Z,    KC_V,    KC_W,   KC_G,     KC_J,                                      KC_Q,       KC_QUOT,    KC_GRV,     KC_Y,     KC_K,     KC_NO,
   KC_NO,    KC_NO,   KC_NO,   KC_NO,                                                                               KC_NO,      KC_NO,    KC_NO,    KC_NO,
                                                 KC_SPC, KC_LSFT,                 KC_RSFT,  KC_ENT,
                                                         KC_NO,  KC_NO,    KC_NO, KC_BSPC,
                                                         KC_NO,  KC_NO,    KC_NO, KC_NO),
                
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// 	[0] = LAYOUT_5x7(
//     KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, 
//     KC_X, KC_F, KC_M, KC_L, KC_C, KC_P, KC_NO, 
//     KC_TAB, KC_S, KC_N, KC_R, KC_T, KC_D, KC_NO,
//     KC_NO, KC_Z, KC_V, KC_W, KC_G, KC_J, 
    
//     KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    

//             KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, 
//     KC_NO, KC_SCLN, KC_COMM, KC_DOT, KC_U, KC_B, KC_LBRC,
//     KC_NO, KC_O, KC_A, KC_E, KC_I, KC_H, KC_NO, 
//     KC_Q, KC_QUOT, KC_GRV, KC_Y, KC_K, KC_NO, 
    
//     KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO)
// };
        
        
        
        
        
        

// [_FN] = LAYOUT_5x7(
//   // left hand
//    _______,   KC_F1,     KC_F2,      KC_F3,    KC_F4,     KC_F5,    KC_F6,
//    _______,   _______,   _______,    KC_UP,    _______,   _______,  _______,
//    _______,   _______,   KC_LEFT,    KC_DOWN,  KC_RGHT,   _______,  RESET,
//    _______,   _______,   _______,   _______,   _______,   _______,
//    KC_MSTP,   KC_MPLY,   KC_MPRV,   KC_MNXT,
//                                _______, _______,
//                                _______, _______,
//                                _______, _______,
//         // right hand
//                      KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _______,
//                      _______,   _______,   _______,   _______,   _______,   _______,   _______,
//                      _______,   _______,   _______,   _______,   _______,   _______,   _______,
//                                 _______,   _______,   _______,   _______,   _______,   _______,
//                                                       _______,   _______,   _______,   _______,
//         KC_DEL, _______,
//         _______, _______,
//         _______, _______),

// [_NUMPAD] = LAYOUT_5x7(
//   // left hand
//    _______,   _______,   _______,   _______,   _______,   _______,  _______,
//    _______,   _______,   _______,   _______,   _______,   _______,  _______,
//    _______,   _______,   _______,   _______,   _______,   _______,  _______,
//    _______,   _______,   _______,   _______,   _______,   _______,
//    _______,   _______,   _______,   _______,
//                                _______, _______,
//                                _______, _______,
//                                _______, _______,
//         // right hand
//                      _______,   _______,   KC_NLCK,   _______,   KC_PMNS,   KC_PPLS,   _______,
//                      _______,   _______,   KC_P7,     KC_P8,     KC_P9,     _______,   _______,
//                      _______,   _______,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   _______,
//                                 _______,   KC_P1,     KC_P2,     KC_P3,     KC_PSLS,   _______,
//                                                       KC_P0,     KC_PDOT,   _______,   _______,
//         _______, KC_PENT,
//         _______, _______,
//         _______, _______),

};
