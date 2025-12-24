#!/bin/bash

# Set variables
YOSYS=${YOSYS:-yosys}

# Clean up generated files
[ -f synthesis.log ] && rm synthesis.log
rm -rf reports/
rm -rf out/
rm -rf tmp/
mkdir reports
mkdir out
mkdir tmp

# Run Yosys
${YOSYS} -c scripts/yosys_synthesis.tcl 2>&1 \
  | TZ=UTC gawk '{ print strftime("[%Y-%m-%d %H:%M %Z]"), $0 }' \
  | tee synthesis.log \
  | gawk -f scripts/filter_output.awk

