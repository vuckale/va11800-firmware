
#pragma once

#include "quantum.h"

#define LAYOUT2( \
  k63,  k62, k42, k61, k41, k60, k40,  k64, k45, k65, k76,  k66 \
        k72, k52, k71, k51, k70, k50,  k74, k55, k75, k46,  \
  \
  k23, k33, k22, k32, k21, k31, k20, k30, k24, k34, k25, k26, k35, k36, k27 \
  k03, k13, k02, k12, k01, k11, k00, k10, k04, k14, k05, k15, k06,   k17,\
  k93, k83, k92, k82, k91, k81, k90, k80, k94, k84, k95, k85, k96,  k87\
  kB3, KA3, kB2, kA2, kB1, kA1, kB0, kA0, kB4, kA4, kB5, kA5, kB6,  KB7, \
  kD3, kC3,                     kD0,                     kD5, kC5      kD7,\
                                                                  kC7, kD9, kC9\
) { \
    { k00,   k01,   k02,   k03,   k04,   k05, k06,   KC_NO, k08, KC_NO },\
    { k10,   k11,   k12,   k13,   k14,   k15, KC_NO, k17,   k18, KC_NO },\
    { k20,   k21,   k22,   k23,   k24,   k25, k26,   k27,   k28, KC_NO },\
    { k30,   k31,   k32,   k33,   k34,   k35, k36,   KC_NO, k38, KC_NO },\
    { k40,   k41,   k42,   KC_NO, KC_NO, k45, k46,   k47,   k48, KC_NO },\
    { k50,   k51,   k52,   KC_NO, KC_NO, k55, KC_NO, k57,   k58, KC_NO },\
    { k60,   k61,   k62,   k63,   k64,   k65, k66,   k67,   k68, KC_NO },\
    { k70,   k71,   k72,   KC_NO, k74,   k75, k76,   k77,   k78, KC_NO },\
    { k80,   k81,   k82,   k83,   k84,   k85, KC_NO, k87,   k88, KC_NO },\
    { k90,   k91,   k92,   k93,   k94,   k95, k96,   KC_NO, k98, KC_NO },\
    { kA0,   kA1,   kA2,   kA3,   kA4,   kA5, KC_NO, KC_NO, kA8, kA9 },\
    { kB0,   kB1,   kB2,   kB3,   kB4,   kB5, kB6,   kB7,   kB8, kB9 },\
    { KC_NO, KC_NO, KC_NO, kC3,   KC_NO, kC5, KC_NO, kC7,   kC8, kC9 },\
    { kD0,   KC_NO, KC_NO, kD3,   KC_NO, kD5, kD6,   kD7,   kD8, kD9 }\
}
