// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Zexin Fu <zexifu@iis.ee.ethz.ch>

#include "uart.h"
#include "print.h"
#include "gpio.h"
#include "timer.h"
#include "util.h"

#define DATA_SIZE 256
unsigned char data[DATA_SIZE];
unsigned int crc_table[256];

// Initialize the CRC table (polynomial 0xEDB88320)
void init_crc32_table() {
    for (int i = 0; i < 256; ++i) {
        unsigned int crc = i;
        for (int j = 0; j < 8; ++j) {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xEDB88320;
            else
                crc >>= 1;
        }
        crc_table[i] = crc;
    }
}

// Compute CRC32 of a byte array
unsigned int compute_crc32(unsigned char *buf, int len) {
    unsigned int crc = 0xFFFFFFFF;
    for (int i = 0; i < len; ++i) {
        crc = (crc >> 8) ^ crc_table[(crc ^ buf[i]) & 0xFF];
    }
    return crc ^ 0xFFFFFFFF;
}

int main() {
    // uart_init();
    // printf("Running CRC32 benchmark...\n");
    // uart_write_flush();

    // Fill the data buffer with a pattern
    for (int i = 0; i < DATA_SIZE; ++i) {
        data[i] = i ^ (i << 1);
    }

    init_crc32_table();

    uint32_t start = get_mcycle();
    unsigned int result = compute_crc32(data, DATA_SIZE);
    uint32_t end = get_mcycle();

    printf("CRC32 result: 0x%x\n", result);
    // printf("Cycles: 0x%x\n", end - start);
    // uart_write_flush();

    return 1;
}
