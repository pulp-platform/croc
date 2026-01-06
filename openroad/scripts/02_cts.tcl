# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Stage 02: Clock Tree Synthesis (CTS)
#
# This stage performs:
# - Repair clock inverters
# - Clock tree synthesis with buffering
# - Legalization of CTS cells
# - Repair setup timing violations
#
# Required environment variables:
#   PROJ_NAME    - Project name (e.g., "croc")
#   TOP_DESIGN   - Top module name
#   REPORTS      - Reports output directory
#   SAVE         - Checkpoint save directory
#   INPUT_CHECKPOINT - Input checkpoint name (without .zip extension)
#
# Input checkpoint: 03_${PROJ_NAME}.dpl
# Output checkpoint: 04_${PROJ_NAME}.cts

###############################################################################
# Setup
###############################################################################
set proj_name $::env(PROJ_NAME)
set top_design $::env(TOP_DESIGN)
set report_dir $::env(REPORTS)
set save_dir $::env(SAVE)

# Helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl
source scripts/init_tech.tcl

# Load checkpoint from previous stage
set input_checkpoint $::env(INPUT_CHECKPOINT)
utl::report "Loading checkpoint: ${input_checkpoint}"
load_checkpoint ${input_checkpoint}

###############################################################################
# Clock Tree Synthesis
###############################################################################
set log_id 4
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: CLOCK TREE SYNTHESIS"
utl::report "###############################################################################"

# Note: clock_nets variable was set in stage_01 and saved in checkpoint
# Unset dont_touch on clock nets so CTS can insert buffers
set clock_nets [get_nets -of_objects [get_pins -of_objects "*_reg" -filter "name == CLK"]]
unset_dont_touch $clock_nets

utl::report "Repair clock inverters"
repair_clock_inverters

utl::report "Clock Tree Synthesis"
set_wire_rc -clock -layer Metal4

# CTS buffer list (defined in init_tech.tcl)
# ctsBuf and ctsBufRoot are set based on PDK
clock_tree_synthesis -buf_list $ctsBuf -root_buf $ctsBufRoot \
                     -sink_clustering_enable \
                     -repair_clock_nets

# Legalize CTS cells
utl::report "Detailed placement"
set DPL_ARGS {}
detailed_placement {*}$DPL_ARGS

utl::report "Estimate parasitics"
estimate_parasitics -placement

# Propagate clocks now that we have a clock-tree
set_propagated_clock [all_clocks]

report_metrics "${log_id_str}_${proj_name}.cts_unrepaired"

# Repair all setup timing
utl::report "Repair setup"
repair_timing -setup -skip_pin_swap -verbose

# Place inserted cells
utl::report "Detailed placement"
detailed_placement {*}$DPL_ARGS

utl::report "Check placement"
check_placement -verbose

utl::report "Estimate parasitics"
estimate_parasitics -placement

report_cts -out_file ${report_dir}/${log_id_str}_${proj_name}.cts.rpt
report_metrics "${log_id_str}_${proj_name}.cts"
save_checkpoint ${log_id_str}_${proj_name}.cts
report_image "${log_id_str}_${proj_name}.cts" true false true

utl::report "###############################################################################"
utl::report "# Stage 02 complete: Checkpoint saved to ${save_dir}/${log_id_str}_${proj_name}.cts.zip"
utl::report "###############################################################################"

# Exit successfully
exit 0
