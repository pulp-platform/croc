// Copyright 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#pragma once

#define SOC_CTRL_BOOTADDR_REG_OFFSET 0x00
#define SOC_CTRL_FETCHEN_REG_OFFSET 0x04
#define SOC_CTRL_CORESTATUS_REG_OFFSET 0x08
#define SOC_CTRL_BOOTMODE_REG_OFFSET 0x0C
#define SOC_CTRL_SRAM_DLY_REG_OFFSET 0x10

// Read-only hardware info register (see soc_ctrl_regs.sv for full field layout)
// Groups: SoC identity/features [31:24], core identity/features [23:16], SRAM config [15:5]
#define SOC_CTRL_INFO_REG_OFFSET 0x14
// SoC identity & features [31:24]
#define SOC_CTRL_INFO_VERSION_OFFSET 28 // [31:28] major SoC version
#define SOC_CTRL_INFO_VERSION_MASK 0xF
#define SOC_CTRL_INFO_IDMA_BIT 27 // [27]
// Core identity & features [23:16]
#define SOC_CTRL_INFO_CORE_ID_OFFSET 22 // [23:22]
#define SOC_CTRL_INFO_CORE_ID_MASK 0x3
#define SOC_CTRL_INFO_CORE_ID_CVE2 0
#define SOC_CTRL_INFO_CORE_ID_CUSTOM 3
#define SOC_CTRL_INFO_PMP_BIT 21 // [21]
// Memory configuration [15:5]
#define SOC_CTRL_INFO_SRAM_BANKS_OFFSET 13 // [15:13]
#define SOC_CTRL_INFO_SRAM_BANKS_MASK 0x7
#define SOC_CTRL_INFO_SRAM_WORDS_OFFSET 5 // [12:5] stored as SramBankNumWords/64
#define SOC_CTRL_INFO_SRAM_WORDS_MASK 0xFF
// Note: M and B ISA extensions are readable from the misa CSR (bits 12 and 1)
