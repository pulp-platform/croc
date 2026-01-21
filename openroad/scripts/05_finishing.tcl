# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Stage 05: Finishing
#
# This stage performs:
# - Filler cell placement
# - Global connect (power nets)
# - Write final outputs (DEF, Verilog, ODB, SDC)
#
# Required environment variables:
#   PROJ_NAME    - Project name (e.g., "croc")
#   TOP_DESIGN   - Top module name
#
# Input checkpoint: 04_${PROJ_NAME}.routed
# Output checkpoint: 05_${PROJ_NAME}.final

###############################################################################
# Setup
###############################################################################
source scripts/startup.tcl

# Load checkpoint from previous stage
load_checkpoint 04_${proj_name}.routed

# Set layers used for estimate_parasitics
setDefaultParasitics
set_dont_use $dont_use_cells


utl::report "###############################################################################"
utl::report "# Stage 05: FINISHING"
utl::report "###############################################################################"

utl::report "Filler placement"
# stdfill is defined in init_tech.tcl
filler_placement $stdfill

utl::report "Global connect"
global_connect

save_checkpoint 05_${proj_name}.final
report_image "05_${proj_name}.final" true true false true
report_metrics "05_${proj_name}.final"

utl::report "Write output files"
write_def                      ${out_dir}/${proj_name}.def
write_verilog -include_pwr_gnd -remove_cells "$stdfill bondpad*" ${out_dir}/${proj_name}_lvs.v
write_verilog                  ${out_dir}/${proj_name}.v
write_db                       ${out_dir}/${proj_name}.odb
write_sdc                      ${out_dir}/${proj_name}.sdc

## WARNING: Currently the extract_parasitics command removes metal patches (eg for min area)
## So if you want to use it, do so at the very end after writing out the def and odb files
# define_process_corner -ext_model_index 0 X
# extract_parasitics -ext_model_file IHP_rcx_patterns.rules
# write_spef ${out_dir}/${proj_name}.spef
# read_spef  ${out_dir}/${proj_name}.spef; # readback parasitics for OpenSTA
# report_metrics "${step_nr}_${proj_name}.extract"

utl::report "###############################################################################"
utl::report "# Stage 05 complete: Final outputs written to ${out_dir}/"
utl::report "#  - DEF:         ${out_dir}/${proj_name}.def"
utl::report "#  - ODB:         ${out_dir}/${proj_name}.odb"
utl::report "#  - SDC:         ${out_dir}/${proj_name}.sdc"
utl::report "#  - Verilog:     ${out_dir}/${proj_name}.v"
utl::report "#  - LVS netlist: ${out_dir}/${proj_name}_lvs.v"
utl::report "# Checkpoint saved to ${save_dir}/05_${proj_name}.final.zip"
utl::report "###############################################################################"
