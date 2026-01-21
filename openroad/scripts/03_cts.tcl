# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Stage 03: Clock Tree Synthesis (CTS)
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
#
# Input checkpoint: 02_${PROJ_NAME}.placed
# Output checkpoint: 03_${PROJ_NAME}.cts

###############################################################################
# Setup
###############################################################################
source scripts/startup.tcl

# Load checkpoint from previous stage
load_checkpoint 02_${proj_name}.placed

# Set layers used for estimate_parasitics
setDefaultParasitics
set_dont_use $dont_use_cells


utl::report "###############################################################################"
utl::report "# Stage 03: CLOCK TREE SYNTHESIS"
utl::report "###############################################################################"

# Note: clock_nets variable was set in stage_01 and saved in checkpoint
# Unset dont_touch on clock nets so CTS can insert buffers
set clock_nets [get_nets -of_objects [get_pins -of_objects "*_reg" -filter "name == CLK"]]
unset_dont_touch $clock_nets

utl::report "Repair clock inverters"
repair_clock_inverters

utl::report "Clock Tree Synthesis"

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

report_metrics "03_${proj_name}.cts_unrepaired"

# Repair all setup timing
utl::report "Repair setup"
repair_timing -setup -verbose

# Place inserted cells
utl::report "Detailed placement"
detailed_placement {*}$DPL_ARGS

utl::report "Check placement"
check_placement -verbose

utl::report "Estimate parasitics"
estimate_parasitics -placement

report_cts -out_file ${report_dir}/03_${proj_name}.cts.rpt
report_metrics "03_${proj_name}.cts"
save_checkpoint 03_${proj_name}.cts
report_image "03_${proj_name}.cts" true false true

utl::report "###############################################################################"
utl::report "# Stage 03 complete: Checkpoint saved to ${save_dir}/03_${proj_name}.cts.zip"
utl::report "###############################################################################"
