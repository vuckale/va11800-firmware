
#pragma once

#include "quantum.h"

#define LAYOUT(                                                                                         \
  k63,  k62, k42, k61, k41, k60, k40,  k64, k45, k65, k76,  k66,                     k67, k47, k68, k48,\
        k72, k52, k71, k51, k70, k50,  k74, k55, k75, k46,                           k77, k57, k78, k58,\
                                                                                     k28, k38, k18, k08,\
  k23, k33, k22, k32, k21, k31, k20, k30, k24, k34, k25, k26, k35, k36, k27,         k98, k88, kA8, kB8,\
  k03, k13, k02, k12, k01, k11, k00, k10, k04, k14, k05, k15, k06,   k17,            kC8, kD8, KA7, KB6,\
  k93, k83, k92, k82, k91, k81, k90, k80, k94, k84, k95, k85, k96,  k87,                                \
  kB3, kA3, kB2, kA2, kB1, kA1, kB0, kA0, kB4, kA4, kB5, kA5, KA6,  kB7,     kD7,                       \
  kD3, kC3,                     kD0,                     kD5, kC5, kD6, kC7, KC4, KD4                   \
) {                                                                                                     \
    { k00,   k01,   k02,   k03,   k04,   k05, k06,   KC_NO, k08 },                                      \
    { k10,   k11,   k12,   k13,   k14,   k15, KC_NO, k17,   k18 },                                      \
    { k20,   k21,   k22,   k23,   k24,   k25, k26,   k27,   k28 },                                      \
    { k30,   k31,   k32,   k33,   k34,   k35, k36,   KC_NO, k38 },                                      \
    { k40,   k41,   k42,   KC_NO, KC_NO, k45, k46,   k47,   k48 },                                      \
    { k50,   k51,   k52,   KC_NO, KC_NO, k55, KC_NO, k57,   k58 },                                      \
    { k60,   k61,   k62,   k63,   k64,   k65, k66,   k67,   k68 },                                      \
    { k70,   k71,   k72,   KC_NO, k74,   k75, k76,   k77,   k78 },                                      \
    { k80,   k81,   k82,   k83,   k84,   k85, KC_NO, k87,   k88 },                                      \
    { k90,   k91,   k92,   k93,   k94,   k95, k96,   KC_NO, k98 },                                      \
    { kA0,   kA1,   kA2,   kA3,   kA4,   kA5, KA6,   KA7,   kA8 },                                      \
    { kB0,   kB1,   kB2,   kB3,   kB4,   kB5, KB6,   kB7,   kB8 },                                      \
    { KC_NO, KC_NO, KC_NO, kC3,   KC4,   kC5, KC_NO, kC7,   kC8 },                                      \
    { kD0,   KC_NO, KC_NO, kD3,   KD4,   kD5, kD6,   kD7,   kD8 }                                       \
}
