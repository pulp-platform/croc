#!/bin/bash
# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

# Author:  Philippe Sauter <phsauter@iis.ee.ethz.ch>

LOG_FILE=$1

expected_lines=(
  "\[CORE\] Start fetching instructions"
  "\[JTAG\] Halting hart 0"
  "\[JTAG\] Resumed hart 0"
  "\[UART\] Hello World!"
  "\[UART\] Loopback received: internal msg"
  "\[UART\] Result: 0x8940, Cycles: 0xBD"
  "\[UART\] Tick"
  "\[UART\] Tock"
)

for line in "${expected_lines[@]}"; do
  if ! grep -q "$line" "$LOG_FILE"; then
    echo "Error: Expected line not found in the log: '$line'"
    exit 1
  fi
done

tick=$(awk '/\[UART\] Tick/ {print $2+0}' "$LOG_FILE")
tock=$(awk '/\[UART\] Tock/ {print $2+0}' "$LOG_FILE")

echo "Tick time: ${tick}"
echo "Tock time: ${tock}"

time_diff=$(echo "scale=2; ($tock - $tick) / 1000000" | bc)
time_diff_ms=$(printf "%.0f" $time_diff)

# 1.5ms tolerance
if ((time_diff_ms >= 9 && time_diff_ms <= 11)); then
  echo "Timer correct: The gap between Tick and Tock is approximately 10ms: ${time_diff}ms."
else
  echo "Timer Error: The gap between Tick and Tock is not approximately 10ms: ${time_diff}ms."
  exit 1
fi

echo "Hello world simulation passed."
exit 0
