# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Published with permission from Siemens. 
# Siemens QuestaSim is available through EDA Higher Education Software Program
# https://www.sw.siemens.com/en-US/academic/educators/eda-higher-education-software/
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

set ROOT ".."
set pdk_name [expr {[info exists ::env(CROC_PDK)] ? $::env(CROC_PDK) : "sg13cmos5l"}]

if {$pdk_name eq "sg13cmos5l"} {
    if {[catch { vlog -incr -sv \
        +define+FUNCTIONAL \
        "$ROOT/technology/verilog/sg13g2_udp.v" \
        "$ROOT/technology/verilog/sg13g2_stdcell.v" \
        "$ROOT/technology/verilog/sg13cmos5l_io.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_core_behavioral_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_64x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_256x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_512x32_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_512x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_1024x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_2048x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_256x48_c2_bm_bist.v" \
        "$ROOT/ihp13/tc_sram_impl.sv" \
        "$ROOT/ihp13/tc_clk.sv" \
    }]} {return 1}
} elseif {$pdk_name eq "sg13g2"} {
    if {[catch { vlog -incr -sv \
        +define+FUNCTIONAL \
        "$ROOT/technology/verilog/sg13g2_udp.v" \
        "$ROOT/technology/verilog/sg13g2_stdcell.v" \
        "$ROOT/technology/verilog/sg13g2_io.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_core_behavioral_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_64x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_256x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_512x32_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_512x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_1024x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_2048x64_c2_bm_bist.v" \
        "$ROOT/technology/verilog/RM_IHPSG13_1P_256x48_c2_bm_bist.v" \
        "$ROOT/ihp13/tc_sram_impl.sv" \
        "$ROOT/ihp13/tc_clk.sv" \
    }]} {return 1}
} else {
    puts stderr "Unknown CROC_PDK '$pdk_name'"
    return 1
}
