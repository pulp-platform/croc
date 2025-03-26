set currentDir [pwd]
set CROC_DIR $currentDir/..
set report_dir $CROC_DIR/openroad/reports
set save_dir $CROC_DIR/openroad/save
set time [elapsed_run_time]
set step_by_step_debug 0

source $CROC_DIR/openroad/scripts/reports.tcl
source $CROC_DIR/openroad/scripts/checkpoint.tcl