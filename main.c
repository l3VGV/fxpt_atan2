/*
 * fxpt_atan2.c
 *
 * Copyright (C) 2012, Xo Wang
 *
 * Hacked up to be a bit more ARM-friendly by:
 * Copyright (C) 2013 Jared Boone, ShareBrained Technology, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */




#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#define PI 3.14159265



static inline int32_t q15_mul(const int32_t j, const int32_t k) {
    const int32_t intermediate = j * k;
    return (intermediate + ((intermediate & 0x7FFF) == 0x4000 ? 0 : 0x4000)) >> 15;
}

static inline int32_t q15_div(const int32_t numer, const int32_t denom) {
    return (numer << 15) / denom;
}

int16_t fxpt_atan2(const int32_t y, const int32_t x) {
    static const int32_t k1 = 2847;
    static const int32_t k2 = 11039;
    if (x == y) { // x/y or y/x would return -1 since 1 isn't representable
        if (y > 0) { // 1/8
            return 8192;
        } else if (y < 0) { // 5/8
            return 40960;
        } else { // x = y = 0
            return 0;
        }
    }
    const int32_t abs_y = abs(y), abs_x = abs(x);
    if (abs_x > abs_y) { // octants 1, 4, 5, 8
        const int32_t y_over_x = q15_div(y, x);
        const int32_t correction = q15_mul(k1, abs(y_over_x));
        const int32_t unrotated = q15_mul(k2 - correction, y_over_x);
        if (x > 0) { // octants 1, 8
            return unrotated;
        } else { // octants 4, 5
            return 32768 + unrotated;
        }
    } else { // octants 2, 3, 6, 7
        const int32_t x_over_y = q15_div(x, y);
        const int32_t correction = q15_mul(k1, abs(x_over_y));
        const int32_t unrotated = q15_mul(k2 - correction, x_over_y);
        if (y > 0) { // octants 2, 3
            return 16384 - unrotated;
        } else { // octants 6, 7
            return 49152 - unrotated;
        }
    }
}


int main()
{
    for(int32_t i=0; i<360; i += 5)
    {
        int16_t cs= 32767.0 * cos(i*PI / 180);
        int16_t sn= 32767.0 * sin(i*PI / 180);

        int16_t at2 = 32767.0 * atan2(sn, cs) / (PI);

        printf(" angle = %i, fxpt_atan2 = %i, atan2 = %i, sn= %i cs=%i\n", i, fxpt_atan2(sn, cs), at2, sn, cs);
    }
    return 0;
}
