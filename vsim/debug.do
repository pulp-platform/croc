onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/rst_ni
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/clk_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/ref_clk_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tck_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tdi_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tdo_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tms_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_trst_ni
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/i_ibex/core_sleep_o
add wave -noupdate -expand -subitemconfig {/tb_croc_soc/i_croc_soc/i_croc/core_instr_obi_req.a -expand} /tb_croc_soc/i_croc_soc/i_croc/core_instr_obi_req
add wave -noupdate -expand -subitemconfig {/tb_croc_soc/i_croc_soc/i_croc/core_instr_obi_rsp.r -expand} /tb_croc_soc/i_croc_soc/i_croc/core_instr_obi_rsp
add wave -noupdate -expand -subitemconfig {/tb_croc_soc/i_croc_soc/i_croc/core_data_obi_req.a -expand} /tb_croc_soc/i_croc_soc/i_croc/core_data_obi_req
add wave -noupdate -expand /tb_croc_soc/i_croc_soc/i_croc/core_data_obi_rsp
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/i_ibex/gen_regfile_ff/register_file_i/rf_reg_q
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_soc_ctrl/reg2hw
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/req_i}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/we_i}
add wave -noupdate -expand -subitemconfig {{/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/addr_i[0]} -expand} {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/addr_i}
add wave -noupdate -expand {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/wdata_i}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/be_i}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/rdata_o}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/bm}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/sel_q}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/i_cut/A_MEN}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/i_cut/A_WEN}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/i_cut/A_REN}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/i_cut/A_ADDR}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/i_cut/A_DIN}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/i_cut/A_DOUT}
add wave -noupdate {/tb_croc_soc/i_croc_soc/i_croc/gen_sram_bank[0]/i_sram/gen_256x32xBx1/i_cut/A_BM}
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1850188 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 230
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {1849945 ns} {1851346 ns}
