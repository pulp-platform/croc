// Copyright 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include <stdarg.h>

#pragma once

extern void putchar(char);

const char print_lookup[16] = {'0', '1', '2', '3', '4', '5', '6', '7', 
                                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

void printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            if (*fmt == 'x') { // hex
                unsigned int hex = va_arg(args, unsigned int);
                char buffer[11];  // holds string while assembling
                unsigned int i = 0;
                
                if (hex == 0) {
                    putchar('0');
                } else {
                    while (hex > 0) {
                        buffer[i++] = print_lookup[hex & 0xF];
                        hex >>= 4;
                    }
                    // print from stack
                    for (int j = i - 1; j >= 0; j--) {
                        putchar(buffer[j]);
                    }
                }
            }
        } else {
            putchar(*fmt);
        }
        fmt++;
    }

    va_end(args);
}
