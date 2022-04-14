#ifndef __chars_h__
#define __chars_h__

#include <stdint.h>

uint8_t lightOff[] = {
    0B00000,
    0B00000,
    0B01110,
    0B10001,
    0B10001,
    0B11111,
    0B01010,
    0B01010
};

uint8_t lightOn[] = {
    0B00100,
    0B10101,
    0B01110,
    0B10001,
    0B10101,
    0B11111,
    0B01010,
    0B01010
};

uint8_t buttonOff[] {
    0B00000,
    0B00000,
    0B01110,
    0B01110,
    0B11111,
    0B11111,
    0B00000,
    0B00000
};

uint8_t buttonOn[] {
    0B00000,
    0B00000,
    0B00000,
    0B01110,
    0B11111,
    0B11111,
    0B00000,
    0B00000
};

#endif
