// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"
#include "obi_timer.h"
#include "config.h"

int main() {
    // Ensure timer is disabled to start
    obi_timer_set_enable(0);

    // Test compare register write/readback
    obi_timer_set_compare(0x1234);
    CHECK_ASSERT(1, obi_timer_get_compare() == 0x1234);

    obi_timer_set_compare(0xABCD);
    CHECK_ASSERT(2, obi_timer_get_compare() == 0xABCD);

    // Test count register write/readback
    obi_timer_set_count(0);
    CHECK_ASSERT(3, obi_timer_get_count() == 0);

    // Test enable/autoreset flags
    obi_timer_set_autoreset(1);
    CHECK_ASSERT(4, obi_timer_get_autoreset() == 1);
    obi_timer_set_autoreset(0);
    CHECK_ASSERT(5, obi_timer_get_autoreset() == 0);

    // Start timer with a short compare value and verify counter increments
    obi_timer_set_count(0);
    obi_timer_set_compare(1000);
    obi_timer_set_enable(1);

    // Wait a bit for counter to advance
    for (volatile int i = 0; i < 50; i++)
        ;

    uint32_t cnt = obi_timer_get_count();
    CHECK_ASSERT(6, cnt > 0);

    // Disable timer
    obi_timer_set_enable(0);

    return 0;
}
