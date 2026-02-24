$VLOGAN -sverilog \
    -full64 \
    -assert svaext +v2k -kdb -override_timescale=1ns/10ps -debug_access+all \
    "+define+FUNCTIONAL" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_stdcell/verilog/sg13g2_stdcell.v" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_core_behavioral_bm_bist.v" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_64x64_c2_bm_bist.v" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_256x64_c2_bm_bist.v" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_512x64_c2_bm_bist.v" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_1024x64_c2_bm_bist.v" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_2048x64_c2_bm_bist.v" \
    "../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/verilog/RM_IHPSG13_1P_256x48_c2_bm_bist.v" \
    "../ihp13/tc_sram_impl.sv" \
    "../ihp13/tc_clk.sv"
