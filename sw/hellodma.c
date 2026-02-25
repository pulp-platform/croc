// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

#include "util.h"

int main() {

    volatile uint32_t job_id;

    set_global_irq_enable(1);
    wfi();

    *reg32(0x0300B000, 0xd0) = 0x10000800;
    *reg32(0x0300B000, 0xd8) = 0x10000000;
    *reg32(0x0300B000, 0xe0) = 1024;
    job_id = *reg32(0x0300B000, 0x44);

    return job_id;
}
