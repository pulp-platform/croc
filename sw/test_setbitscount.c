// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "uart.h"
#include "print.h"
#include "gpio.h"
#include "util.h"

#define TB_FREQUENCY 10000000
#define TB_BAUDRATE    115200

unsigned int count_set_bits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}

int main() {
    uart_init();

    printf("He%xo World!\n", 0x11);
    uart_write_flush();
    *reg8(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET) = 0x0F; // lowest four as outputs
    *reg8(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = 0x0A; // ready output pattern
    *reg8(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET)  = 0xFF;  // enable lowest eight
    asm volatile (
        "nop; nop; nop; nop; nop;"
    ); // wait a few cycles to give GPIO signal time to propagate
    printf("GPIO (expect 0xA0): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    *reg8(GPIO_BASE_ADDR, GPIO_TOGGLE_REG_OFFSET) = 0x0F;
    asm volatile (
        "nop; nop; nop; nop; nop;"
    ); // wait a few cycles to give GPIO signal time to propagate
    printf("GPIO (expect 0x50): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    uart_write_flush();

    for(volatile int i = 0; i < 128; i++) {}

    uint32_t t0, t1, t2, t3;
    uint32_t array[8] = {0x7bdf967f, 0xa6c04951, 0x3f78fb58, 0x4d6a542b, 0x9f7898b2, 0x2d9e72ad, 0x1f4fcbde};

    asm volatile("csrr %0, mcycle" : "=r"(t0)::"memory");

    uint32_t result_a = 0;
    result_a += count_set_bits(array[0]);
    result_a += count_set_bits(array[1]);
    result_a += count_set_bits(array[2]);
    result_a += count_set_bits(array[3]);
    result_a += count_set_bits(array[4]);
    result_a += count_set_bits(array[5]);
    result_a += count_set_bits(array[6]);
    result_a += count_set_bits(array[7]);

    asm volatile("csrr %0, mcycle" : "=r"(t1)::"memory");

    for(volatile int i = 0; i < 128; i++) {}

    asm volatile("csrr %0, mcycle" : "=r"(t2)::"memory");
    
    // Reset the accumulator
    *reg32(USER_SETBITCOUNT_BASE_ADDR, 0x0) = 0x0;

    // Accumulate
    for(int i = 0; i < 8; i++) {
        *reg32(USER_SETBITCOUNT_BASE_ADDR, 0x4) = array[i];
    }
    // Read result
    uint32_t result_b = *reg32(USER_SETBITCOUNT_BASE_ADDR, 0x8);

    asm volatile("csrr %0, mcycle" : "=r"(t3)::"memory");

    printf("Result: software %x (%x cycles) , hardware %x (%x cycles)\n", result_a, t1-t0, result_b, t3-t2);
    uart_write_flush();

    return 1;
}
