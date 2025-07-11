/* Copyright (c) 2024 ETH Zurich and University of Bologna.
 * Licensed under the Apache License, Version 2.0, see LICENSE for details.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Authors:
 * - Paul Scheffler <paulsc@iis.ee.ethz.ch>
 * - Philippe Sauter <phsauter@iis.ee.ethz.ch> 
 */

OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY 
{
   SRAM (rwxail) : ORIGIN = 0x10000000, LENGTH = 4K
}

SECTIONS
{
  /DISCARD/ : { *(.riscv.attributes) *(.comment) }

  .text._start : {
      *(.text._start)
  } >SRAM

  .misc : ALIGN(4) {
      *(.sdata)
      *(.sbss)
      *(.*data*)
      *(.*bss*)
      *(COMMON)
  } >SRAM

  .text : ALIGN(4) {
      *(.text)
      *(.text.*)
  } >SRAM
}

/* Global absolute symbols */
PROVIDE(__global_pointer$ = ADDR(.misc) + SIZEOF(.misc)/2);
PROVIDE(__stack_pointer$ = ORIGIN(SRAM) + LENGTH(SRAM));
PROVIDE(status = 0x03000008);
