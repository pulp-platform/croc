// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Author: Daniel Keller <dankeller@iis.ee.ethz.ch>
//
// DPI-C test entry point for croc_idma standalone testbench.
// Mirrors sw/test/test_idma.c but uses DPI bridge instead of
// memory-mapped I/O, and DPI memory access for src/dst buffers.
//
// Called from SystemVerilog via: import "DPI-C" context task run_idma_test(...)

#include "dpi_bridge.h"

// Address map (from sw/config.h)
#define IDMA_BASE_ADDR           0x0300B000

// Register offsets (from sw/lib/inc/idma.h)
#define IDMA_CONF_OFFSET         0x00
#define IDMA_NEXT_ID_OFFSET      0x44
#define IDMA_DONE_ID_OFFSET      0x84
#define IDMA_DST_ADDR_OFFSET     0xd0
#define IDMA_SRC_ADDR_OFFSET     0xd8
#define IDMA_LENGTH_OFFSET       0xe0
#define IDMA_DST_STRIDE_2_OFFSET 0xe8
#define IDMA_SRC_STRIDE_2_OFFSET 0xf0
#define IDMA_REPS_2_OFFSET       0xf8

#define IDMA_CONF_ND_ENA_BIT     11

// iDMA HAL functions (from idma_hal_dpi.c)
extern void idma_set_src_addr(uint32_t addr);
extern void idma_set_dst_addr(uint32_t addr);
extern void idma_set_length(uint32_t length);
extern void idma_set_nd_enable(int enable);
extern void idma_set_src_stride(uint32_t stride);
extern void idma_set_dst_stride(uint32_t stride);
extern void idma_set_reps(uint32_t reps);
extern uint32_t idma_launch(void);
extern uint32_t idma_done_id(void);
extern uint32_t idma_is_done(uint32_t job_id);
extern uint32_t idma_memcpy(uint32_t dst, uint32_t src, uint32_t length);
extern uint32_t idma_memcpy_2d(uint32_t dst, uint32_t src, uint32_t length, uint32_t dst_stride, uint32_t src_stride,
                               uint32_t reps);

// Memory region base addresses (must match tb_croc_idma_pkg.sv)
#define SRC_MEM_BASE 0x10000000
#define DST_MEM_BASE 0x20000000

