// Copyright 2022 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Nils Wistoff <nwistoff@iis.ee.ethz.ch>
// Paul Scheffler <paulsc@iis.ee.ethz.ch>

#include "gpio.h"
#include "util.h"
#include "config.h"

void gpio_set_direction(uint32_t mask, uint32_t direction) {
    uint32_t dir_old = *reg32(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET);
    *reg32(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET) = (dir_old & ~mask) | (direction & mask);
}

void gpio_enable(uint32_t mask) {
    *reg32(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET) |= mask;
}

void gpio_disable(uint32_t mask) {
    *reg32(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET) &= ~mask;
}

void gpio_write(uint32_t value) {
    *reg32(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = value;
}

void gpio_toggle(uint32_t mask) {
    *reg32(GPIO_BASE_ADDR, GPIO_TOGGLE_REG_OFFSET) = mask;
}

uint32_t gpio_read(void) {
    return *reg32(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET);
}

void gpio_enable_rising_interrupts(uint32_t mask) {
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EDGE_REG_OFFSET) |= mask;
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EN_REG_OFFSET) |= mask;
}

void gpio_enable_falling_interrupts(uint32_t mask) {
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EDGE_REG_OFFSET) &= ~mask;
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EN_REG_OFFSET) |= mask;
}

void gpio_disable_interrupts(uint32_t mask) {
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EN_REG_OFFSET) &= ~mask;
}

uint32_t gpio_get_interrupt_status(void) {
    return *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_STATUS_REG_OFFSET);
}

void gpio_pin_set_output(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET) |= (1 << gpio_pin);
}

void gpio_pin_enable(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET) |= (1 << gpio_pin);
}

void gpio_pin_disable(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET) &= ~(1 << gpio_pin);
}

void gpio_pin_set(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) |= (1 << gpio_pin);
}

void gpio_pin_clear(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) &= ~(1 << gpio_pin);
}

void gpio_pin_toggle(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_TOGGLE_REG_OFFSET) = (1 << gpio_pin);
}

uint8_t gpio_pin_read(uint8_t gpio_pin) {
    return (*reg32(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET) >> gpio_pin) & 1;
}

void gpio_pin_enable_rising_interrupt(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EDGE_REG_OFFSET) |= (1 << gpio_pin);
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EN_REG_OFFSET) |= (1 << gpio_pin);
}

void gpio_pin_enable_falling_interrupt(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EDGE_REG_OFFSET) &= ~(1 << gpio_pin);
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EN_REG_OFFSET) |= (1 << gpio_pin);
}

void gpio_pin_disable_interrupts(uint8_t gpio_pin) {
    *reg32(GPIO_BASE_ADDR, GPIO_INTRPT_EN_REG_OFFSET) &= ~(1 << gpio_pin);
}

uint8_t gpio_pin_get_interrupt_status(uint8_t gpio_pin) {
    return (*reg32(GPIO_BASE_ADDR, GPIO_INTRPT_STATUS_REG_OFFSET) >> gpio_pin) & 1;
}
