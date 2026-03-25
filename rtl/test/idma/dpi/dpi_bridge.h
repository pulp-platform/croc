// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Author: Daniel Keller <dankeller@iis.ee.ethz.ch>

// DPI-C bridge for croc_idma standalone testbench.
// Provides register and memory access functions that map to
// SystemVerilog OBI transactions and sim-memory operations.
//
// This replaces the reg32() pointer-dereference pattern from util.h
// with DPI calls that drive actual OBI bus transactions in simulation.

#pragma once

#include <stdint.h>
#include <stdio.h>

// ────────────────────────────────────────────────────────────────
//  DPI export tasks (implemented in SV, advance simulation time)
//  These drive OBI transactions on the DUT config port.
// ────────────────────────────────────────────────────────────────
extern int dpi_reg_write(unsigned int addr, unsigned int data);
extern int dpi_reg_read(unsigned int addr, unsigned int *data);

// ────────────────────────────────────────────────────────────────
//  DPI export functions (implemented in SV, zero simulation time)
//  These directly access the obi_sim_mem associative arrays.
// ────────────────────────────────────────────────────────────────
extern void dpi_src_mem_write32(unsigned int addr, unsigned int data);
extern unsigned int dpi_dst_mem_read32(unsigned int addr);

// Byte-level memory access
extern void dpi_src_mem_write8(unsigned int addr, unsigned char data);
extern unsigned char dpi_src_mem_read8(unsigned int addr);
extern unsigned char dpi_dst_mem_read8(unsigned int addr);

// Status signals
extern unsigned int dpi_get_busy(void);
extern unsigned int dpi_get_irq(void);

// Wait N clock cycles (time-consuming)
extern int dpi_wait_cycles(unsigned int n);

// ────────────────────────────────────────────────────────────────
//  Convenience wrappers (replace reg32() from util.h)
// ────────────────────────────────────────────────────────────────

static inline void reg_write32(uint32_t addr, uint32_t data) {
    dpi_reg_write(addr, data);
}

static inline uint32_t reg_read32(uint32_t addr) {
    uint32_t data;
    dpi_reg_read(addr, &data);
    return data;
}

// ────────────────────────────────────────────────────────────────
//  Test helpers
// ────────────────────────────────────────────────────────────────

#define CHECK_ASSERT(id, cond) \
    if (!(cond)) { \
        printf("[FAIL] Assert %d failed: %s\n", (id), #cond); \
        return (id); \
    }
