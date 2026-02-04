# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Paul Scheffler <paulsc@iis.ee.ethz.ch>
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
#
# Minimal SRAM startup stub.
# Register init, trap handling, and EOC are in the bootrom.
# This file provides:
# - Vector table at 0x1000_0000 (j _start + function pointers for
#   exception/interrupt handlers read by the bootrom trap handler)
# - _start: set SP and GP, then tail-call main
# - Weak default handlers (just ret)

# ==================================================================
# Vector table at SRAM base address (read by bootrom trap handler)
# ==================================================================
.section .vectors, "ax", @progbits
  .option push
  .option norvc          # forbid compressed encodings in this section
  .align  2              # 4-byte align

  jal     x0, _start              # Skip over function pointer table
  .word   croc_exception_handler  # Pointer read by bootrom at offset 4
  .word   croc_interrupt_handler  # Pointer read by bootrom at offset 8
  .option pop
  
# ==================================================================
# Startup: set stack/global pointer, then jump to main
# ==================================================================
.globl _start
.section .text._start
_start:
  la      sp, __stack_pointer$
  .option push
  .option norelax
  la      gp, __global_pointer$
  .option pop
  tail    main

# ==================================================================
# Default exception handler (weak, override in C)
# ==================================================================
.section .text
.weak croc_exception_handler
.globl croc_exception_handler
croc_exception_handler:
  ret

# ==================================================================
# Default interrupt handler (weak, override in C)
# ==================================================================
.weak croc_interrupt_handler
.globl croc_interrupt_handler
croc_interrupt_handler:
  li      t0, 7             # timer interrupt ID
  bne     a0, t0, 1f        # not timer? skip
  li      t0, (1 << 7)      # MTIE bit
  csrc    mie, t0           # disable timer interrupt
1:
  ret