// ─────────────────────────────────────────────
//  Test 1: Register read/write
// ─────────────────────────────────────────────
static int test_reg_rw(void) {
    printf("\n=== Test 1: Register Read/Write ===\n");

    idma_set_src_addr(0x10000100);
    CHECK_ASSERT(1, reg_read32(IDMA_BASE_ADDR + IDMA_SRC_ADDR_OFFSET) == 0x10000100);

    idma_set_dst_addr(0x10000200);
    CHECK_ASSERT(2, reg_read32(IDMA_BASE_ADDR + IDMA_DST_ADDR_OFFSET) == 0x10000200);

    idma_set_length(64);
    CHECK_ASSERT(3, reg_read32(IDMA_BASE_ADDR + IDMA_LENGTH_OFFSET) == 64);

    idma_set_src_stride(16);
    CHECK_ASSERT(4, reg_read32(IDMA_BASE_ADDR + IDMA_SRC_STRIDE_2_OFFSET) == 16);

    idma_set_dst_stride(32);
    CHECK_ASSERT(5, reg_read32(IDMA_BASE_ADDR + IDMA_DST_STRIDE_2_OFFSET) == 32);

    idma_set_reps(4);
    CHECK_ASSERT(6, reg_read32(IDMA_BASE_ADDR + IDMA_REPS_2_OFFSET) == 4);

    // CONF ND_ENA bit readback
    idma_set_nd_enable(1);
    CHECK_ASSERT(100, (reg_read32(IDMA_BASE_ADDR + IDMA_CONF_OFFSET) >> IDMA_CONF_ND_ENA_BIT) & 1);
    idma_set_nd_enable(0);
    CHECK_ASSERT(101, !((reg_read32(IDMA_BASE_ADDR + IDMA_CONF_OFFSET) >> IDMA_CONF_ND_ENA_BIT) & 1));

    printf("[TEST 1] Register read/write: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Test 2: 1D memcpy (16 bytes, 4 words)
// ─────────────────────────────────────────────
static int test_1d_memcpy(void) {
    printf("\n=== Test 2: 1D Memcpy (16 bytes) ===\n");

    uint32_t src_addr    = SRC_MEM_BASE;
    uint32_t dst_addr    = DST_MEM_BASE;

    uint32_t src_data[4] = {0xCAFE0001, 0xCAFE0002, 0xCAFE0003, 0xCAFE0004};
    for (int i = 0; i < 4; i++) {
        dpi_src_mem_write32(src_addr + i * 4, src_data[i]);
    }

    idma_memcpy(dst_addr, src_addr, 16);

    CHECK_ASSERT(7, dpi_dst_mem_read32(dst_addr + 0) == 0xCAFE0001);
    CHECK_ASSERT(8, dpi_dst_mem_read32(dst_addr + 4) == 0xCAFE0002);
    CHECK_ASSERT(9, dpi_dst_mem_read32(dst_addr + 8) == 0xCAFE0003);
    CHECK_ASSERT(10, dpi_dst_mem_read32(dst_addr + 12) == 0xCAFE0004);

    printf("[TEST 2] 1D memcpy 16 bytes: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Test 3: 2D transfer (2 rows of 8 bytes)
// ─────────────────────────────────────────────
static int test_2d_transfer(void) {
    printf("\n=== Test 3: 2D Transfer (2 rows x 8 bytes) ===\n");

    uint32_t src_addr    = SRC_MEM_BASE + 0x100;
    uint32_t dst_addr    = DST_MEM_BASE + 0x100;

    uint32_t src_data[4] = {0xAA, 0xBB, 0xCC, 0xDD};
    for (int i = 0; i < 4; i++) {
        dpi_src_mem_write32(src_addr + i * 4, src_data[i]);
    }

    idma_memcpy_2d(dst_addr, src_addr,
                   8,  // length per row (bytes)
                   8,  // dst stride
                   8,  // src stride
                   2); // repetitions (rows)

    CHECK_ASSERT(11, dpi_dst_mem_read32(dst_addr + 0) == 0xAA);
    CHECK_ASSERT(12, dpi_dst_mem_read32(dst_addr + 4) == 0xBB);
    CHECK_ASSERT(13, dpi_dst_mem_read32(dst_addr + 8) == 0xCC);
    CHECK_ASSERT(14, dpi_dst_mem_read32(dst_addr + 12) == 0xDD);

    printf("[TEST 3] 2D transfer: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Test 4: Larger 1D transfer (256 bytes)
// ─────────────────────────────────────────────
static int test_large_1d_memcpy(void) {
    printf("\n=== Test 4: 1D Memcpy (256 bytes) ===\n");

    uint32_t src_addr = SRC_MEM_BASE + 0x1000;
    uint32_t dst_addr = DST_MEM_BASE + 0x1000;
    int num_bytes     = 256;
    int errors        = 0;

    // Fill source with incrementing byte pattern
    for (int i = 0; i < num_bytes; i++) {
        dpi_src_mem_write8(src_addr + i, (uint8_t)(i & 0xFF));
    }

    idma_memcpy(dst_addr, src_addr, num_bytes);

    // Verify byte-by-byte
    for (int i = 0; i < num_bytes; i++) {
        uint8_t expected = (uint8_t)(i & 0xFF);
        uint8_t actual   = dpi_dst_mem_read8(dst_addr + i);
        if (actual != expected) {
            if (errors < 10) printf("[FAIL] Byte %d: expected 0x%02x, got 0x%02x\n", i, expected, actual);
            errors++;
        }
    }
    CHECK_ASSERT(20, errors == 0);

    printf("[TEST 4] 1D memcpy 256 bytes: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Test 5: Back-to-back transfers
// ─────────────────────────────────────────────
static int test_back_to_back(void) {
    printf("\n=== Test 5: Back-to-back Transfers ===\n");

    uint32_t src1 = SRC_MEM_BASE + 0x2000;
    uint32_t dst1 = DST_MEM_BASE + 0x2000;
    uint32_t src2 = SRC_MEM_BASE + 0x2100;
    uint32_t dst2 = DST_MEM_BASE + 0x2100;
    int len       = 32;

    // Fill both source regions
    for (int i = 0; i < len; i++) {
        dpi_src_mem_write8(src1 + i, (uint8_t)(0xA0 + i));
        dpi_src_mem_write8(src2 + i, (uint8_t)(0xB0 + i));
    }

    // First transfer
    uint32_t id1 = idma_memcpy(dst1, src1, len);
    printf("  Transfer 1 done, id=%u\n", id1);

    // Second transfer immediately
    uint32_t id2 = idma_memcpy(dst2, src2, len);
    printf("  Transfer 2 done, id=%u\n", id2);

    // IDs should increment
    CHECK_ASSERT(30, id2 > id1);

    // Verify first transfer
    int errors = 0;
    for (int i = 0; i < len; i++) {
        uint8_t expected = (uint8_t)(0xA0 + i);
        uint8_t actual   = dpi_dst_mem_read8(dst1 + i);
        if (actual != expected) errors++;
    }
    CHECK_ASSERT(31, errors == 0);

    // Verify second transfer
    errors = 0;
    for (int i = 0; i < len; i++) {
        uint8_t expected = (uint8_t)(0xB0 + i);
        uint8_t actual   = dpi_dst_mem_read8(dst2 + i);
        if (actual != expected) errors++;
    }
    CHECK_ASSERT(32, errors == 0);

    printf("[TEST 5] Back-to-back transfers: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Test 6: Non-word-aligned length (7 bytes)
// ─────────────────────────────────────────────
static int test_unaligned_length(void) {
    printf("\n=== Test 6: Non-aligned Length (7 bytes) ===\n");

    uint32_t src_addr = SRC_MEM_BASE + 0x3000;
    uint32_t dst_addr = DST_MEM_BASE + 0x3000;
    int len           = 7;

    for (int i = 0; i < len; i++) {
        dpi_src_mem_write8(src_addr + i, (uint8_t)(0x10 + i));
    }

    idma_memcpy(dst_addr, src_addr, len);

    int errors = 0;
    for (int i = 0; i < len; i++) {
        uint8_t expected = (uint8_t)(0x10 + i);
        uint8_t actual   = dpi_dst_mem_read8(dst_addr + i);
        if (actual != expected) {
            printf("[FAIL] Byte %d: expected 0x%02x, got 0x%02x\n", i, expected, actual);
            errors++;
        }
    }
    CHECK_ASSERT(40, errors == 0);

    printf("[TEST 6] Non-aligned length 7 bytes: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Test 7: 2D scatter/gather (different strides)
// ─────────────────────────────────────────────
static int test_2d_scatter_gather(void) {
    printf("\n=== Test 7: 2D Scatter/Gather (src_stride=32, dst_stride=8) ===\n");

    // Source: 4 rows of 8 data bytes, spaced 32 bytes apart (24 bytes gap)
    // Destination: packed contiguously (stride=8)
    uint32_t src_addr = SRC_MEM_BASE + 0x4000;
    uint32_t dst_addr = DST_MEM_BASE + 0x4000;
    int row_len       = 8;
    int src_stride    = 32;
    int dst_stride    = 8;
    int reps          = 4;

    // Fill source rows
    for (int r = 0; r < reps; r++) {
        for (int b = 0; b < row_len; b++) {
            dpi_src_mem_write8(src_addr + r * src_stride + b, (uint8_t)(r * 0x10 + b));
        }
    }

    idma_memcpy_2d(dst_addr, src_addr, row_len, dst_stride, src_stride, reps);

    // Verify: rows gathered contiguously at destination
    int errors = 0;
    for (int r = 0; r < reps; r++) {
        for (int b = 0; b < row_len; b++) {
            uint8_t expected = (uint8_t)(r * 0x10 + b);
            uint8_t actual   = dpi_dst_mem_read8(dst_addr + r * dst_stride + b);
            if (actual != expected) {
                if (errors < 10) printf("[FAIL] Row %d byte %d: expected 0x%02x, got 0x%02x\n", r, b, expected, actual);
                errors++;
            }
        }
    }
    CHECK_ASSERT(50, errors == 0);

    printf("[TEST 7] 2D scatter/gather: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Test 8: IRQ and busy signal checking
// ─────────────────────────────────────────────
static int test_irq_busy(void) {
    printf("\n=== Test 8: IRQ / Busy Signals ===\n");

    uint32_t src_addr = SRC_MEM_BASE + 0x5000;
    uint32_t dst_addr = DST_MEM_BASE + 0x5000;
    int len           = 64;

    for (int i = 0; i < len; i++) {
        dpi_src_mem_write8(src_addr + i, (uint8_t)i);
    }

    // Before launch: should not be busy
    CHECK_ASSERT(60, dpi_get_busy() == 0);

    // Configure and launch (non-blocking: use low-level HAL, not idma_memcpy)
    idma_set_nd_enable(0);
    idma_set_src_addr(src_addr);
    idma_set_dst_addr(dst_addr);
    idma_set_length(len);
    uint32_t id = idma_launch();

    // Wait a couple cycles for the DMA backend to start processing
    dpi_wait_cycles(3);
    uint32_t busy_seen = dpi_get_busy();
    printf("  busy after launch: %u\n", busy_seen);
    CHECK_ASSERT(61, busy_seen == 1);

    // Poll done_id until transfer completes
    while (!idma_is_done(id))
        ;

    // Wait a few cycles for signals to settle
    dpi_wait_cycles(5);

    // After completion: should not be busy
    CHECK_ASSERT(62, dpi_get_busy() == 0);

    // Verify data
    int errors = 0;
    for (int i = 0; i < len; i++) {
        uint8_t expected = (uint8_t)i;
        uint8_t actual   = dpi_dst_mem_read8(dst_addr + i);
        if (actual != expected) errors++;
    }
    CHECK_ASSERT(63, errors == 0);

    printf("[TEST 8] IRQ/busy signals: PASS\n");
    return 0;
}

// ─────────────────────────────────────────────
//  Entry point (called from SV via DPI import)
// ─────────────────────────────────────────────
int run_idma_test(int *result) {
    int rc;

    printf("=============================================\n");
    printf(" croc_idma DPI-C Testbench\n");
    printf("=============================================\n");

    rc = test_reg_rw();
    if (rc) {
        *result = rc;
        return 0;
    }

    rc = test_1d_memcpy();
    if (rc) {
        *result = rc;
        return 0;
    }

    rc = test_2d_transfer();
    if (rc) {
        *result = rc;
        return 0;
    }

    rc = test_large_1d_memcpy();
    if (rc) {
        *result = rc;
        return 0;
    }

    rc = test_back_to_back();
    if (rc) {
        *result = rc;
        return 0;
    }

    rc = test_unaligned_length();
    if (rc) {
        *result = rc;
        return 0;
    }

    rc = test_2d_scatter_gather();
    if (rc) {
        *result = rc;
        return 0;
    }

    rc = test_irq_busy();
    if (rc) {
        *result = rc;
        return 0;
    }

    printf("\n=============================================\n");
    printf(" All tests PASSED (%d tests)\n", 8);
    printf("=============================================\n");

    *result = 0;
    return 0;
}
