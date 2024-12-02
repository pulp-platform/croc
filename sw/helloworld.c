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
    return 1;
}
