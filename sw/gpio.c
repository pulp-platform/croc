// Copyright (c) 2025 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

#include "timer.h"
#include "gpio.h"

int main() {

    int now = 0;

    gpio_set_direction(0xFFFF, 0x0007);
    gpio_enable(0x07);
    gpio_write(now);

    while (1) {
        sleep_ms(100);
        now = now + 1;
        gpio_write(now);
    }

    return 0;
}
