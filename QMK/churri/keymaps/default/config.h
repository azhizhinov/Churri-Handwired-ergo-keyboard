#pragma once

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }

#define DEBOUNCE 10

#define SOFT_SERIAL_PIN D0

#define SPLIT_HAND_PIN B6

#define HOLD_ON_OTHER_KEY_PRESS
