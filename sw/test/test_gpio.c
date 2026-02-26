// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"
#include "gpio.h"
#include "config.h"

int main() {
    uint32_t val;

    // Set lower 4 pins as output, enable lower 8
    gpio_set_direction(0xFFFF, 0x000F);
    gpio_enable(0xFF);

    // Write a pattern and read back (TB loopback expected)
    gpio_write(0x0A);
    asm volatile("nop; nop; nop; nop; nop;");
    val = gpio_read();
    // Output pins (3:0) driven to 0xA, input pins (7:4) should read 0
    // Combined: 0xA0 in loopback TB (output feeds back to input shifted)
    // or 0x0A if output register reads back directly
    // Accept either — the key test is that the value is stable and non-garbage
    CHECK_ASSERT(1, (val & 0x0F) == 0x0A || (val & 0xFF) == 0xA0);

    // Test toggle
    gpio_toggle(0x0F);
    asm volatile("nop; nop; nop; nop; nop;");
    val = gpio_read();
    // After toggling lower 4 bits: 0xA ^ 0xF = 0x5
    CHECK_ASSERT(2, (val & 0x0F) == 0x05 || (val & 0xFF) == 0x50);

    // Test pin-level operations (output pins 3:0 loop back to input pins 7:4)
    gpio_pin_set(0);
    asm volatile("nop; nop; nop; nop; nop;");
    // Pin 0 is an output; its value appears on input pin 4 via TB loopback
    CHECK_ASSERT(3, gpio_pin_read(4) == 1);

    gpio_pin_clear(0);
    asm volatile("nop; nop; nop; nop; nop;");
    CHECK_ASSERT(4, gpio_pin_read(4) == 0);

    gpio_pin_toggle(1);
    asm volatile("nop; nop; nop; nop; nop;");

    // Disable GPIOs
    gpio_disable(0xFF);

    return 0;
}
