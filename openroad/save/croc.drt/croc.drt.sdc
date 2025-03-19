###############################################################################
# Created by write_sdc
# Tue Mar 18 16:40:26 2025
###############################################################################
current_design croc_chip
###############################################################################
# Timing Constraints
###############################################################################
create_clock -name clk_sys -period 12.5000 [get_ports {clk_i}]
set_clock_transition 0.2000 [get_clocks {clk_sys}]
set_clock_uncertainty 0.1000 clk_sys
create_clock -name clk_jtg -period 20.0000 [get_ports {jtag_tck_i}]
set_clock_transition 0.2000 [get_clocks {clk_jtg}]
set_clock_uncertainty 0.1000 clk_jtg
create_clock -name clk_rtc -period 50.0000 [get_ports {ref_clk_i}]
set_clock_transition 0.2000 [get_clocks {clk_rtc}]
set_clock_uncertainty 0.1000 clk_rtc
set_clock_groups -name clk_groups_async -asynchronous \
 -group [get_clocks {clk_jtg}]\
 -group [get_clocks {clk_rtc}]\
 -group [get_clocks {clk_sys}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {fetch_en_i}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {fetch_en_i}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio0_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio0_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio10_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio10_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio11_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio11_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio12_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio12_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio13_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio13_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio14_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio14_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio15_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio15_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio16_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio16_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio17_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio17_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio18_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio18_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio19_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio19_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio1_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio1_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio20_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio20_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio21_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio21_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio22_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio22_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio23_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio23_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio24_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio24_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio25_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio25_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio26_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio26_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio27_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio27_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio28_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio28_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio29_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio29_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio2_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio2_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio30_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio30_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio31_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio31_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio3_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio3_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio4_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio4_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio5_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio5_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio6_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio6_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio7_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio7_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio8_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio8_io}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio9_io}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio9_io}]
set_input_delay 2.0000 -clock [get_clocks {clk_jtg}] -min -add_delay [get_ports {jtag_tdi_i}]
set_input_delay 10.0000 -clock [get_clocks {clk_jtg}] -max -add_delay [get_ports {jtag_tdi_i}]
set_input_delay 2.0000 -clock [get_clocks {clk_jtg}] -min -add_delay [get_ports {jtag_tms_i}]
set_input_delay 10.0000 -clock [get_clocks {clk_jtg}] -max -add_delay [get_ports {jtag_tms_i}]
set_input_delay 2.0000 -rise -max -add_delay [get_ports {jtag_trst_ni}]
set_input_delay 2.0000 -fall -max -add_delay [get_ports {jtag_trst_ni}]
set_input_delay 2.0000 -rise -max -add_delay [get_ports {rst_ni}]
set_input_delay 2.0000 -fall -max -add_delay [get_ports {rst_ni}]
set_input_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {uart_rx_i}]
set_input_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {uart_rx_i}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio0_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio0_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio10_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio10_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio11_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio11_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio12_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio12_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio13_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio13_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio14_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio14_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio15_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio15_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio16_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio16_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio17_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio17_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio18_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio18_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio19_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio19_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio1_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio1_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio20_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio20_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio21_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio21_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio22_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio22_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio23_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio23_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio24_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio24_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio25_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio25_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio26_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio26_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio27_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio27_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio28_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio28_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio29_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio29_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio2_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio2_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio30_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio30_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio31_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio31_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio3_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio3_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio4_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio4_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio5_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio5_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio6_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio6_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio7_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio7_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio8_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio8_io}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {gpio9_io}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {gpio9_io}]
set_output_delay 1.0000 -clock [get_clocks {clk_jtg}] -min -add_delay [get_ports {jtag_tdo_o}]
set_output_delay 5.0000 -clock [get_clocks {clk_jtg}] -max -add_delay [get_ports {jtag_tdo_o}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {status_o}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {status_o}]
set_output_delay 1.2500 -clock [get_clocks {clk_sys}] -min -add_delay [get_ports {uart_tx_o}]
set_output_delay 3.7500 -clock [get_clocks {clk_sys}] -max -add_delay [get_ports {uart_tx_o}]
set_max_delay\
    -from [get_ports {jtag_trst_ni}] 20.0000
set_max_delay\
    -from [get_ports {rst_ni}] 12.5000
set_max_delay -ignore_clock_latency\
    -through [list [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_10_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_11_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_12_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_13_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_14_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_15_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_16_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_17_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_18_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_19_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_20_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_21_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_22_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_23_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_24_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_25_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_26_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_27_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_28_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_29_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_2_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_30_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_31_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_32_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_33_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_34_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_35_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_36_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_37_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_38_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_39_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_3_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_40_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_4_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_5_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_6_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_7_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_8_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_9_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_10_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_11_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_12_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_13_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_14_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_15_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_16_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_17_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_18_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_19_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_20_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_21_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_22_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_23_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_24_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_25_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_26_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_27_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_28_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_29_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_2_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_30_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_31_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_32_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_33_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_3_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_4_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_5_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_6_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_7_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_8_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_9_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_req}]] 4.3750
