
#pragma once

#define MATRIX_COL_PINS \
    { B10, B1, B0, A7, A6, A5, A4, A3, A2 }

#define MATRIX_ROW_PINS \
    { C15, C14, C13, B12, B13, B14, B15, A0, A1, A15, B3, B4, B5, B6 } 

// B9, B8, B7 -> Numlock, Capslock, Layer LED 
// A8, A10 Data and Clock Pins for PS/2 Mouse

// free but not usable on STM32F0X QMK:
// B2, A9, A11, A12

// TG(1) B15 + A4
// Test with C15 + B10

// C13 LED on board
// A0 secret bootloader
