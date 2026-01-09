#!/bin/bash
# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
# Authors:
#
# - Thomas Benz  <tbenz@iis.ee.ethz.ch>

## Automatically format the code using clang-format and black
echo -e "\033[1m-> Formatting Python Code...\033[0m"
black */*.py
echo -e "\033[1m-> Formatting C Code...\033[0m"
python scripts/run_clang_format.py -ir sw/ --clang-format-executable=clang-format
