// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>
/*
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
    *reg8(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET) = 0xFF;  // enable lowest eight
    printf("GPIO (expect 0xA0): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    *reg8(GPIO_BASE_ADDR, GPIO_TOGGLE_REG_OFFSET) = 0x0F;
    printf("GPIO (expect 0x50): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    return 1;
}*/

#include "uart.h"
#include "print.h"

#define TB_FREQUENCY 10000000
#define TB_BAUDRATE    115200

#define TEST_MESSAGE "UART Test Passed!"
#define TEST_MESSAGE_LENGTH (sizeof(TEST_MESSAGE) - 1) // Exclude null-terminator

int main() {
    // Initialize the UART
    uart_init();

    // Send a greeting message
    printf("UART Test Start\n");
    uart_write_flush(); // Ensure all bytes are transmitted

    // Test writing a predefined message to UART
    const char *message = TEST_MESSAGE;
    uart_write_str((void *)message, TEST_MESSAGE_LENGTH);
    uart_write_flush(); // Ensure all bytes are transmitted

    // Indicate to the user to send the test message back
    printf("Send the following back: %s\n", message);
    uart_write_flush();

    // Read back the message into a buffer
    char buffer[TEST_MESSAGE_LENGTH];
    uart_read_str(buffer, TEST_MESSAGE_LENGTH);

    // Check if received message matches the sent message
    int test_passed = 1;
    for (int i = 0; i < TEST_MESSAGE_LENGTH; ++i) {
        if (buffer[i] != message[i]) {
            test_passed = 0;
            break;
        }
    }

    // Print the test result
    if (test_passed) {
        printf("UART Test Passed!\n");
    } else {
        printf("UART Test Failed!\n");
    }

    uart_write_flush(); // Ensure all bytes are transmitted

    return 0;
}

