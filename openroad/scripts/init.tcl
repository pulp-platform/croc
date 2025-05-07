set proj_name croc
set netlist ../yosys/out/${proj_name}_yosys.v
set top_design croc_chip
set report_dir reports
set save_dir save
set time [elapsed_run_time]
set step_by_step_debug 0

# helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl
