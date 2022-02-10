/* Copyright 2021 Your Name (@yourgithub)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

void turn_off_led(pin_t pin);
void turn_on_led(pin_t pin);

#define LAYOUT(                                                                                         \
  k00,  k11, k01, k12, k02, k13, k03,  k14, k05, k15, k06,  k16,                     k17, k07, k18, k08,\
        k31, k21, k32, k22, k33, k23,  k34, k25, k35, k36,                           k37, k27, k38, k28,\
                                                                                     k58, k48, k68, K78,\
  k50, k40, k51, k41, k52, k42, k53, k43, k54, k44, k55, k45, k56, k46, k57,         k98, k88, kA8, kB8,\
  k70, k60, k71, k61, k72, k62, k73, k63, k74, k64, k75, k65, k76,   k67,            kC8, kD8, kA7, kB6,\
  k90, k80, k91, k81, k92, k82, k93, k83, k94, k84, k95, k85, k96,  k87,                                \
  kB0, kA0, kB1, kA1, kB2, kA2, kB3, kA3, kB4, kA4, kB5, kA5, kA6,  kB7,                                \
  kD0, kC0, kD1,                    kD3,                     kD5, kC5, kD6,      kD7,                   \
                                                                            kC7, kC4, kD4               \
) {                                                                                                     \
    { k00,   k01,   k02,   k03,   KC_NO, k05, k06,   k07,   k08 },                                      \
    { KC_NO, k11,   k12,   k13,   k14,   k15, k16,   k17,   k18   },                                    \
    { KC_NO, k21,   k22,   k23,   KC_NO, k25, KC_NO, k27,   k28   },                                    \
    { KC_NO, k31,   k32,   k33,   k34,   k35, k36,   k37,   k38   },                                    \
    { k40,   k41,   k42,   k43,   k44,   k45, k46,   KC_NO, k48   },                                    \
    { k50,   k51,   k52,   k53,   k54,   k55, k56,   k57,   k58   },                                    \
    { k60,   k61,   k62,   k63,   k64,   k65, KC_NO, k67,   k68 },                                      \
    { k70,   k71,   k72,   k73,   k74,   k75, k76,   KC_NO, KC_NO },                                    \
    { k80,   k81,   k82,   k83,   k84,   k85, KC_NO, k87,   k88   },                                    \
    { k90,   k91,   k92,   k93,   k94,   k95, k96,   KC_NO, k98   },                                    \
    { kA0,   kA1,   kA2,   kA3,   kA4,   kA5, kA6,   kA7,   kA8   },                                    \
    { kB0,   kB1,   kB2,   kB3,   kB4,   kB5, kB6,   kB7,   kB8   },                                    \
    { kC0,   KC_NO, KC_NO, KC_NO, kC4,   kC5, KC_NO, kC7,   kC8   },                                    \
    { kD0,   kD1,   KC_NO, kD3,   kD4,   kD5, kD6,   kD7,   kD8   }                                     \
}
