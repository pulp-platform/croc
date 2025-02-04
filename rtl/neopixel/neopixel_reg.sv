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

    /// Send timing contraints to neopixel_controller
    output neopixel_write_reg_union_t timing_constraints_o,

    /// Send dma information to neopixel_dma
    output dma_write_reg_union_t dma_constraints_o,

    /// 1 DMA can write to FIFO, 0 OBI can write to FIFO
    output logic [1:0] fifo_access_o

);

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Obi Preparations //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

      // Signals for the OBI response
    logic                           valid_d, valid_q;         // delayed to the response phase
    logic                           we_d, we_q;               // delayed to the response phase
    logic                           req_d, req_q;             // delayed to the response phase
    logic [AddressWidth-1:0]        write_addr;               // in request phase (word addr)
    logic [AddressWidth-1:0]        read_addr_d, read_addr_q; // delayed to the response phase (word addr)
    logic [ObiCfg.IdWidth-1:0]      id_d, id_q;               // delayed to the response phase
    logic                           obi_err;
    logic                           w_err_d, w_err_q;         // delay write error to response phase
    // signals used in read/write for register
    logic [ObiCfg.DataWidth-1:0]    obi_rdata, obi_wdata;
    logic                           obi_read_request, obi_write_request;

    // OBI rsp Assignment
    always_comb begin
      obi_rsp_o              = '0;
      obi_rsp_o.r.rdata      = obi_rdata;
      obi_rsp_o.r.rid        = id_q;
      obi_rsp_o.r.err        = obi_err;
      obi_rsp_o.gnt          = obi_req_i.req;
      obi_rsp_o.rvalid       = valid_q;
    end

    // internally used signals
    assign obi_wdata         = obi_req_i.a.wdata;
    assign obi_read_request  = req_q & ~we_q;                  // in response phase (one cycle later)
    assign obi_write_request = obi_req_i.req & obi_req_i.a.we; // in request phase (same cycle)

    // id, valid and address handling
    assign id_d          = obi_req_i.a.aid;
    assign valid_d       = obi_req_i.req;
    assign write_addr    = obi_req_i.a.addr[AddressWidth-1:2]; // write in same cycle
    assign read_addr_d   = obi_req_i.a.addr[AddressWidth-1:2]; // delay read to response phase
    assign we_d          = obi_req_i.a.we;
    assign req_d         = obi_req_i.req;

    // FF for the obi rsp signals (id, valid, address, we and req)
    `FF(id_q, id_d, '0, clk_i, rst_ni)
    `FF(valid_q, valid_d, '0, clk_i, rst_ni)
    `FF(read_addr_q, read_addr_d, '0, clk_i, rst_ni)
    `FF(req_q, req_d, '0, clk_i, rst_ni)
    `FF(we_q, we_d, '0, clk_i, rst_ni)
    `FF(w_err_q, w_err_d, '0, clk_i, rst_ni)

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

    // bit enable/strobe; defines which bits are written to by wdata of the OBI request
    logic [ObiCfg.DataWidth-1:0] bit_mask;
    for (genvar i = 0; unsigned'(i) < ObiCfg.DataWidth/8; ++i ) begin : gen_write_mask
      assign bit_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
    end

    always_comb begin
      reg_neopixel_d.arr = reg_neopixel_q.arr;
      reg_dma_d.arr      = reg_dma_q.arr;
      reg_fifo_d         = reg_fifo_q;
      obi_err = w_err_q;
      w_err_d = 1'b0;

      //---------------------------------------------------------------------------------------------
      // WRITE
      //---------------------------------------------------------------------------------------------

      if (obi_write_request) begin
        obi_err = 1'b0;
        case ({write_addr, 2'b00})

          NUM_NEOPIXEL_OFFSET: begin
            reg_neopixel_d.str.num_neopixel =
              (~bit_mask & reg_neopixel_q.str.num_neopixel) | (bit_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T1H_OFFSET: begin
            reg_neopixel_d.str.t1h =
              (~bit_mask & reg_neopixel_q.str.t1h) | (bit_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T1L_OFFSET: begin
            reg_neopixel_d.str.t1l =
              (~bit_mask & reg_neopixel_q.str.t1l) | (bit_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T0H_OFFSET: begin
            reg_neopixel_d.str.t0h =
                (~bit_mask & reg_neopixel_q.str.t0h) | (bit_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T0L_OFFSET: begin
            reg_neopixel_d.str.t0l =
              (~bit_mask & reg_neopixel_q.str.t0l) | (bit_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_T_LATCH_OFFSET: begin
            reg_neopixel_d.str.t_latch =
              (~bit_mask & reg_neopixel_q.str.t_latch) | (bit_mask & obi_req_i.a.wdata);
          end

          NEOPIXEL_SLEEP_OFFSET: begin
            reg_neopixel_d.str.sleep =
              (~bit_mask & reg_neopixel_q.str.sleep) | (bit_mask & obi_req_i.a.wdata);
          end

          DMA_SRC_ADDR_OFFSET: begin
            reg_dma_d.str.src_addr =
              (~bit_mask & reg_dma_q.str.src_addr) | (bit_mask & obi_req_i.a.wdata);
          end

          DMA_NUM_BYTES_OFFSET: begin
            reg_dma_d.str.num_bytes =
              (~bit_mask & reg_dma_q.str.num_bytes) | (bit_mask & obi_req_i.a.wdata);
          end

          DMA_VALID_OFFSET: begin
            reg_dma_d.str.valid =
              (~bit_mask & reg_dma_q.str.valid) | (bit_mask & obi_req_i.a.wdata);
          end

          FIFO_ACCESS_OFFSET: begin
            reg_fifo_d =
              (~bit_mask & reg_fifo_q) | (bit_mask & obi_req_i.a.wdata);
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

      obi_rdata = 32'h0;  // Default value for read data
      if (obi_read_request) begin

        case ({read_addr_q, 2'b00})

          MAX_NUM_NEOPIXEL_OFFSET: begin
            obi_rdata = MaxNumNeoPixel;
          end

          MIN_FREQ_OFFSET: begin
            obi_rdata = 3_000_000;
          end

          NUM_NEOPIXEL_OFFSET: begin
            obi_rdata = reg_neopixel_q.str.num_neopixel;
          end

          NEOPIXEL_T1H_OFFSET: begin
            obi_rdata = reg_neopixel_q.str.t1h;
          end

          NEOPIXEL_T1L_OFFSET: begin
            obi_rdata = reg_neopixel_q.str.t1l;
          end

          NEOPIXEL_T0H_OFFSET: begin
            obi_rdata = reg_neopixel_q.str.t0h;
          end

          NEOPIXEL_T0L_OFFSET: begin
            obi_rdata = reg_neopixel_q.str.t0l;
          end

          NEOPIXEL_T_LATCH_OFFSET: begin
            obi_rdata = reg_neopixel_q.str.t_latch;
          end

          NEOPIXEL_SLEEP_OFFSET: begin
            obi_rdata = reg_neopixel_q.str.sleep;
          end

          DMA_SRC_ADDR_OFFSET: begin
            obi_rdata = reg_dma_q.str.src_addr;
          end

          DMA_NUM_BYTES_OFFSET: begin
            obi_rdata = reg_dma_q.str.num_bytes;
          end

          DMA_VALID_OFFSET: begin
            obi_rdata = reg_dma_q.str.valid;
          end

          FIFO_ACCESS_OFFSET: begin
            obi_rdata = reg_fifo_q;
          end

          default: begin
            obi_rdata = 32'hBADCAB1E;  // Return error value in devmode for unmapped reads
            obi_err = 1'b1;
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
