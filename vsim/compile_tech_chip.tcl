# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

if {[catch { vlog -incr -sv \
    +define+FUNCTIONAL \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_io/verilog/sg13g2_io.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_stdcell/verilog/sg13g2_stdcell.v" \
    "$ROOT/ihp13/bondpad/verilog/bondpad_70x70.v" \
}]} {return 1}