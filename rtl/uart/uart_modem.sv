`include "common_cells/registers.svh"
module uart_modem #()
(
  input  logic            clk_i,
  input  logic            rst_ni,

  input  uart_reg_read_t  reg_read,
  output uart_reg_write_t reg_write,

  input  logic            cts_n,  // Modem Inp Clear To Send
  input  logic            dsr_n,  // Modem Inp Data Send Request
  input  logic            ri_n,   // Modem Inp Ring Indicator
  input  logic            cd_n,   // Modem Inp Carrier Detect
  output logic            rts_n,  // Modem Oup Ready To Send
  output logic            dtr_n   // Modem Oup DaTa Ready
);

  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  // Flow Control is completely left to SW. UART Modem Control only writes Modem Inputs to 
  // Register and sets Modem Outputs from the Register.

  // Modem Inputs and Outputs are active low. Values seen in the signals are the opposite of 
  // the ones read from or written to the modem status/control registers !

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Instantiations //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Modem-Control-Signals-----------------------------------------------------------------------
  logic sync_cts_n_d, sync_cts_n_q;
  logic sync_dsr_n_d, sync_dsr_n_q;
  logic sync_ri_n_d,  sync_ri_n_q;
  logic sync_cd_n_d,  sync_cd_n_q;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Modem-Input-2Cycle-Synchronisation //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  sync #( 
    .STAGES (NrSyncStages) 
  ) i_sync (
    .clk_i, 
    .rst_ni, 
    .serial_i(cts_n), 
    .serial_o(sync_cts_n_d)
  
  );
  sync #( 
    .STAGES (NrSyncStages) 
  ) i_sync (
    .clk_i, 
    .rst_ni, 
    .serial_i(dsr_n), 
    .serial_o(sync_dsr_n_d)
  );

  sync #( 
    .STAGES (NrSyncStages) 
  ) i_sync (
    .clk_i, 
    .rst_ni, 
    .serial_i(ri_n),  
    .serial_o(sync_ri_n_d)
  );

  sync #( 
    .STAGES (NrSyncStages) 
  ) i_sync (
    .clk_i, 
    .rst_ni, 
    .serial_i(cd_n),  
    .serial_o(sync_cd_n_d)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Modem-Input-to-MSR //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  
  always_comb begin

    // Modem Inputs are negated
    reg_write.msr.strct.cts  = (reg_read.mcr.strct.loopback = 1'b1) ? rts_n : ~sync_cts_n_d; //TODO
    reg_write.msr.strct.dsr  = (reg_read.mcr.strct.loopback = 1'b1) ? dtr_n : ~sync_dsr_n_d; //TODO
    reg_write.msr.strct.ri   = ~sync_ri_n_d;
    reg_write.msr.strct.cd   = ~sync_cd_n_d;

    if (sync_cts_n_d ^ sync_cts_n_q) begin  // Delta: Write a 1 if _d different from _q
      reg_write.msr.strct.d_cts = 1'b1;
    end
    if (sync_dsr_n_d ^ sync_dsr_n_q) begin  // Delta: Write a 1 if _d different to _q
      reg_write.msr.strct.d_dsr = 1'b1;    
    end                                     
    if (sync_ri_n_d & ~(sync_ri_n_q)) begin // Trailing Edge: Write 1 if change from 0 to 1
      reg_write.msr.strct.te_ri = 1'b1;  
    end
    if (sync_cd_n_d ^ sync_cd_n_q) begin    // Delta: Write a 1 if _d different from _q
      reg_write.msr.strct.d_cd = 1'b1;
    end

    // Delta and Trailing Edge Bits are cleared whenever SW reads them
    if (reg_read.obi_read_msr) begin
      reg_write.msr.strct.d_cts = 1'b0;
      reg_write.msr.strct.d_dsr = 1'b0;
      reg_write.msr.strct.te_ri = 1'b0;
      reg_write.msr.strct.d_cd  = 1'b0;
    end

  end

  `FF(sync_cts_n_q, sync_cts_n_d, '1, clk_i, rst_ni) 
  `FF(sync_dsr_n_q, sync_dsr_n_d, '1, clk_i, rst_ni) 
  `FF(sync_ri_n_q, sync_ri_n_d, '1, clk_i, rst_ni) 
  `FF(sync_cd_n_q, sync_cd_n_d, '1, clk_i, rst_ni) 

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // MCR-to-Modem-Output //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  assign rts_n = ~reg_read.mcr.strct.rts;
  assign dtr_n = ~reg_read.mcr.strct.dtr;

endmodule
