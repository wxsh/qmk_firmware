#pragma once

#include "quantum.h"

#define L__ KC_NO
#define R__ KC_NO

#define LAYOUT_fang( \
         L00, L10, L20, L30, L40, L50, L60,	             R60, R50, R40, R30, R20, R10, R00, \
         L01, L11, L21, L31, L41, L51, L61,              R61, R51, R41, R31, R21, R11, R01, \
         L02, L12, L22, L32, L42, L52, L62,              R62, R52, R42, R32, R22, R12, R02, \
         L03, L13, L23, L33, L43, L53, L54, L63,    R63, R54, R53, R43, R33, R23, R13, R03, \
                        L04, L14, L24, L34, L44,    R44, R34, R24, R14, R04 \
) \
{ \
    { L00, L10, L20, L30, L40, L50, L60}, \
    { L01, L11, L21, L31, L41, L51, L61}, \
    { L02, L12, L22, L32, L42, L52, L62}, \
    { L03, L13, L23, L33, L43, L53, L63}, \
    { L04, L14, L24, L34, L44, L54, L__}, \
    { R00, R10, R20, R30, R40, R50, R60}, \
    { R01, R11, R21, R31, R41, R51, R61}, \
    { R02, R12, R22, R32, R42, R52, R62}, \
    { R03, R13, R23, R33, R43, R53, R63}, \
    { R04, R14, R24, R34, R44, R54, R__} \
}
