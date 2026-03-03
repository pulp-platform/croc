// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"
#include "idma.h"
#include "config.h"

// Small buffers in SRAM for DMA testing
static volatile uint32_t src_buf[4] = {0xCAFE0001, 0xCAFE0002, 0xCAFE0003, 0xCAFE0004};
static volatile uint32_t dst_buf[4] = {0};

// 2D test buffers: 2 rows of 2 words each
static volatile uint32_t src_2d[4] = {0xAA, 0xBB, 0xCC, 0xDD};
static volatile uint32_t dst_2d[4] = {0};

int main() {
    // Test register write/readback
    idma_set_src_addr(0x10000100);
    CHECK_ASSERT(1, *reg32(IDMA_BASE_ADDR, IDMA_SRC_ADDR_OFFSET) == 0x10000100);

    idma_set_dst_addr(0x10000200);
    CHECK_ASSERT(2, *reg32(IDMA_BASE_ADDR, IDMA_DST_ADDR_OFFSET) == 0x10000200);

    idma_set_length(64);
    CHECK_ASSERT(3, *reg32(IDMA_BASE_ADDR, IDMA_LENGTH_OFFSET) == 64);

    idma_set_src_stride(16);
    CHECK_ASSERT(4, *reg32(IDMA_BASE_ADDR, IDMA_SRC_STRIDE_2_OFFSET) == 16);

    idma_set_dst_stride(32);
    CHECK_ASSERT(5, *reg32(IDMA_BASE_ADDR, IDMA_DST_STRIDE_2_OFFSET) == 32);

    idma_set_reps(4);
    CHECK_ASSERT(6, *reg32(IDMA_BASE_ADDR, IDMA_REPS_2_OFFSET) == 4);

    // 1D memcpy test: copy src_buf → dst_buf (16 bytes)
    dst_buf[0] = 0;
    dst_buf[1] = 0;
    dst_buf[2] = 0;
    dst_buf[3] = 0;
    idma_memcpy((uint32_t)dst_buf, (uint32_t)src_buf, 16);

    CHECK_ASSERT(7, dst_buf[0] == 0xCAFE0001);
    CHECK_ASSERT(8, dst_buf[1] == 0xCAFE0002);
    CHECK_ASSERT(9, dst_buf[2] == 0xCAFE0003);
    CHECK_ASSERT(10, dst_buf[3] == 0xCAFE0004);

    // 2D transfer test: copy 2 rows of 8 bytes (2 words) each
    dst_2d[0] = 0;
    dst_2d[1] = 0;
    dst_2d[2] = 0;
    dst_2d[3] = 0;
    idma_memcpy_2d((uint32_t)dst_2d, (uint32_t)src_2d,
                   8, // length per row: 8 bytes = 2 words
                   8, // dst stride: 8 bytes between row starts
                   8, // src stride: 8 bytes between row starts
                   2  // 2 repetitions (rows)
    );

    CHECK_ASSERT(11, dst_2d[0] == 0xAA);
    CHECK_ASSERT(12, dst_2d[1] == 0xBB);
    CHECK_ASSERT(13, dst_2d[2] == 0xCC);
    CHECK_ASSERT(14, dst_2d[3] == 0xDD);

    return 0;
}
