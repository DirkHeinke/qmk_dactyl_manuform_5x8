#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

// RowCol

#define LAYOUT_5x8( \
    L11, L21, L31, L41, L51, L61, L71,            R71, R61, R51, R41, R31, R21, R11, \
    L12, L22, L32, L42, L52, L62, L72,            R72, R62, R52, R42, R32, R22, R12, \
    L13, L23, L33, L43, L53, L63, L73,            R73, R63, R53, R43, R33, R23, R13, \
    L14, L24, L34, L44, L54, L64,                      R64, R54, R44, R34, R24, R14, \
    L15, L25, L35, L45,                                          R45, R35, R25, R15, \
                        L55, L65,                      R65, R55,                     \
                                L81, L82,      R82, R81,                             \
                                L83, L84,      R84, R83                              \
  ) \
  { \
    { L11, L12, L13, L14,   L15  }, \
    { L21, L22, L23, L24,   L25  }, \
    { L31, L32, L33, L34,   L35  }, \
    { L41, L42, L43, L44,   L45  }, \
    { L51, L52, L53, L54,   L55  }, \
    { L61, L62, L63, L64,   L65  }, \
    { L71, L72, L73, KC_NO, KC_NO  }, \
    { L81, L82, L83, L84,   KC_NO  }, \
    \
    { R11, R12, R13, R14,   R15  }, \
    { R21, R22, R23, R24,   R25  }, \
    { R31, R32, R33, R34,   R35  }, \
    { R41, R42, R43, R44,   R45  }, \
    { R51, R52, R53, R54,   R55  }, \
    { R61, R62, R63, R64,   R65  }, \
    { R71, R72, R73, KC_NO, KC_NO  }, \
    { R81, R82, R83, R84,   KC_NO  }, \
}
