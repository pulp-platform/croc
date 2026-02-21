#!/bin/bash
# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

# Author:  Philippe Sauter <phsauter@iis.ee.ethz.ch>

LOG_FILE=$1

expected_lines=(
  "\[CORE\] Waking core via CLINT msip"
  "\[JTAG\] Halting hart 0"
  "\[JTAG\] Resumed hart 0"
  "\[UART\] Hello World from Croc v1!"
  "\[UART\]   iDMAEnable: 0"
  "\[UART\]   Core: CVE2, RV32CIU"
  "\[UART\]   PMPEnable: 0"
  "\[UART\]   SRAM: 2h banks x 200h words"
  "\[UART\]   Debug\s*: present"
  "\[UART\]   Bootrom\s*: present"
  "\[UART\]   CLINT\s*: present"
  "\[UART\]   SoC Ctrl\s*: present"
  "\[UART\]   UART\s*: present"
  "\[UART\]   GPIO\s*: present"
  "\[UART\]   Timer\s*: present"
  "\[UART\]   iDMA\s*: not present"
  "\[UART\]   User ROM\s*: not present"
)

for line in "${expected_lines[@]}"; do
  if ! grep -q "$line" "$LOG_FILE"; then
    echo "Error: Expected line not found in the log: '$line'"
    exit 1
  fi
done

echo "Hello world simulation passed."
exit 0
