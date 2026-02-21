// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "uart.h"
#include "print.h"
#include "util.h"
#include "config.h"
#include "soc_ctrl.h"

// maximum characters to read from user ROM string
#define ROM_STRING_MAX_LEN 256

// set by croc_exception_handler on OBI load access fault (mcause == 5)
volatile int obi_error = 0;

// Overrides the default exception handler in crt0.S.
// On an OBI load error: sets obi_error and advances mepc past the faulting load.
void croc_exception_handler(uint32_t mcause) {
    if (mcause == 5) { // Load access fault
        obi_error = 1;
        uint32_t mepc;
        asm volatile("csrr %0, mepc" : "=r"(mepc));
        asm volatile("csrw mepc, %0" ::"r"(mepc + 4));
    }
}

// Attempt a 32-bit word read from addr.
static int probe_read(uint32_t addr, uint32_t *val) {
    obi_error = 0;
    *val = *(volatile uint32_t *)addr;
    return obi_error;
}

// Print a null-terminated string from a memory-mapped ROM.
// Reads one word at a time; stops on null terminator, OBI error, or max length.
static void print_rom_str(uint32_t addr) {
    uint32_t word;
    for (uint32_t n = 0, off = 0; n < ROM_STRING_MAX_LEN; off += 4) {
        if (probe_read(addr + off, &word)) return;
        for (int b = 0; b < 4 && n < ROM_STRING_MAX_LEN; b++, n++) {
            char c = (char)((word >> (b * 8)) & 0xFF);
            if (!c) return;
            putchar(c);
        }
    }
}

// Peripheral table: name (8 chars, space-padded for alignment) and base address
static const struct {
    const char *name;
    uint32_t addr;
} peripherals[] = {
    {"Debug   ", DEBUG_BASE_ADDR},     {"Bootrom ", BOOTROM_BASE_ADDR}, {"CLINT   ", CLINT_BASE_ADDR},
    {"SoC Ctrl", SOCCTRL_BASE_ADDR},   {"UART    ", UART_BASE_ADDR},    {"GPIO    ", GPIO_BASE_ADDR},
    {"Timer   ", OBI_TIMER_BASE_ADDR}, {"iDMA    ", IDMA_BASE_ADDR},    {"User ROM", USER_ROM_BASE_ADDR},
};
#define NUM_PERIPHERALS (sizeof(peripherals) / sizeof(peripherals[0]))

int main() {
    uart_init();

    // Read compile-time configuration from the SoC control info register
    uint32_t info = *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_INFO_REG_OFFSET);
    uint32_t version = ((info >> SOC_CTRL_INFO_VERSION_OFFSET) & SOC_CTRL_INFO_VERSION_MASK) + 1;
    uint32_t core_id = (info >> SOC_CTRL_INFO_CORE_ID_OFFSET) & SOC_CTRL_INFO_CORE_ID_MASK;
    uint32_t sram_banks = (info >> SOC_CTRL_INFO_SRAM_BANKS_OFFSET) & SOC_CTRL_INFO_SRAM_BANKS_MASK;
    uint32_t sram_words = ((info >> SOC_CTRL_INFO_SRAM_WORDS_OFFSET) & SOC_CTRL_INFO_SRAM_WORDS_MASK) * 64;
    uint8_t has_idma = (info >> SOC_CTRL_INFO_IDMA_BIT) & 1;
    uint8_t has_pmp = (info >> SOC_CTRL_INFO_PMP_BIT) & 1;

    // Read ISA extensions from the misa CSR (bits 0-25 map to extensions A-Z)
    uint32_t misa;
    asm volatile("csrr %0, misa" : "=r"(misa));

    printf("Hello World from Croc v%x!\n", version);

    // SoC features
    printf("  iDMAEnable: %x\n", has_idma);

    // Core: type, ISA string from misa, optional PMP
    printf("  Core: ");
    printf(core_id == SOC_CTRL_INFO_CORE_ID_CVE2     ? "CVE2"
           : core_id == SOC_CTRL_INFO_CORE_ID_CUSTOM ? "custom"
                                                     : "unknown");
    printf(", RV32");
    for (int i = 0; i < 26; i++) {
        if (misa & (1u << i)) putchar('A' + i);
    }
    putchar('\n');
    printf("  PMPEnable: %x\n", has_pmp);

    // Memory
    printf("  SRAM: %xh banks x %xh words\n", sram_banks, sram_words);

    uart_write_flush();

    // Scan all peripherals
    printf("Peripherals:\n");
    uint32_t word;
    for (uint32_t i = 0; i < NUM_PERIPHERALS; i++) {
        printf("  ");
        printf(peripherals[i].name);
        printf(": ");
        if (probe_read(peripherals[i].addr, &word)) {
            printf("not present\n");
        } else if (peripherals[i].addr == USER_ROM_BASE_ADDR) {
            // User ROM: print its null-terminated product string
            putchar('"');
            print_rom_str(USER_ROM_BASE_ADDR);
            printf("\"\n");
        } else {
            printf("present\n");
        }
    }
    uart_write_flush();

    return 0;
}
