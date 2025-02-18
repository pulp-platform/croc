// Copyright 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#pragma once

#include <stdint.h>
#include "config.h"


#define GPIO_DIR_REG_OFFSET           0x000
#define GPIO_EN_REG_OFFSET            0x080
#define GPIO_IN_REG_OFFSET            0x100
#define GPIO_OUT_REG_OFFSET           0x180
#define GPIO_TOGGLE_REG_OFFSET        0x200
#define GPIO_INTRPT_EN_REG_OFFSET     0x280
#define GPIO_INTRPT_STATUS_REG_OFFSET 0x300
#define GPIO_INTRPT_EDGE_REG_OFFSET   0x380

// functions applying to all 32 GPIOs with mask
// a 1 in the mask applies action to this GPIO pin
// LSB is considered GPIO number 0 
void gpio_set_direction(uint32_t mask, uint32_t direction); // 1: output
void gpio_enable(uint32_t mask);
void gpio_disable(uint32_t mask);

void gpio_write(uint32_t value);
void gpio_toggle(uint32_t mask);
uint32_t gpio_read(void);

void gpio_enable_rising_interrupts(uint32_t mask);
void gpio_enable_falling_interrupts(uint32_t mask);
void gpio_disable_interrupts(uint32_t mask);
uint32_t gpio_get_interrupt_status(void);

// functions applying to only one GPIO pin
// LSB is considered GPIO number 0
void gpio_pin_set_output(uint8_t gpio_pin);
void gpio_pin_enable(uint8_t gpio_pin);
void gpio_pin_disable(uint8_t gpio_pin);

void gpio_pin_set(uint8_t gpio_pin);
void gpio_pin_clear(uint8_t gpio_pin);
void gpio_pin_toggle(uint8_t gpio_pin);
uint8_t gpio_pin_read(uint8_t gpio_pin);

void gpio_pin_enable_rising_interrupt(uint8_t gpio_pin);
void gpio_pin_enable_falling_interrupt(uint8_t gpio_pin);
void gpio_pin_disable_interrupts(uint8_t gpio_pin);
uint8_t gpio_pin_get_interrupt_status(uint8_t gpio_pin);
