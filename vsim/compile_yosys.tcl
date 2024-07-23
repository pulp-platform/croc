# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/yosys/out/croc_debug.yosys.v" \
}]} {return 1}
