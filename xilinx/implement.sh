bender script vivado -t fpga -t rtl -t genesys2 > scripts/add_sources.genesys2.tcl
mkdir -p build/genesys2.clkwiz
cd build/genesys2.clkwiz && \
    vitis-2022.1 vivado -mode batch -log ../genesys2.clkwiz.log -jou ../genesys2.clkwiz.jou \
    -source ../../scripts/impl_ip.tcl \
    -tclargs genesys2 clkwiz \
    && cd ../..
mkdir -p build/genesys2.vio
cd build/genesys2.vio &&
    vitis-2022.1 vivado -mode batch -log ../genesys2.vio.log -jou ../genesys2.vio.jou \
    -source ../../scripts/impl_ip.tcl \
    -tclargs genesys2 vio\
    && cd ../..
mkdir -p build/genesys2.croc
cd build/genesys2.croc && \
    vitis-2022.1 vivado -mode batch -log ../croc.genesys2.log -jou ../croc.genesys2.jou \
    -source ../../scripts/impl_sys.tcl \
    -tclargs genesys2 croc \
    ../genesys2.clkwiz/out.xci \
    ../genesys2.vio/out.xci
