// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Hannah Pochert <hpochert@student.ethz.ch>
// - Luisa Wüthrich <lwuethri@student.ethz.ch>
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module user_domain import user_pkg::*; import croc_pkg::*; #(
  parameter int unsigned GpioCount = 16
) (
  input  logic      clk_i,
  input  logic      ref_clk_i,
  input  logic      rst_ni,
  input  logic      testmode_i,
  output logic      modulated_o,
  
  input  sbr_obi_req_t user_sbr_obi_req_i, // User Sbr (rsp_o), Croc Mgr (req_i)
  output sbr_obi_rsp_t user_sbr_obi_rsp_o,

  output mgr_obi_req_t user_mgr_obi_req_o, // User Mgr (req_o), Croc Sbr (rsp_i)
  input  mgr_obi_rsp_t user_mgr_obi_rsp_i,

  input  logic [      GpioCount-1:0] gpio_in_sync_i, // synchronized GPIO inputs

  output logic neopixel_data_o, 

  output logic [NumExternalIrqs-1:0] interrupts_o,   // interrupts to core

  input  logic rxd_i,    // UART Serial Input 
  output logic txd_o,    // UART Serial Output
  input  logic cts_n_i,  // UART Modem Inp Clear To Send
  input  logic dsr_n_i,  // UART Modem Inp Data Send Request
  input  logic ri_n_i,   // UART Modem Inp Ring Indicator
  input  logic cd_n_i,   // UART Modem Inp Carrier Detect
  output logic rts_n_o,  // UART Modem Oup Ready To Send
  output logic dtr_n_o   // UART Modem Oup DaTa Ready
);

  //////////////////////
  // User Interrupts  //
  //////////////////////

  logic irq;
  logic irq_n;
  logic neopixel_fifo_interrupt;
  
  always_comb begin
    interrupts_o    = '0;
    interrupts_o[0] = neopixel_fifo_interrupt;
    interrupts_o[1] = irq;
    interrupts_o[2] = ~irq_n; 
  end

  import gpio_reg_pkg::*;

  mlem_sound i_mlem_sound (
    .clk_i       ( ref_clk_i   ),
    .rst_ni      ( rst_ni      ),
    .modulated_o ( modulated_o )
  );

  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // User Manager MUX //
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  // --------------------------------------------------------------------------------------------------------------
  // User`s Manager Buses
  // --------------------------------------------------------------------------------------------------------------

  mgr_obi_req_t [NumUserMgr-1:0] all_user_mgr_obi_req;
  mgr_obi_rsp_t [NumUserMgr-1:0] all_user_mgr_obi_rsp;

  // Neopixel (DMA) Manager Bus
  mgr_obi_req_t user_mgr_dma_obi_req; 
  mgr_obi_rsp_t user_mgr_dma_obi_rsp;

  // Placeholder Manager Bus
  mgr_obi_req_t user_mgr_test1_obi_req;
  assign user_mgr_test1_obi_req = '0;
  mgr_obi_rsp_t user_mgr_test1_obi_rsp;

  assign all_user_mgr_obi_req[Dma]  = user_mgr_dma_obi_req; 
  assign user_mgr_dma_obi_rsp       = all_user_mgr_obi_rsp[Dma];

  assign all_user_mgr_obi_req[Test1]  = user_mgr_test1_obi_req;
  assign user_mgr_test1_obi_rsp       = all_user_mgr_obi_rsp[Test1];

  //----------------------------------------------------------------------------------------------------
  // User Manager ///
  //----------------------------------------------------------------------------------------------------
  
  // We have a DMA which is a Manager but since it is include in neopixel.sv which has a Manager 
  // and Subrodinates.
  // You will find the module in the User Subordinate section

  // terminate manager

  //----------------------------------------------------------------------------------------------------
  // multiplex to croc subordinates 
  //----------------------------------------------------------------------------------------------------

  obi_mux #(
      .SbrPortObiCfg      ( MgrObiCfg         ),
      .MgrPortObiCfg      ( MgrObiCfg         ),
      .sbr_port_obi_req_t ( mgr_obi_req_t     ), 
      .sbr_port_a_chan_t  ( mgr_obi_a_chan_t  ),
      .sbr_port_obi_rsp_t ( mgr_obi_rsp_t     ),
      .sbr_port_r_chan_t  ( mgr_obi_r_chan_t  ),
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
      .mgr_port_req_o  ( user_mgr_obi_req_o      ), //this is THE mgr (from users) that got selected(with round robin) 
      .mgr_port_rsp_i  ( user_mgr_obi_rsp_i      )  //and is also NOT an array
  );

  ////////////////////////////
  // User Subordinate DEMUX //
  ////////////////////////////

  // ----------------------------------------------------------------------------------------------
  // User Subordinate Buses
  // ----------------------------------------------------------------------------------------------
  
  // collection of signals from the demultiplexer
  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;

  // UART Suborsinate Bus
  sbr_obi_req_t user_uart_obi_req;
  sbr_obi_rsp_t user_uart_obi_rsp;

  // ROM Subordinate Bus
  sbr_obi_req_t user_rom_obi_req;
  sbr_obi_rsp_t user_rom_obi_rsp;

  // Error Subordinate Bus
  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;

  // Fanout into more readable signals
  // Neopixel Subordinate Bus
  sbr_obi_req_t user_neopixel_obi_req;
  sbr_obi_rsp_t user_neopixel_obi_rsp;

  assign user_error_obi_req              = all_user_sbr_obi_req[UserError];
  assign all_user_sbr_obi_rsp[UserError] = user_error_obi_rsp;

  assign user_rom_obi_req                = all_user_sbr_obi_req[UserRom];
  assign all_user_sbr_obi_rsp[UserRom]   = user_rom_obi_rsp;


  assign user_neopixel_obi_req                = all_user_sbr_obi_req[UserNeopixel];
  assign all_user_sbr_obi_rsp[UserNeopixel]   = user_neopixel_obi_rsp;

  assign user_uart_obi_req               = all_user_sbr_obi_req[UserUart];
  assign all_user_sbr_obi_rsp[UserUart]  = user_uart_obi_rsp;


  //-----------------------------------------------------------------------------------------------
  // Demultiplex to User Subordinates according to address map
  //-----------------------------------------------------------------------------------------------

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

  addr_decode #(
    .NoIndices ( NumDemuxSbr                    ),
    .NoRules   ( NumDemuxSbrRules               ),
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t                ),
    .Napot     ( 1'b0                           )
  ) i_addr_decode_periphs (
    .addr_i           ( user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_addr_map             ),
    .idx_o            ( user_idx                  ),
    .dec_valid_o      (),
    .dec_error_o      (),
    .en_default_idx_i ( 1'b1 ),
    .default_idx_i    ( '0   )
  );

  obi_demux #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMgrPorts ( NumDemuxSbr   ),
    .NumMaxTrans ( 2             )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,

    .sbr_port_select_i ( user_idx             ),
    .sbr_port_req_i    ( user_sbr_obi_req_i   ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o   ),

    .mgr_ports_req_o   ( all_user_sbr_obi_req ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp )
  );


//-------------------------------------------------------------------------------------------------
// User Subordinates
//-------------------------------------------------------------------------------------------------
  
  // UART Subordinate
  uart #(
    .ObiCfg    ( SbrObiCfg     ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t ) 
  ) i_uart(
    .clk_i,  
    .rst_ni,

    .obi_req_i ( user_uart_obi_req ), 
    .obi_rsp_o ( user_uart_obi_rsp ),
    
    .irq,    
    .irq_n, 

    .rxd_i,    
    .txd_o,    

    .cts_n     ( cts_n_i           ),  
    .dsr_n     ( dsr_n_i           ),  
    .ri_n      ( ri_n_i            ),   
    .cd_n      ( cd_n_i            ),   
    .rts_n     ( rts_n_o           ),  
    .dtr_n     ( dtr_n_o           ) 
  );
  
  // ROM Subordinate
  user_rom #(
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
  ) i_user_err (
    .clk_i,
    .rst_ni,
    .testmode_i ( testmode_i      ),
    .obi_req_i  ( user_error_obi_req ),
    .obi_rsp_o  ( user_error_obi_rsp )
  );

  // Neopixel Subordinate (+ Manager Port)
  neopixel #(
    .SbrObiCfg      ( SbrObiCfg           ),
    .sbr_obi_req_t  ( sbr_obi_req_t       ),
    .sbr_obi_rsp_t  ( sbr_obi_rsp_t       ),
    .MgrObiCfg      ( MgrObiCfg           ),
    .mgr_obi_req_t  ( mgr_obi_req_t       ),
    .mgr_obi_rsp_t  ( mgr_obi_rsp_t       )
  ) i_neopixel (
    .clk_i,
    .rst_ni,
    .testmode_i ( test_enable_i ),

    .obi_req_i  ( user_neopixel_obi_req ),
    .obi_rsp_o  ( user_neopixel_obi_rsp ),

    .mgr_obi_req_o ( user_mgr_dma_obi_req ),
    .mgr_obi_rsp_i ( user_mgr_dma_obi_rsp ),

    .fifo_interrupt_o ( neopixel_fifo_interrupt ),
    
    .data_o ( neopixel_data_o )
  );

endmodule
