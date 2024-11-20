`include "common_cells/registers.svh"

module uart_register #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
  /// OBI request type
  parameter type obi_req_t = logic,
  /// OBI response type
  parameter type obi_rsp_t = logic
) (
  input logic clk_i,  // Clock
  input logic rst_ni, // Active-low reset

  // OBI request interface
  input obi_req_t  obi_req_i, // a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
  // OBI response interface
  output obi_rsp_t obi_rsp_o, // r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid

  output uart_pkg::reg_read_t uart_reg_read,  // Read from MCR Register
  input uart_pkg::reg_write_t uart_reg_write  // Write to MSR Register
);

  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Obi Preparations //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  // Signals for the OBI response
  logic [ObiCfg.DataWidth-1:0] rsp_data;
  logic                        valid_d, valid_q;         // delayed for the response phase
  logic                        err;
  logic                        w_err_d, w_err_q;
  logic [AddressBits-1:0]      word_addr_d, word_addr_q; // delayed for the response phase
  logic [ObiCfg.IdWidth-1:0]   id_d, id_q;               // delayed for the response phase
  logic                        we_d, we_q;
  logic                        req_d, req_q;

  // OBI rsp Assignment
  always_comb begin
    obi_rsp_o.r.rdata       = rsp_data;
    obi_rsp_o.r.rid         = id_q;
    obi_rsp_o.r.err         = err;
    obi_rsp_o.r.r_optional  = '0;
    obi_rsp_o.gnt           = obi_req_i.req;
    obi_rsp_o.rvalid        = valid_q;
  end

  // id, valid and address handling
  assign id_d          = obi_req_i.a.aid;
  assign valid_d       = obi_req_i.req;
  assign word_addr_d   = obi_req_i.a.addr[AddressBits+2:3]; // Registers are 64-Bit aligned
  assign we_d          = obi_req_i.a.we;
  assign req_d         = obi_req_i.req;

  //FF for the obi rsp signals (id and valid)
  `FF(id_q, id_d, '0, clk_i, rst_ni)
  `FF(valid_q, valid_d, '0, clk_i, rst_ni)
  `FF(word_addr_q, word_addr_d, '0, clk_i, rst_ni)
  `FF(we_q, we_d, '0, clk_i, rst_ni)
  `FF(w_err_q, w_err_d, '0, clk_i, rst_ni)
  `FF(req_q, req_d, '0, clk_i, rst_ni)

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Register Storage//
  ////////////////////////////////////////////////////////////////////////////////////////////////

  // Storage for registers
  uart_reg_union_t reg_d, reg_q;
  uart_reg_union_t new_reg;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // COMB LOGIC //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  always_comb begin
    
    //---Defaults---------------------------------------------------------------------------------
    err     = w_err_q;
    w_err_d = 1'b0;

    uart_reg_read.obi_read_rhr  = 1'b0;
    uart_reg_read.obi_read_isr  = 1'b0;
    uart_reg_read.obi_read_lsr  = 1'b0;
    uart_reg_read.obi_read_msr  = 1'b0;
    uart_reg_read.obi_write_thr = 1'b0;
    uart_reg_read.obi_write_dllm = 1'b0;
    
    rsp_data = 32'h0;  

    //--------------------------------------------------------------------------------------------
    // WRITE
    //--------------------------------------------------------------------------------------------
    new_reg = reg_q;

    //----UART-Intern-Writes----------------------------------------------------------------------
    new_reg.strct.FCR[1] = uart_reg_write.fcr_rx_valid? uart_reg_write.fcr_rx_fifo_rst : reg_q.strct.FCR[1];
    new_reg.strct.FCR[2] = uart_reg_write.fcr_tx_valid? uart_reg_write.fcr_tx_fifo_rst : reg_q.strct.FCR[2];

    new_reg.strct.RHR = uart_reg_write.rhr_valid? uart_reg_write.rhr.arr : reg_q.strct.RHR;

    new_reg.strct.ISR = uart_reg_write.isr_valid? uart_reg_write.isr.arr : reg_q.strct.ISR;

    new_reg.strct.LSR[0] = uart_reg_write.lsr_valid[0] ? uart_reg_write.lsr.arr[0] : reg_q.strct.LSR[0];
    new_reg.strct.LSR[1] = uart_reg_write.lsr_valid[1] ? uart_reg_write.lsr.arr[1] : reg_q.strct.LSR[1];
    new_reg.strct.LSR[2] = uart_reg_write.lsr_valid[2] ? uart_reg_write.lsr.arr[2] : reg_q.strct.LSR[2];
    new_reg.strct.LSR[3] = uart_reg_write.lsr_valid[3] ? uart_reg_write.lsr.arr[3] : reg_q.strct.LSR[3];
    new_reg.strct.LSR[4] = uart_reg_write.lsr_valid[4] ? uart_reg_write.lsr.arr[4] : reg_q.strct.LSR[4];
    new_reg.strct.LSR[5] = uart_reg_write.lsr_valid[5] ? uart_reg_write.lsr.arr[5] : reg_q.strct.LSR[5];
    new_reg.strct.LSR[6] = uart_reg_write.lsr_valid[6] ? uart_reg_write.lsr.arr[6] : reg_q.strct.LSR[6];
    new_reg.strct.LSR[7] = uart_reg_write.lsr_valid[7] ? uart_reg_write.lsr.arr[7] : reg_q.strct.LSR[7];

    new_reg.strct.MSR[0] = uart_reg_write.msr_valid[0] ? uart_reg_write.msr.arr[0] : reg_q.strct.MSR[0];
    new_reg.strct.MSR[1] = uart_reg_write.msr_valid[1] ? uart_reg_write.msr.arr[1] : reg_q.strct.MSR[1];
    new_reg.strct.MSR[2] = uart_reg_write.msr_valid[2] ? uart_reg_write.msr.arr[2] : reg_q.strct.MSR[2];
    new_reg.strct.MSR[3] = uart_reg_write.msr_valid[3] ? uart_reg_write.msr.arr[3] : reg_q.strct.MSR[3];
    new_reg.strct.MSR[7:4] = uart_reg_write.msr.arr[7:4];

    reg_d = new_reg;

    //----OBI-Writes------------------------------------------------------------------------------
    if (obi_req_i.req & obi_req_i.a.we & obi_req_i.a.be[0]) begin

      w_err_d = 1'b0;

      if (~reg_q.strct.LCR[7]) begin // DLAB = 0 Address Decode

        case (word_addr_d)
          THR_OFFSET: begin
            reg_d.strct.THR = obi_req_i.a.wdata[RegWidth-1:0];
            uart_reg_read.obi_write_thr = 1'b1;
          end

          IER_OFFSET: begin
            reg_d.strct.IER = obi_req_i.a.wdata[RegWidth-1:0];
          end

          FCR_OFFSET: begin
            reg_d.strct.FCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          LCR_OFFSET: begin
            reg_d.strct.LCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          MCR_OFFSET: begin
            reg_d.strct.MCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          SPR_OFFSET: begin
            reg_d.strct.SPR = SPR_DEFAULT;
          end
          
          default: begin
            w_err_d = 1'b1; // unmapped register access
          end
        endcase

      end else begin // DLAB = 1 Address Decode

        case (word_addr_d)
          DLL_OFFSET: begin
            reg_d.strct.DLL = obi_req_i.a.wdata[RegWidth-1:0];
            uart_reg_read.obi_write_dllm = 1'b1;
          end

          DLM_OFFSET: begin
            reg_d.strct.DLM = obi_req_i.a.wdata[RegWidth-1:0];
            uart_reg_read.obi_write_dllm = 1'b1;
          end

          FCR_OFFSET: begin
            reg_d.strct.FCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          LCR_OFFSET: begin
            reg_d.strct.LCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          MCR_OFFSET: begin
            reg_d.strct.MCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          SPR_OFFSET: begin
            reg_d.strct.SPR = SPR_DEFAULT;
          end

          default: begin
            w_err_d = 1'b1; // unmapped register access
          end
        endcase

      end

    end

    //--------------------------------------------------------------------------------------------
    // READ
    //--------------------------------------------------------------------------------------------

    //----UART-Intern-Reads-----------------------------------------------------------------------
    uart_reg_read.thr.arr = reg_q.strct.THR;
    uart_reg_read.ier.arr = reg_q.strct.IER;
    uart_reg_read.isr.arr = reg_q.strct.ISR;
    uart_reg_read.fcr.arr = reg_q.strct.FCR;
    uart_reg_read.lcr.arr = reg_q.strct.LCR;
    uart_reg_read.mcr.arr = reg_q.strct.MCR;
    uart_reg_read.dll.arr = reg_q.strct.DLL;
    uart_reg_read.dlm.arr = reg_q.strct.DLM;

    //----OBI-Reads-------------------------------------------------------------------------------
    if (req_q & ~we_q) begin

      err = 1'b0; 

      if (~reg_q.strct.LCR[7]) begin // DLAB = 0 Address Decode

        case (word_addr_q)
          RHR_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.RHR;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0; 
            uart_reg_read.obi_read_rhr            = 1'b1;
          end

          IER_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.IER;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
          end

          ISR_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.ISR;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
            uart_reg_read.obi_read_isr            = 1'b1;
          end

          LCR_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.LCR;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
          end

          MCR_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.MCR;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
          end

          LSR_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.LSR;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
            uart_reg_read.obi_read_lsr            = 1'b1;
          end

          MSR_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.MSR;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
            uart_reg_read.obi_read_msr            = 1'b1;
          end

          SPR_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.SPR;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
          end

          default: begin
            err = 1'b1; 
          end
        endcase

      end else begin // DLAB = 1 Address Decode

        case (word_addr_q)
          DLL_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.DLL;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
          end

          DLM_OFFSET: begin
            rsp_data[RegWidth-1:0]                = reg_q.strct.DLM;
            rsp_data[ObiCfg.DataWidth-1:RegWidth] = '0;
          end

          default: begin
            err = 1'b1;
          end
        endcase

      end

    end

  end

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // SEQUENTIAL LOGIC //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  `FF(reg_q.arr, reg_d.arr, uart_pkg::register_default, clk_i, rst_ni)

endmodule
