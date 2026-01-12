# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Stage 02: Placement (Repair Netlist + Global Placement + Detailed Placement)
#
# This stage performs:
# - Initial repair of the netlist (tie cells, buffers)
# - Global placement (2-pass: rough + routability-driven)
# - Detailed placement (legalization)
#
# Required environment variables:
#   PROJ_NAME    - Project name (e.g., "croc")
#   TOP_DESIGN   - Top module name
#   REPORTS      - Reports output directory
#   SAVE         - Checkpoint save directory
#   INPUT_CHECKPOINT - Input checkpoint name (without .zip extension)
#
# Input checkpoint: 01_${PROJ_NAME}.floorplan
# Output checkpoint: 02_${PROJ_NAME}.placed

###############################################################################
# Setup
###############################################################################
source scripts/startup.tcl

# Load checkpoint from previous stage
utl::report "Loading checkpoint: 01_${proj_name}.floorplan"
load_checkpoint 01_${proj_name}.floorplan

# Set layers used for estimate_parasitics
set_wire_rc -clock -layer Metal4
set_wire_rc -signal -layer Metal4

utl::report "###############################################################################"
utl::report "# Stage 02: PLACEMENT"
utl::report "###############################################################################"

###############################################################################
# Initial Repair Netlist
###############################################################################
utl::report "###############################################################################"
utl::report "# 02-01: Initial Repair Netlist"
utl::report "###############################################################################"

# Don't touch clock-tree related nets as repair_timing can insert buffers
# which then prevents CTS from running
set clock_nets [get_nets -of_objects [get_pins -of_objects "*_reg" -filter "name == CLK"]]
set_dont_touch $clock_nets
set_dont_use $dont_use_cells

utl::report "Repair tie fanout"
repair_tie_fanout sg13g2_tielo/L_LO
repair_tie_fanout sg13g2_tiehi/L_HI

utl::report "Remove buffers"
remove_buffers

utl::report "Repair design"
repair_design -verbose

save_checkpoint 02-01_${proj_name}.pre_place

###############################################################################
# Global Placement
###############################################################################
utl::report "###############################################################################"
utl::report "# 02-02: GLOBAL PLACEMENT"
utl::report "###############################################################################"

set_thread_count 8

# Placement density: 60% of area occupied by standard cells
set GPL_ARGS {  -density 0.60 }

set GPL2_ARGS { -density 0.60
                -routability_driven
                -routability_check_overflow 0.30
                -timing_driven }
# density:            In every part of the chip, about N% of the area is occupied by standard cells
# routability_driven: Reduce density target when there are a lot of wires in an area
# check_overflow:     Higher means routability starts being considered earlier in placement
#                     too early -> very dense regions, too late -> little to no effect
# timing_driven:      Prioritize near-critical timing paths (reduce their length)

# Rough placement to get parasitics from steiner-tree estimate so we can run repair_timing
utl::report "Global Placement (1)"
global_placement {*}$GPL_ARGS
report_metrics "02-02_${proj_name}.gpl1"
report_image "02-02_${proj_name}.gpl1" true true
save_checkpoint 02-02_${proj_name}.gpl1

utl::report "Estimate parasitics"
estimate_parasitics -placement
utl::report "Repair design"
repair_design -verbose
save_checkpoint 02-02_${proj_name}.gpl1_fix

# Old versions of repair_timing may swap non-equal pins, deactivated for now to avoid problems
# Likely introduced in: https://github.com/The-OpenROAD-Project/OpenROAD/pull/3215 (fixed in new versions)
utl::report "Repair setup"
repair_timing -setup -skip_pin_swap -verbose
save_checkpoint 02-02_${proj_name}.gpl1_repaired

# Actual global placement with routability and timing driven
utl::report "Global Placement (2)"
global_placement {*}$GPL2_ARGS
report_metrics "02-02_${proj_name}.gpl2"
report_image "02-02_${proj_name}.gpl2" true true
save_checkpoint 02-02_${proj_name}.gpl2

###############################################################################
# Detailed Placement
###############################################################################
utl::report "###############################################################################"
utl::report "# 02-03: DETAILED PLACEMENT"
utl::report "###############################################################################"

set DPL_ARGS {}

# Legalize overlapping cells
utl::report "Detailed placement"
detailed_placement {*}$DPL_ARGS

utl::report "Optimize mirroring"
optimize_mirroring

utl::report "Estimate parasitics"
estimate_parasitics -placement

report_metrics "02_${proj_name}.placed"
save_checkpoint 02_${proj_name}.placed
report_image "02_${proj_name}.placed" true true

utl::report "###############################################################################"
utl::report "# Stage 02 complete: Checkpoint saved to ${save_dir}/02_${proj_name}.placed.zip"
utl::report "###############################################################################"

# Exit successfully
exit 0
