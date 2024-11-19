`include "common_cells/registers.svh"

module write_to_fifo import neopixel_pkg::*; #(
    parameter obi_pkg::obi_cfg_t  ObiCfg    = obi_pkg::ObiDefaultConfig,
    /// Regbus request struct type.
    parameter type obi_req_t                = logic,
    /// Regbus response struct type.
    parameter type obi_rsp_t                = logic
)(
    /// Primary input clock. The control interface is suposed to be synchronous to
    /// this clock.
    input  logic clk_i,
    /// Asynchronous active-low reset
    input  logic rst_ni,

    /// FIFO control signals
    output logic fifo_empty_o,

    output logic fifo_full_o,

    input  logic fifo_pop_i,

    /// Data sent to the neopixel controller
    output logic [23:0] fifo_data_o,

    /// DMA Stuff
    input [RegisterDepth-1:0] dma_data_i,

    input dma_valid_push_i,

    /// 0: off, 1: OBI is on 2: DMA is on
    input [1:0] fifo_access_i,

    /// Control interface request side using register_interface protocol.
    /// OBI request interface: a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
    input  obi_req_t obi_req_i,
    /// Control interface request side using register_interface protocol.
    /// OBI response interface: r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid
    output obi_rsp_t obi_rsp_o,

    /// An interrput signal if we don't use the dma and the fifo is almost full or empty
    output fifo_interrupt_o
);
    logic [FifoAddrDepth-1:0] fifo_usage;
    
    // Obi signals
    logic                       valid_d, valid_q;
    logic [31:0]                rdata_d, rdata_q;
    logic [ObiCfg.IdWidth-1:0]  id_d, id_q;

    // Step 1: Request phase
    // grant the request (FIFO is always ready so this can be assigned directly)
    assign obi_rsp_o.gnt = obi_req_i.a.we ? (
                           obi_req_i.a.we & !fifo_full_o & obi_req_i.req) : obi_req_i.req;
    // Safe important info
    assign valid_d     = obi_req_i.req & obi_rsp_o.gnt;
    assign id_d        = obi_req_i.a.aid;
    assign rdata_d     = obi_req_i.a.we ? '0 : fifo_usage;

    // Register outputs for valid, ID, and read data
    `FF(valid_q, valid_d, '0, clk_i, rst_ni)
    `FF(id_q, id_d, '0, clk_i, rst_ni)
    `FF(rdata_q, rdata_d, '0, clk_i, rst_ni)

    // Step 2: Response phase
    // On the next cycle, send the response back with the same ID and the data
    always_comb begin
        obi_rsp_o.r.rid         = id_q;
        obi_rsp_o.r.err         = 0;
        obi_rsp_o.rvalid        = valid_q;
        obi_rsp_o.r.rdata       = rdata_q;
        obi_rsp_o.r.r_optional  = '0;
    end

    //////////////////////////////////////////////
    // FIFO (Buffer for all NeoPixel Sequences) //
    //////////////////////////////////////////////

    // FIFO and Access Control logic
    logic           obi_push, dma_push;
    logic [23:0]    data;
    logic           push;
    logic [1:0]     fifo_access_q, fifo_access_d;
    logic           flush;

    assign fifo_access_d = fifo_access_i;

    // Determine push conditions for OBI and DMA
    assign obi_push = obi_req_i.a.we & ~fifo_full_o & obi_req_i.req;
    assign dma_push = ~fifo_full_o & dma_valid_push_i;

    always_comb begin
        push = 1'b0;
        data = '0;

        case (fifo_access_q)
            2'b00:begin
                // Valid access mode
            end
            2'b01: begin
                push = obi_push;
                data = obi_req_i.a.wdata[23:0];
            end
            2'b10: begin
                push = dma_push;
                data = dma_data_i[23:0];
            end
            default: begin
                // Invalid access mode
            end
        endcase
    end

    `FF(fifo_access_q, fifo_access_d, '0, clk_i, rst_ni)

    // Flush FIFO when access mode changes
    assign flush = ~(fifo_access_q == fifo_access_d);

    // Instantiate FIFO module for NeoPixel data storage
    fifo_v3 #(
        .DATA_WIDTH ( 24        ),
        .DEPTH      ( FifoDepth )
    ) color_fifo (
        .clk_i      ( clk_i         ),
        .rst_ni     ( rst_ni        ),
        .testmode_i ( 1'b0          ),

        .flush_i    ( flush         ),

        .data_i     ( data          ),
        .push_i     ( push          ),

        .pop_i      ( fifo_pop_i    ),

        .full_o     ( fifo_full_o   ),
        .empty_o    ( fifo_empty_o  ),
        .usage_o    ( fifo_usage    ),

        .data_o     ( fifo_data_o   )
    );

    //----------------------------------------------------------------------------------------------------
    // Interrupt for OBI if the FIFO has not enough elements or is almost full //
    //----------------------------------------------------------------------------------------------------

    logic fifo_high_interrupt;
    logic fifo_low_interrupt;

    always_comb begin
        fifo_high_interrupt = (fifo_usage >= FifoHighThreshold);
        fifo_low_interrupt  = (fifo_usage <= FifoLowThreshold);
    end

    assign fifo_interrupt_o = (fifo_access_q == 1'b1) ?
                fifo_high_interrupt | fifo_low_interrupt : 1'b0;

endmodule
