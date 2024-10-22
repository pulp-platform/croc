// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module user_domain import user_pkg::*; #(
  localparam int unsigned NrGPIOs = gpio_reg_pkg::GpioCount
) (
  input  logic      clk_i,
  input  logic      ref_clk_i,
  input  logic      rst_ni,
  input  logic      test_enable_i,

  //todo gpio pads
  input  logic [NrGPIOs-1:0] gpio_in,             // Input from GPIO pins
  output logic [NrGPIOs-1:0] gpio_out,            // Output to GPIO pins
  output logic [NrGPIOs-1:0] gpio_tx_en_o,        // TX enable signal 0 -> input, 1 -> output
  
  input  sbr_obi_req_t xbar_user_sbr_obi_req_i, //User Sbr (rsp_o), Croc Mgr (req_i)
  output sbr_obi_rsp_t xbar_user_sbr_obi_rsp_o,

  output mgr_obi_req_t xbar_croc_sbr_obi_req_o, //User Mgr (req_o), Croc Sbr (rsp_i)
  input  mgr_obi_rsp_t xbar_croc_sbr_obi_rsp_i,

  output logic [NumExternalIrqs-1:0] interrupts_o
);

assign interrupts_o = '0;  

import gpio_reg_pkg::*;
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //User Manager MUX//
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  // -------------------------
  // User`s Manager Buses
  // -------------------------

  sbr_obi_req_t [NumUserMgr-1:0] all_user_mgr_obi_req;
  sbr_obi_rsp_t [NumUserMgr-1:0] all_user_mgr_obi_rsp;

  // Placeholders Manager Bus
  sbr_obi_req_t user_mgr_test0_obi_req; 
  assign user_mgr_test0_obi_req = '0;
  sbr_obi_rsp_t user_mgr_test0_obi_rsp;

  sbr_obi_req_t user_mgr_test1_obi_req;
  assign user_mgr_test1_obi_req = '0;
  sbr_obi_rsp_t user_mgr_test1_obi_rsp;

  assign all_user_mgr_obi_req[Test0]  = user_mgr_test0_obi_req; 
  assign user_mgr_test0_obi_rsp       = all_user_mgr_obi_rsp[Test0];

  assign all_user_mgr_obi_req[Test1]  = user_mgr_test1_obi_req;
  assign user_mgr_test1_obi_rsp       = all_user_mgr_obi_rsp[Test1];
  
  //terminate manager

  //----------------------------------------------------------------------------------------------------
  // multiplex to croc subordinates 
  //----------------------------------------------------------------------------------------------------

  obi_mux #(
      .SbrPortObiCfg      ( SbrObiCfg         ),
      .MgrPortObiCfg      ( MgrObiCfg         ),
      .sbr_port_obi_req_t ( sbr_obi_req_t     ), 
      .sbr_port_a_chan_t  ( sbr_obi_a_chan_t  ),
      .sbr_port_obi_rsp_t ( sbr_obi_rsp_t     ),
      .sbr_port_r_chan_t  ( sbr_obi_r_chan_t  ),
      .mgr_port_obi_req_t ( mgr_obi_req_t     ),
      .mgr_port_obi_rsp_t ( mgr_obi_rsp_t     ),
      .NumSbrPorts        ( NumUserMgr        ), 
      .NumMaxTrans        ( 2                 ), 
      .UseIdForRouting    ('0 )  
    ) i_mux (
      .clk_i,
      .rst_ni,
      .testmode_i      ( test_enable_i           ), 
      .sbr_ports_req_i ( all_user_mgr_obi_req    ), //those are all the user managers inputed in the mux as an array
      .sbr_ports_rsp_o ( all_user_mgr_obi_rsp    ),
      .mgr_port_req_o  ( xbar_croc_sbr_obi_req_o ), //this is THE mgr (from users) that got selected(with round robin) 
      .mgr_port_rsp_i  ( xbar_croc_sbr_obi_rsp_i )  //and is also NOT an array
  );

  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //User Subordinate DEMUX///
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  // ----------------------------------------------------------------------------------------------------
  // User`s Subordinate Buses
  // ----------------------------------------------------------------------------------------------------
  
  sbr_obi_req_t [NumUserSbr-1:0] all_user_sbr_obi_req;
  sbr_obi_rsp_t [NumUserSbr-1:0] all_user_sbr_obi_rsp;

  // ROM Subordinate Bus
  sbr_obi_req_t user_rom_obi_req;
  sbr_obi_rsp_t user_rom_obi_rsp;

  // Error Subordinate Bus
  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;

  // GPIO Subordinate Bus
  //sbr_obi_req_t user_gpio_obi_req;
  //sbr_obi_rsp_t user_gpio_obi_rsp;

  assign user_error_obi_req              = all_user_sbr_obi_req[XbarError];
  assign all_user_sbr_obi_rsp[XbarError] = user_error_obi_rsp;

  assign user_rom_obi_req                = all_user_sbr_obi_req[XbarRom];
  assign all_user_sbr_obi_rsp[XbarRom]   = user_rom_obi_rsp;

  //assign user_gpio_obi_req                = all_user_sbr_obi_req[XbarGpio];
  //assign all_user_sbr_obi_rsp[XbarGpio]   = user_gpio_obi_rsp;

  //----------------------------------------------------------------------------------------------------
  // demultiplex to user subordinates according to address map
  //----------------------------------------------------------------------------------------------------

  logic [cf_math_pkg::idx_width(NumUserSbr)-1:0] user_idx;

  addr_decode #(
    .NoIndices ( NumUserSbr                     ),
    .NoRules   ( NumUserSbrRules                ),
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t                ),
    .Napot     ( 1'b0                           )
  ) i_addr_decode_periphs (
    .addr_i           ( xbar_user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_addr_map                  ),
    .idx_o            ( user_idx                       ),
    .dec_valid_o      (),
    .dec_error_o      (),
    .en_default_idx_i ( 1'b1 ),
    .default_idx_i    ( '0   )
  );

  obi_demux #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMgrPorts ( NumUserSbr    ),
    .NumMaxTrans ( 2             )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,

    .sbr_port_select_i ( user_idx                ),
    .sbr_port_req_i    ( xbar_user_sbr_obi_req_i ),
    .sbr_port_rsp_o    ( xbar_user_sbr_obi_rsp_o ),

    .mgr_ports_req_o   ( all_user_sbr_obi_req    ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp    )
  );


//----------------------------------------------------------------------------------------------------
//User Subordinates///
//----------------------------------------------------------------------------------------------------
  
  //ROM Subordinate
  rom #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t )
  ) i_rom (
    .clk_i,
    .rst_ni,
    .obi_req_i  ( user_rom_obi_req ),
    .obi_rsp_o  ( user_rom_obi_rsp )
  );

  // Error Subordinate
  obi_err_sbr #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_err_sbr (
    .clk_i,
    .rst_ni,
    .testmode_i ( test_enable_i      ),
    .obi_req_i  ( user_error_obi_req ),
    .obi_rsp_o  ( user_error_obi_rsp )
  );

  //GPIO Subordinate
  //TODO

  logic [NrGPIOs-1:0] gpio_in_sync_o;      // Synchronized input signals
  logic global_interrupt_o;                // Global interrupt signal

  gpio #(
    .ObiCfg             ( SbrObiCfg           ),
    .obi_req_t          ( sbr_obi_req_t       ),
    .obi_rsp_t          ( sbr_obi_rsp_t       ),
    .NrGPIOs            ( NrGPIOs             )
  ) i_gpio (
    .clk_i,
    .rst_ni,
    .gpio_in            ( gpio_in             ),                     
    .gpio_out           ( gpio_out            ),                   
    .gpio_tx_en_o       ( gpio_tx_en_o        ),          
    .gpio_in_sync_o     ( gpio_in_sync_o      ),       
    .global_interrupt_o ( global_interrupt_o  ),
    .obi_req_i          ( user_gpio_obi_req   ),
    .obi_rsp_o          ( user_gpio_obi_rsp   )
  );

endmodule
