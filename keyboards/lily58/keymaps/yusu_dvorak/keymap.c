#include QMK_KEYBOARD_H

enum layer_number {
  DVORAK = 0,
  SYMBOLS,
  MATH,
  NAVIGATION,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_GRV, KC_NO, LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), LSFT_T(KC_U), KC_I, KC_D, RSFT_T(KC_H), RCTL_T(KC_T), RALT_T(KC_N), RGUI_T(KC_S), KC_NO, KC_NO, KC_QUOT, KC_Q, KC_J, KC_K, KC_X, TO(4), TO(4), KC_B, KC_M, KC_W, KC_V, KC_Z, KC_NO, KC_NO, LT(1,KC_BSLS), LT(2,KC_TAB), KC_SPC, KC_BSPC, LT(2,KC_ENT), LT(1,KC_ESC), KC_NO),

[1] = LAYOUT(
// first row
// left hand
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
// right hand
KC_NO, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NO,

// second row
// left hand
KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_PAST, KC_NO,
// right hand
KC_NO, KC_P7, KC_P8, KC_P9, KC_PEQL, KC_NO,

// third row
// left hand
KC_NO, KC_CIRC, KC_UNDS, KC_PMNS, KC_PPLS, KC_PEQL,
// right hand
KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO,

// fourth row
// left hand
KC_NO, KC_PERC, KC_PSLS, KC_EXLM, KC_QUES, KC_NO,
// thumb keys
KC_TRNS, KC_TRNS,
// right hand
KC_NO, KC_P1, KC_P2, KC_P3, KC_PENT, KC_NO,

// thumb row
KC_TRNS, KC_TRNS, LT(3,KC_TAB), KC_TRNS,
KC_TRNS, LT(3,KC_ENT), LT(1,KC_P0), KC_PDOT
),

[2] = LAYOUT(
// first row
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

// second row
KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_PAST, KC_NO,
KC_NO, KC_TILD, KC_AMPR, KC_PIPE, KC_HASH, KC_NO,

// third row
KC_NO, KC_CIRC, KC_UNDS, KC_PMNS, KC_PPLS, KC_PEQL,
KC_LCBR, KC_LBRC, KC_LPRN, KC_MINS, KC_AT, KC_DLR,

// fourth row
KC_NO, KC_PERC, KC_PSLS, KC_EXLM, KC_QUES, KC_NO,
KC_TRNS, KC_TRNS,
KC_RCBR, KC_RBRC, KC_RPRN, KC_UNDS, KC_NO, KC_NO,

// thumb row
KC_TRNS, LT(3,KC_BSLS), KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, LT(3,KC_ESC), KC_TRNS
),

[3] = LAYOUT(
KC_PWR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR,

KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,

KC_MSTP, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY,
KC_HOME, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_END,

MEH(KC_QUOT), MEH(KC_Q), KC_MUTE, MEH(KC_J), MEH(KC_K), MEH(KC_X),
KC_TRNS, KC_TRNS,
KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_NO,

KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[4] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, TO(0), TO(0), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL, KC_LGUI, KC_NO, LT(5,KC_TAB), KC_TRNS, KC_TRNS, LT(5,KC_ENT), KC_NO, KC_RGUI),

[5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

/* layer_state_t layer_state_set_user(layer_state_t state) { */
/*   return update_tri_layer_state(state, SYMBOLS, MATH, NAVIGATION); */
/* } */

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