set_false_path -hold\
    -from [list [get_ports {jtag_trst_ni}]\
           [get_ports {rst_ni}]]
set_false_path -hold\
    -through [list [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_10_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_11_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_12_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_13_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_14_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_15_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_16_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_17_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_18_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_19_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_20_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_21_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_22_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_23_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_24_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_25_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_26_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_27_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_28_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_29_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_2_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_30_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_31_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_32_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_33_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_34_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_35_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_36_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_37_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_38_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_39_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_3_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_40_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_4_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_5_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_6_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_7_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_8_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_data_9_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/async_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_a2b_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_req/i_cdc_reset_ctrlr/async_b2a_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_10_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_11_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_12_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_13_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_14_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_15_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_16_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_17_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_18_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_19_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_20_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_21_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_22_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_23_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_24_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_25_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_26_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_27_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_28_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_29_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_2_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_30_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_31_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_32_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_33_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_3_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_4_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_5_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_6_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_7_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_8_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_data_9_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/async_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_a2b_req}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_ack}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_next_phase_0_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_next_phase_1_}]\
           [get_nets {i_croc_soc/i_croc/i_dmi_jtag/i_dmi_cdc.i_cdc_resp/i_cdc_reset_ctrlr/async_b2a_req}]]
###############################################################################
# Environment
###############################################################################
set_load -pin_load 15.0000 [get_ports {gpio0_io}]
set_load -pin_load 15.0000 [get_ports {gpio10_io}]
set_load -pin_load 15.0000 [get_ports {gpio11_io}]
set_load -pin_load 15.0000 [get_ports {gpio12_io}]
set_load -pin_load 15.0000 [get_ports {gpio13_io}]
set_load -pin_load 15.0000 [get_ports {gpio14_io}]
set_load -pin_load 15.0000 [get_ports {gpio15_io}]
set_load -pin_load 15.0000 [get_ports {gpio16_io}]
set_load -pin_load 15.0000 [get_ports {gpio17_io}]
set_load -pin_load 15.0000 [get_ports {gpio18_io}]
set_load -pin_load 15.0000 [get_ports {gpio19_io}]
set_load -pin_load 15.0000 [get_ports {gpio1_io}]
set_load -pin_load 15.0000 [get_ports {gpio20_io}]
set_load -pin_load 15.0000 [get_ports {gpio21_io}]
set_load -pin_load 15.0000 [get_ports {gpio22_io}]
set_load -pin_load 15.0000 [get_ports {gpio23_io}]
set_load -pin_load 15.0000 [get_ports {gpio24_io}]
set_load -pin_load 15.0000 [get_ports {gpio25_io}]
set_load -pin_load 15.0000 [get_ports {gpio26_io}]
set_load -pin_load 15.0000 [get_ports {gpio27_io}]
set_load -pin_load 15.0000 [get_ports {gpio28_io}]
set_load -pin_load 15.0000 [get_ports {gpio29_io}]
set_load -pin_load 15.0000 [get_ports {gpio2_io}]
set_load -pin_load 15.0000 [get_ports {gpio30_io}]
set_load -pin_load 15.0000 [get_ports {gpio31_io}]
set_load -pin_load 15.0000 [get_ports {gpio3_io}]
set_load -pin_load 15.0000 [get_ports {gpio4_io}]
set_load -pin_load 15.0000 [get_ports {gpio5_io}]
set_load -pin_load 15.0000 [get_ports {gpio6_io}]
set_load -pin_load 15.0000 [get_ports {gpio7_io}]
set_load -pin_load 15.0000 [get_ports {gpio8_io}]
set_load -pin_load 15.0000 [get_ports {gpio9_io}]
set_load -pin_load 15.0000 [get_ports {jtag_tdo_o}]
set_load -pin_load 15.0000 [get_ports {status_o}]
set_load -pin_load 15.0000 [get_ports {uart_tx_o}]
set_load -pin_load 15.0000 [get_ports {unused0_o}]
set_load -pin_load 15.0000 [get_ports {unused1_o}]
set_load -pin_load 15.0000 [get_ports {unused2_o}]
set_load -pin_load 15.0000 [get_ports {unused3_o}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {clk_i}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {fetch_en_i}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio0_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio10_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio11_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio12_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio13_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio14_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio15_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio16_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio17_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio18_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio19_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio1_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio20_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio21_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio22_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio23_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio24_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio25_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio26_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio27_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio28_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio29_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio2_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio30_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio31_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio3_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio4_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio5_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio6_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio7_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio8_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {gpio9_io}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {jtag_tck_i}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {jtag_tdi_i}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {jtag_tms_i}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {jtag_trst_ni}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {ref_clk_i}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {rst_ni}]
set_driving_cell -lib_cell sg13g2_IOPadOut16mA -pin {pad} -input_transition_rise 0.0000 -input_transition_fall 0.0000 [get_ports {uart_rx_i}]
###############################################################################
# Design Rules
###############################################################################
