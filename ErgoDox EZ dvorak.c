#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define KC_QUESTION_MARK LSFT(KC_SLASH)   // ?

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // If it accepts an argument (i.e, is a function), it doesn't need KC_.
  // Otherwise, it needs KC_*

  [0] = KEYMAP(
    // left main
    KC_GRAVE,
    KC_1,
    KC_2,
    KC_3,
    KC_4,
    KC_5,
    KC_LEFT,

    KC_DELETE,
    KC_QUOTE,
    KC_COMMA,
    KC_DOT,
    KC_P,
    KC_Y,
    TO(1, ON_PRESS),

    KC_BSPACE,
    KC_A,
    KC_O,
    KC_E,
    KC_U,
    KC_I,

    KC_LSHIFT,
    KC_SCOLON,
    KC_Q,
    KC_J,
    KC_K,
    KC_X,
    TO(2, ON_PRESS),

    KC_LCTRL,
    KC_LGUI,
    KC_LALT,
    KC_LEFT,
    KC_RIGHT,

    // left thumb
    KC_MENU,
    KC_LGUI,
    KC_HOME,
    KC_SPACE,
    KC_BSPACE,
    KC_END,

    // right main
    KC_RIGHT,
    KC_6,
    KC_7,
    KC_8,
    KC_9,
    KC_0,
    KC_BSLASH,

    TO(1, ON_PRESS),
    KC_F,
    KC_G,
    KC_C,
    KC_R,
    KC_L,
    KC_SLASH,

    KC_D,
    KC_H,
    KC_T,
    KC_N,
    KC_S,
    KC_MINUS,

    KC_RALT,
    KC_B,
    KC_M,
    KC_W,
    KC_V,
    KC_Z,
    KC_RSHIFT,

    KC_UP,
    KC_DOWN,
    KC_LBRACKET,
    KC_RBRACKET,
    MO(1),

    // right thumb
    KC_LALT,
    KC_ESCAPE,
    KC_PGUP,
    KC_PGDOWN,
    KC_TAB,
    KC_ENTER
  ),

  [1] = KEYMAP(
    // left main
    KC_PSCREEN,
    KC_F1,
    KC_F2,
    KC_F3,
    KC_F4,
    KC_F5,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_EXCLAIM,
    KC_AT,
    KC_LEFT_CURLY_BRACE,
    KC_RIGHT_CURLY_BRACE,
    KC_QUESTION_MARK,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_HASH,
    KC_DOLLAR,
    KC_LEFT_PAREN,
    KC_RIGHT_PAREN,
    KC_GRAVE,

    KC_TRANSPARENT,
    KC_PERCENT,
    KC_CIRCUMFLEX,
    KC_LBRACKET,
    KC_RBRACKET,
    KC_TILDE,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    // left thumb
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    // right main
    KC_TRANSPARENT,
    KC_F6,
    KC_F7,
    KC_F8,
    KC_F9,
    KC_F10,
    KC_F11,

    KC_TRANSPARENT,
    KC_UP,
    KC_KP_7,
    KC_KP_8,
    KC_KP_9,
    KC_KP_ASTERISK,
    KC_F12,

    KC_DOWN,
    KC_KP_4,
    KC_KP_5,
    KC_KP_6,
    KC_KP_PLUS,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_KP_1,
    KC_KP_2,
    KC_KP_3,
    KC_KP_SLASH,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_KP_DOT,
    KC_KP_0,
    KC_KP_EQUAL,
    KC_TRANSPARENT,

    // right thumb
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT
  ),

  [2] = KEYMAP(
    // left main
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_MS_WH_LEFT,
    KC_MS_UP,
    KC_MS_WH_RIGHT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_MS_BTN3,
    KC_MS_LEFT,
    KC_MS_DOWN,
    KC_MS_RIGHT,
    KC_MS_WH_UP,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_MS_WH_DOWN,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_MS_BTN1,
    KC_MS_BTN2,

    // left thumb
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_MS_BTN1,
    KC_MS_BTN2,
    KC_TRANSPARENT,

    // right main
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_MEDIA_PLAY_PAUSE,

    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_MEDIA_PREV_TRACK,
    KC_MEDIA_NEXT_TRACK,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    KC_AUDIO_VOL_UP,
    KC_AUDIO_VOL_DOWN,
    KC_AUDIO_MUTE,
    KC_TRANSPARENT,
    KC_TRANSPARENT,

    // right thumb
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(1)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void * matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void * matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
