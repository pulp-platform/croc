`include "register_interface/typedef.svh"
`include "obi/typedef.svh"

package neopixel_pkg;

    //import the package from the domain you are on
    import user_pkg::*;

    /////////////////
    // Address map //
    /////////////////

    // Address map data type
    typedef struct packed {
        logic [31:0] idx;
        logic [31:0] start_addr;
        logic [31:0] end_addr;
    } addr_map_rule_t;

    // Register Address
    localparam bit [31:0] NeoPixelRegisterAddrOffset  = UserNeoPixelAddrOffset;
    localparam bit [31:0] NeoPixelRegisterAddrRange   = 32'h0000_0200;

    // FIFO Address
    localparam bit [31:0] NeoPixelFifoAddrOffset   =
                            NeoPixelRegisterAddrOffset + NeoPixelRegisterAddrRange;
    localparam bit [31:0] NeoPixelFifoAddrRange    = 32'h0000_0E00;

    // Address rules
    localparam int unsigned NumNeoPixelAddressRules   = 2;  // Register + FIFO
    localparam int unsigned NumNeoPixelAddress        = NumNeoPixelAddressRules + 1; // + OBI error

    // Enum for bus indices
    typedef enum int {
        NeoPixelError       = 0,
        NeoPixelRegister    = 1,
        NeoPixelFifo        = 2
    } neopixel_demux_outputs_e;

    localparam addr_map_rule_t [NumNeoPixelAddressRules-1:0] neopixel_addr_map = '{
        // 0: Error
        // 1: Register
        '{ idx: NeoPixelRegister,   start_addr: NeoPixelRegisterAddrOffset,
                end_addr: NeoPixelRegisterAddrOffset + NeoPixelRegisterAddrRange},
        // 2: FIFO
        '{ idx: NeoPixelFifo,       start_addr: NeoPixelFifoAddrOffset,
                end_addr: NeoPixelFifoAddrOffset + NeoPixelFifoAddrRange}
    };

    /////////////////////////////////////
    // Register for Timing Constraints //
    /////////////////////////////////////

    //-----------------------------------------------------------------------------------------------
    // Register Union
    //-----------------------------------------------------------------------------------------------

    // Address widths within the block : Defines the max no of Block Addresses (2047)
    parameter int BlockAwNeopixel = 10;

    // How much space a Register has
    parameter int RegisterDepth = 32;

    //----Writeable NeoPixel Register-------------------------------------------------------------------

    // How many Register for the NeoPixel
    parameter int NumNeoPixelReg = 6;

    typedef struct packed {
        logic [RegisterDepth - 1:0] num_neopixel;   // Number of NeoPixel attached register
        logic [RegisterDepth - 1:0] t1h;            // 1 code, high volate time register
        logic [RegisterDepth - 1:0] t1l;            // 1 code, low volate time register
        logic [RegisterDepth - 1:0] t0h;            // 0 code, high volate time register
        logic [RegisterDepth - 1:0] t0l;            // 0 code, low volate time register
        logic [RegisterDepth - 1:0] t_latch;        // low voltage time register
    } neopixel_write_reg_fields_t;

    typedef union packed {
        neopixel_write_reg_fields_t str;        // Access as structured fields
        logic [NumNeoPixelReg * RegisterDepth - 1:0] arr;   // Access as a flat array
    } neopixel_write_reg_union_t;

    //----Writeable DMA Register-------------------------------------------------------------------

    // How many Register for the DMA
    parameter int NumDmaReg = 3;

    typedef struct packed {
       logic [RegisterDepth - 1:0] src_addr;    // Source Address in SRAM
       logic [RegisterDepth - 1:0] num_bytes;   // Number of bytes sent to FIFO
       logic [RegisterDepth - 1:0] valid;       // Set to 1, for next data needs 
                                                // to be set to 0 and then again to 1
    } dma_write_reg_fields_t;

    typedef union packed {
        dma_write_reg_fields_t str;        // Access as structured fields
        logic [NumDmaReg * RegisterDepth - 1:0] arr;   // Access as a flat array
    } dma_write_reg_union_t;

    //----------------------------------------------------------------------------------------------------
    // Register Address Offsets //
    //----------------------------------------------------------------------------------------------------

    // Every Register gets 32 bits

    //----Information Register----------------------------------------------------------------------------
    // After the chip is printed Software can't change them

    // How many maximal NeoPixel can this controller support?
    parameter logic [BlockAwNeopixel - 1:0] MAX_NUM_NEOPIXEL_OFFSET  = 11'h 0;
    // How many maximal Animation can this controller support?
    parameter logic [BlockAwNeopixel - 1:0] MAX_NUM_ANIMATION_OFFSET  = 11'h 20;
    // What is the minimum allowed frequency
    parameter logic [BlockAwNeopixel - 1:0] MIN_FREQ_OFFSET  = 11'h 40;

    //----Writeable Register-------------------------------------------------------------------------------
    // After the chip is printed you can write into with Software

    // Registers used for the neopixel_controller
    // How many neopixel did you attach to the controller
    parameter logic [BlockAwNeopixel - 1:0] NUM_NEOPIXEL_OFFSET     = 11'h 60;
    // Timing constraints for the timing control
    // you have to calculate the values
    parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T1H_OFFSET      = 11'h 80;
    parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T1L_OFFSET      = 11'h A0;
    parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T0H_OFFSET      = 11'h C0;
    parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T0L_OFFSET      = 11'h E0;
    parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T_LATCH_OFFSET  = 11'h 100;

    // Registers used for the DMA
    parameter logic [BlockAwNeopixel - 1:0] DMA_SRC_ADDR_OFFSET      = 11'h 120;
    parameter logic [BlockAwNeopixel - 1:0] DMA_NUM_BYTES_OFFSET     = 11'h 140;
    parameter logic [BlockAwNeopixel - 1:0] DMA_VALID_OFFSET         = 11'h 160;

    parameter logic [BlockAwNeopixel - 1:0] FIFO_ACCESS_OFFSET      = 11'h 1A0;

    //////////////
    // NeoPixel //
    //////////////

    localparam int unsigned MaxNumNeoPixel = 256;

    localparam int unsigned MaxNumAnimation = 8;

    localparam int unsigned NumBitsPerPixel = 24;

    localparam int unsigned CounterWidth = 16;

    /////////////////////////
    // FIFO for color data //
    /////////////////////////

    // FIFO parameters
    localparam int unsigned FifoDepth = 16;

    localparam int unsigned FifoAddrDepth   = (FifoDepth > 1) ? $clog2(FifoDepth) : 1;

    // Threshold for Interrupt
    localparam int unsigned FifoHighThreshold = 14;
    localparam int unsigned FifoLowThreshold = 2;

    /////////
    // DMA //
    /////////

    localparam obi_pkg::obi_cfg_t MgrDmaObiCfg = '{
                                  UseRReady:          1'b1,
                                  CombGnt:            1'b0,
                                  AddrWidth:            32,
                                  DataWidth:            32,
                                  IdWidth:               1,
                                  Integrity:          1'b0,
                                  BeFull:             1'b1,
                                  OptionalCfg:         '0
                                };

    /// OBI Manager <-> Xbar address channel
    typedef struct packed {
        logic [  MgrDmaObiCfg.AddrWidth-1:0] addr;
        logic                                we;
        logic [MgrDmaObiCfg.DataWidth/8-1:0] be;
        logic [  MgrDmaObiCfg.DataWidth-1:0] wdata;
        logic [    MgrDmaObiCfg.IdWidth-1:0] aid;
        logic                                a_optional; // dummy signal; not used
    } mgr_dma_obi_a_chan_t;

    /// OBI Manager <-> Xbar request
    typedef struct packed {
        mgr_dma_obi_a_chan_t a;
        logic    req;
        logic rready;
    } mgr_dma_obi_req_t;

    /// OBI Manager <-> Xbar response channel
    typedef struct packed {
        logic [MgrDmaObiCfg.DataWidth-1:0] rdata;
        logic [  MgrDmaObiCfg.IdWidth-1:0] rid;
        logic                              err;
        logic                              r_optional; // dummy signal; not used
    } mgr_dma_obi_r_chan_t;

    /// OBI Manager <-> Xbar response
    typedef struct packed {
        mgr_dma_obi_r_chan_t r;
        logic    gnt;
        logic    rvalid;
    } mgr_dma_obi_rsp_t;

endpackage
