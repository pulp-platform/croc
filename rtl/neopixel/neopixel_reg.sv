`include "common_cells/registers.svh"

module neopixel_reg import neopixel_pkg::*; #(
    /// The OBI configuration for all ports.
    parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
    /// OBI request type
    parameter type obi_req_t = logic,
    /// OBI response type
    parameter type obi_rsp_t = logic
) (
    /// Clock
    input logic clk_i,
    /// Active-low reset
    input logic rst_ni,

    /// Connection to Obi
    /// OBI request interface : a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
    input obi_req_t  obi_req_i,
    /// OBI response interface : r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid
    output obi_rsp_t obi_rsp_o,

    /// Send timing contraints to neopixel_dma
    output neopixel_write_reg_union_t timing_constraints_o,

    /// Send dma information to neopixel_dma
    output dma_write_reg_union_t dma_constraints_o,

    input logic dma_req_ready_i,

    /// 1 DMA can write to FIFO, 0 OBI can write to FIFO
    output logic [1:0] fifo_access_o

);

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Obi Preparations //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // Obi signals
    logic [ObiCfg.DataWidth-1:0]  rsp_data;
    logic                         valid_d, valid_q; //needs to be delayed for the response phase
    logic                         we_d, we_q;
    logic                         req_d, req_q;
    logic                         err;
    logic                         w_err_q, w_err_d; //for an error in write we need to FF the error
    logic [BlockAwNeopixel - 1:0] word_addr_d, word_addr_q; //is delayed for the response phase
    logic [ObiCfg.IdWidth-1:0]    id_d, id_q; //is delayed for the response phase

    // Step 1: Request phase
    // Safe important info
    assign id_d          = obi_req_i.a.aid;
    assign valid_d       = obi_req_i.req;
    assign word_addr_d   = obi_req_i.a.addr[BlockAwNeopixel - 1:0];
    assign we_d          = obi_req_i.a.we;
    assign req_d         = obi_req_i.req;

    // FF for the obi rsp signals (id, valid, address, we and req)
    `FF(id_q, id_d, '0, clk_i, rst_ni)
    `FF(valid_q, valid_d, '0, clk_i, rst_ni)
    `FF(word_addr_q, word_addr_d, '0, clk_i, rst_ni)
    `FF(req_q, req_d, '0, clk_i, rst_ni)
    `FF(we_q, we_d, '0, clk_i, rst_ni)
    `FF(w_err_q, w_err_d, '0, clk_i, rst_ni)

    // Step 2: Response phase
    // On the next cycle, send the response back with the same ID and the data
    always_comb begin
      obi_rsp_o.r.rdata       = rsp_data;
      obi_rsp_o.r.rid         = id_q;
      // If obi wants to write we need to send the potential error one cycle later
      // Else we just take err which is 0 except a mistake happens in obi read req
      obi_rsp_o.r.err         = (req_q & we_q) ? w_err_q : err;
      obi_rsp_o.r.r_optional  = '0;
      obi_rsp_o.gnt           = obi_req_i.req;
      obi_rsp_o.rvalid        = valid_q;
    end

    //////////////
    // Register //
    //////////////

    // Storage for registers
    neopixel_write_reg_union_t reg_neopixel_d, reg_neopixel_q;
    dma_write_reg_union_t reg_dma_d, reg_dma_q;
    logic [31:0] reg_fifo_d, reg_fifo_q;

    ////////////////
    // COMB LOGIC //
    ////////////////

    // Byte enable/strobe defines which subset of bytes is written to by wdata of the OBI request
    logic [ObiCfg.DataWidth - 1:0] be_mask; // Amount of wdata Bytes

    for (genvar i = 0; unsigned'(i) < ObiCfg.DataWidth/8; ++i ) begin : gen_be_mask
      assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
    end

    always_comb begin
      reg_neopixel_d.arr = reg_neopixel_q.arr;
      reg_dma_d.arr      = reg_dma_q.arr;
      reg_fifo_d         = reg_fifo_q;
      err = 1'b0;
      w_err_d = 1'b0;

      //---------------------------------------------------------------------------------------------
      // WRITE
      //---------------------------------------------------------------------------------------------

      if (obi_req_i.a.we & obi_req_i.req) begin
        case (word_addr_d)

          NUM_NEOPIXEL_OFFSET: begin
            reg_neopixel_d.str.num_neopixel =
              (~be_mask & reg_neopixel_q.str.num_neopixel) | (be_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T1H_OFFSET: begin
            reg_neopixel_d.str.t1h =
              (~be_mask & reg_neopixel_q.str.t1h) | (be_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T1L_OFFSET: begin
            reg_neopixel_d.str.t1l =
              (~be_mask & reg_neopixel_q.str.t1l) | (be_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T0H_OFFSET: begin
            reg_neopixel_d.str.t0h =
                (~be_mask & reg_neopixel_q.str.t0h) | (be_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T0L_OFFSET: begin
            reg_neopixel_d.str.t0l =
              (~be_mask & reg_neopixel_q.str.t0l) | (be_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T_LATCH_OFFSET: begin
            reg_neopixel_d.str.t_latch =
              (~be_mask & reg_neopixel_q.str.t_latch) | (be_mask & obi_req_i.a.wdata);
          end

          DMA_SRC_ADDR_OFFSET: begin
            reg_dma_d.str.src_addr =
              (~be_mask & reg_dma_q.str.src_addr) | (be_mask & obi_req_i.a.wdata);
          end

          DMA_NUM_BYTES_OFFSET: begin
            reg_dma_d.str.num_bytes =
              (~be_mask & reg_dma_q.str.num_bytes) | (be_mask & obi_req_i.a.wdata);
          end

          DMA_VALID_OFFSET: begin
            reg_dma_d.str.valid =
              (~be_mask & reg_dma_q.str.valid) | (be_mask & obi_req_i.a.wdata);
          end

          FIFO_ACCESS_OFFSET: begin
            reg_fifo_d =
              (~be_mask & reg_fifo_q) | (be_mask & obi_req_i.a.wdata);
          end

          // iIvalid access; this case includes the Information register which you can't change
          default: begin
            w_err_d = 1'b1;
          end
        endcase
      end

      //-----------------------------------------------------------------------------------------------
      // READ
      //-----------------------------------------------------------------------------------------------

      rsp_data = 32'h0;  // Default value for read data
      if (req_q & ~we_q) begin

        case (word_addr_q)

          MAX_NUM_NEOPIXEL_OFFSET: begin
            rsp_data = MaxNumNeoPixel;
          end

          MIN_FREQ_OFFSET: begin
            rsp_data = 3_000_000;
          end

          NUM_NEOPIXEL_OFFSET: begin
            rsp_data = reg_neopixel_q.str.num_neopixel;
          end

          NEOPIXEL_T1H_OFFSET: begin
            rsp_data = reg_neopixel_q.str.t1h;
          end

          NEOPIXEL_T1L_OFFSET: begin
            rsp_data = reg_neopixel_q.str.t1l;
          end

          NEOPIXEL_T0H_OFFSET: begin
            rsp_data = reg_neopixel_q.str.t0h;
          end

          NEOPIXEL_T0L_OFFSET: begin
            rsp_data = reg_neopixel_q.str.t0l;
          end

          NEOPIXEL_T_LATCH_OFFSET: begin
            rsp_data = reg_neopixel_q.str.t_latch;
          end

          DMA_SRC_ADDR_OFFSET: begin
            rsp_data = reg_dma_q.str.src_addr;
          end

          DMA_NUM_BYTES_OFFSET: begin
            rsp_data = reg_dma_q.str.num_bytes;
          end

          DMA_VALID_OFFSET: begin
            rsp_data = reg_dma_q.str.valid;
          end

          FIFO_ACCESS_OFFSET: begin
            rsp_data = reg_fifo_q;
          end

          default: begin
            rsp_data = 32'hBADCAB1E;  // Return error value in devmode for unmapped reads
            err = 1'b1;
          end
        endcase
      end

      // Assign the entire timing contraint register to the output for the neopixel controller
      timing_constraints_o = reg_neopixel_q;
      dma_constraints_o    = reg_dma_q;
      fifo_access_o        = reg_fifo_q[1:0];

    end

    ///////////////
    // SEQ LOGIC //
    ///////////////

    `FF(reg_neopixel_q.arr, reg_neopixel_d.arr, '0, clk_i, rst_ni)
    `FF(reg_fifo_q, reg_fifo_d, '0, clk_i, rst_ni)
    `FF(reg_dma_q.arr, reg_dma_d.arr, '0, clk_i, rst_ni)

endmodule
