`include "idma/typedef.svh"

module neopixel_dma #(
    /// Data width
    parameter int unsigned DataWidth        = 32'd32,
    /// Address width
    parameter int unsigned AddrWidth        = 32'd32,
    /// OBI user width
    parameter int unsigned UserWidth        = 32'd1,
    /// OBI ID width
    parameter int unsigned ObiIdWidth       = 32'd1,
    /// With of a transfer: max transfer size is `2**TFLenWidth` bytes
    parameter int unsigned TFLenWidth       = 32'd32,
    /// OBI config
    parameter obi_pkg::obi_cfg_t ObiCfg     = obi_pkg::ObiDefaultConfig,
    /// OBI A channel type
    parameter type obi_a_chan_t       = logic,
    /// OBI request struct type.
    parameter type obi_req_t          = logic,
    /// OBI response struct type.
    parameter type obi_rsp_t          = logic,
    /// *NOT OVERWRITE*: Address type
    parameter type addr_t             = logic [AddrWidth-1:0],
    /// *NOT OVERWRITE*: Data type
    parameter type data_t             = logic [DataWidth-1:0],
    /// *NOT OVERWRITE*: Length type
    parameter type tf_len_t           = logic [TFLenWidth-1:0]
)(
    input  logic     clk_i,
    input  logic     rst_ni,
    /// Request channel
    input  addr_t    src_addr_i,
    input  tf_len_t  num_bytes_i,
    input  logic     req_valid_i,
    output logic     req_ready_o,
    /// Response
    output logic     transfer_done_o,
    /// OBI read port
    output obi_req_t obi_req_o,
    input  obi_rsp_t obi_rsp_i,
    /// FIFO interface
    output data_t    fifo_data_o,
    output logic     fifo_valid_o,
    input  logic     fifo_ready_i,
    // Status
    output logic     busy_o
);

    // Dependent parameter
    localparam int unsigned StrbWidth = DataWidth / 32'd8;

    // Dependent types
    typedef logic [StrbWidth-1:0]   strb_t;
    typedef logic [UserWidth-1:0]   user_t;
    typedef logic [ObiIdWidth-1:0]  id_t;

    /// Init read request
    typedef struct packed {
        addr_t  cfg;
        data_t  term;
        strb_t  strb;
        id_t    id;
    } init_req_chan_t;

    typedef struct packed {
        init_req_chan_t req_chan;
        logic           req_valid;
        logic           rsp_ready;
    } init_req_t;

    typedef struct packed {
        logic [DataWidth-1:0] init;
    } init_rsp_chan_t;

    typedef struct packed {
        init_rsp_chan_t rsp_chan;
        logic           rsp_valid;
        logic           req_ready;
    } init_rsp_t;

    // Meta Channel Widths
    localparam int unsigned init_req_chan_width = $bits(init_req_chan_t);
    localparam int unsigned obi_a_chan_width = $bits(obi_a_chan_t);

    // iDMA request / response types
    `IDMA_TYPEDEF_FULL_REQ_T(idma_req_t, id_t, addr_t, tf_len_t)
    `IDMA_TYPEDEF_FULL_RSP_T(idma_rsp_t, addr_t)

    // Meta channels
    typedef struct packed {
        obi_a_chan_t a_chan;
    } obi_read_meta_channel_t;

    typedef struct packed {
        obi_read_meta_channel_t obi;
    } read_meta_channel_t;

    typedef struct packed {
        init_req_chan_t req_chan;
    } init_write_meta_channel_t;

    typedef struct packed {
        init_write_meta_channel_t init;
    } write_meta_channel_t;

    // Local Signals
    idma_req_t            idma_req;
    idma_pkg::idma_busy_t idma_busy;
    init_req_t            init_req;
    init_rsp_t            init_rsp;


    // Construct Request
    always_comb begin : proc_assign_request
        idma_req                  = '0;
        idma_req.length           = num_bytes_i;
        idma_req.src_addr         = src_addr_i;
        idma_req.opt.src_protocol = idma_pkg::OBI;
        idma_req.opt.dst_protocol = idma_pkg::INIT;
    end

    // Connect FIFO interface
    assign fifo_data_o  = init_req.req_chan.term;
    assign fifo_valid_o = init_req.req_valid;

    assign init_rsp.rsp_chan.init = '0;
    assign init_rsp.rsp_valid     = 1'b1;
    assign init_rsp.req_ready     = fifo_ready_i;

    // Connect busy signals
    assign busy_o = |idma_busy;

    // DMA
    idma_backend_r_obi_w_init #(
        .CombinedShifter      ( 1'b0                        ),
        .DataWidth            ( DataWidth                   ),
        .AddrWidth            ( AddrWidth                   ),
        .AxiIdWidth           ( ObiIdWidth                  ),
        .UserWidth            ( UserWidth                   ),
        .TFLenWidth           ( TFLenWidth                  ),
        .MaskInvalidData      ( 1'b1                        ),
        .BufferDepth          ( 32'd3                       ),
        .RAWCouplingAvail     ( 1'b0                        ),
        .HardwareLegalizer    ( 1'b1                        ),
        .RejectZeroTransfers  ( 1'b1                        ),
        .ErrorCap             ( idma_pkg::NO_ERROR_HANDLING ),
        .PrintFifoInfo        ( 1'b0                        ),
        .NumAxInFlight        ( 32'd2                       ),
        .MemSysDepth          ( 32'd0                       ),
        .idma_req_t           ( idma_req_t                  ),
        .idma_rsp_t           ( idma_rsp_t                  ),
        .idma_eh_req_t        ( idma_pkg::idma_eh_req_t     ),
        .idma_busy_t          ( idma_pkg::idma_busy_t       ),
        .init_req_t           ( init_req_t                  ),
        .init_rsp_t           ( init_rsp_t                  ),
        .obi_req_t            ( obi_req_t                   ),
        .obi_rsp_t            ( obi_rsp_t                   ),
        .write_meta_channel_t ( write_meta_channel_t        ),
        .read_meta_channel_t  ( read_meta_channel_t         )
    ) i_idma_backend  (
        .clk_i,
        .rst_ni,
        .testmode_i       ( 1'b0                ),
        .idma_req_i       ( idma_req            ),
        .req_valid_i      ( req_valid_i         ),
        .req_ready_o      ( req_ready_o         ),
        .idma_rsp_o       ( /* NOT CONNECTED */ ),
        .rsp_valid_o      ( transfer_done_o     ),
        .rsp_ready_i      ( 1'b1                ),
        .idma_eh_req_i    (  '0                 ),
        .eh_req_valid_i   ( 1'b0                ),
        .eh_req_ready_o   ( /* NOT CONNECTED */ ),
        .obi_read_req_o   ( obi_req_o           ),
        .obi_read_rsp_i   ( obi_rsp_i           ),
        .init_write_req_o ( init_req            ),
        .init_write_rsp_i ( init_rsp            ),
        .busy_o           ( idma_busy           )
    );

endmodule
