# Copyright 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Florian Zaruba <zarubaf@iis.ee.ethz.ch>
# Cyril Koenig <cykoenig@iis.ee.ethz.ch>
# Paul Scheffler <paulsc@iis.ee.ethz.ch>

# Initialize implementation
set xilinx_root [file dirname [file dirname [file normalize [info script]]]]
source ${xilinx_root}/scripts/common.tcl
init_impl $xilinx_root $argc $argv

# Get board type from first argument
if {$argc > 0} {
    set board_type [lindex $argv 0]
} else {
    puts "Error: No board type specified"
    exit 1
}

# Create and configure selected IP
switch $proj {
    clkwiz {
        # Source the board-specific clkwiz configuration
        set clkwiz_config_file "${xilinx_root}/scripts/clkwiz/clkwiz_${board_type}.tcl"
        if {[file exists $clkwiz_config_file]} {
            source $clkwiz_config_file
        } else {
            puts "Error: clkwiz configuration for board '$board_type' not found at $clkwiz_config_file"
            exit 1
        }
    }
    vio {
        create_ip -name vio -vendor xilinx.com -library ip -version 3.0 -module_name $proj
        set_property -dict [list \
            CONFIG.C_NUM_PROBE_OUT {3} \
            CONFIG.C_PROBE_OUT0_INIT_VAL {0x0} \
            CONFIG.C_PROBE_OUT1_INIT_VAL {0x0} \
            CONFIG.C_PROBE_OUT2_INIT_VAL {0x0} \
            CONFIG.C_PROBE_OUT1_WIDTH {2} \
            CONFIG.C_EN_PROBE_IN_ACTIVITY {0} \
            CONFIG.C_NUM_PROBE_IN {0} \
        ] [get_ips $proj]
    }
}

# Generate targets
set xci ${project_root}/${proj}.srcs/sources_1/ip/${proj}/${proj}.xci
generate_target all [get_files $xci]

# Synthesize proj
create_ip_run [get_files -of_objects [get_fileset sources_1] $xci]
launch_run -jobs $num_jobs ${proj}_synth_1
wait_on_run ${proj}_synth_1

# Symlink proj for easy access and build tracking, ensuring its update
file delete -force ${project_root}/out.xci
file link -symbolic ${project_root}/out.xci $xci
