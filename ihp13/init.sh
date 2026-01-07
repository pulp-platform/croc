#!/bin/bash
# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
# Authors:
#
# - Enrico Zelioli  <ezelioli@iis.ee.ethz.ch>

# Apply patches required for filling
if [ ! -f pdk.patched ]; then
    git -C pdk apply ../patches/0001-Filling-improvements.patch
    touch pdk.patched
    echo "Applied all PDK patches"
else
    echo "PDK patches already applied"
fi
