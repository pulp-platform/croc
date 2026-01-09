#!/bin/bash

# Set variables
VSIM=${VSIM:-vsim}
BINARY=${BINARY:-"../sw/bin/helloworld.hex"}
USE_GUI=${USE_GUI:-0}

# Clean up generated files
[ -d work          ] && rm -r ./work
[ -d reports       ] && rm reports/* || mkdir reports
[ -f vsim.wlf      ] && rm vsim.wlf
[ -f vsim.vcd      ] && rm vsim.vcd
[ -f transcript    ] && rm transcript
[ -f modelsim.ini  ] && rm modelsim.ini

# Compile design
${VSIM} -c -do "source compile_netlist.tcl; source compile_tech.tcl; exit" | tee reports/compile_netlist.log

# Collect errors and warnings from compilation log and print summary
echo "--- QuestaSim compilation report ---"  > reports/compile_netlist.rpt
echo "Errors:"                              >> reports/compile_netlist.rpt
grep "Error:" reports/compile_netlist.log   >> reports/compile_netlist.rpt
echo ""                                     >> reports/compile_netlist.rpt
echo "Warnings:"                            >> reports/compile_netlist.rpt
grep "Warning:" reports/compile_netlist.log >> reports/compile_netlist.rpt

NUM_ERRORS=$(cat reports/compile_netlist.rpt | grep Error: | wc -l)
NUM_WARNINGS=$(cat reports/compile_compile_netlistrtl.rpt | grep Warning: | wc -l)
echo "#######################################################"
echo "############### Compilation report ####################"
echo "#######################################################"
echo " Errors   : ${NUM_ERRORS}"
echo " Warnings : ${NUM_WARNINGS}"
echo "See 'reports/compile_netlist.rpt' for more info"
echo "#######################################################"

# Run simulation
if [ ! -f "${BINARY}" ]; then
    echo "Cannot open binary file '${BINARY}'"
else
    if [ "${USE_GUI}" = "1" ]; then
        ${VSIM} +binary="${BINARY}" -gui tb_croc_soc -t 1ns -voptargs=+acc -suppress vsim-3009 -suppress vsim-8683 -suppress vsim-8386
    else
        ${VSIM} +binary="${BINARY}" -c tb_croc_soc -t 1ns -voptargs=+acc -suppress vsim-3009 -suppress vsim-8683 -suppress vsim-8386 -do "run -a; quit"
    fi
fi
