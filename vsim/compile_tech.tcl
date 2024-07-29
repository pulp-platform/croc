# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

if {[catch { vlog -incr -sv \
    +define+FUNCTIONAL \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_stdcell/verilog/sg13g2_stdcell.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_core_behavioral_bm_bist.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_64x64_c2_bm_bist.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_256x64_c2_bm_bist.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_512x64_c2_bm_bist.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_1024x64_c2_bm_bist.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_2048x64_c2_bm_bist.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_256x48_c2_bm_bist.v" \
    "$ROOT/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_256x48_c2_bm_bist.v" \
    "$ROOT/ihp13/tc_sram.sv" \
    "$ROOT/ihp13/tc_clk.sv" \
}]} {return 1}