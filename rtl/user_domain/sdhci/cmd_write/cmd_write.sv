//Handels SD CMD line transmission


//untested!
module cmd_write (
    input   logic         sd_freq_clk_i,  //clock at sd frequency, should be active independantly of sd clock
    input   logic         rst_ni,
  
    input   logic         start_tx_i,
    input   logic [31:0]  cmd_argument_i, //from cmd argument register
    input   logic [5:0]   cmd_nr_i, //cmd index (eg. CMD12 == 6'b001100)
    input   logic         cmd_od_i, //open drain output mode, otherwise push-pull
  
    output  logic         tx_done_o //high when nothing is currently being transmitted
  );
    //State machine/////////////////////////////////////////////////////////////////////////////////////
    logic [5:0] bit_count;
  
    typedef enum logic [2:0] {
      READY,
      START_CNT,
      SHIFT_REG_OUT,
      CRC7_OUT,
      END_BIT_OUT,
      ERROR //only for simulation
    } tx_state_e;
    tx_state_e tx_state_d, tx_state_q;
  
    always_comb begin : cmd_tx_state_transition
      tx_state_d    = tx_state_q;
      
      unique case (tx_state_q)
        
        READY:          tx_state_d = (start_tx_i) ? START_CNT : READY;
        
        START_CNT:      tx_state_d = SHIFT_REG_OUT;
  
        SHIFT_REG_OUT:  tx_state_d = (bit_count == (1+1+6+32)) ? CRC7_OUT : SHIFT_REG_OUT;
  
        CRC7_OUT:       tx_state_d = (bit_count == (1+1+6+32+7)) ? END_BIT_OUT : CRC7_OUT;
  
        END_BIT_OUT:    tx_state_d = READY;
  
        default:        tx_state_d = ERROR;
      endcase
    end
    
    `FF (tx_state_q, tx_state_d, READY, sd_freq_clk_i, rst_ni);
  
    //data path////////////////////////////////////////////////////////////////////////////////////////////
    logic [39:0] cmd_bits_47_to_8;
    assign cmd_bits_47_to_8 [39]    = 1'b0;
    assign cmd_bits_47_to_8 [38]    = 1'b1;
    assign cmd_bits_47_to_8 [37:32] = cmd_nr_i;
    assign cmd_bits_47_to_8 [31:0]  = cmd_argument_i;
  
    logic par_write_en, shift_en, crc7_shift_en, shift_reg_out, crc7_out, highz, sd_cmd;
    logic tx_ongoing_d, tx_ongoing_q;
    
    always_comb begin : cmd_tx_datapath
      tx_ongoing_d  = tx_ongoing_q;
      par_write_en  = 1'b0;
      shift_en      = 1'b0;
      crc7_shift_en = 1'b0;
      sd_cmd        = 1'b0;
      highz         = 1'b1;
      
      unique case (tx_state_q)
        READY:        tx_ongoing_d = 1'd0;
        
        START_CNT:    begin
          tx_ongoing_d = 1'b1;
          par_write_en = 1'b1;
        end
  
        SHIFT_REG_OUT:begin
          shift_en    = 1'b1;
          highz       = 1'b0;
          sd_cmd      = shift_reg_out;
        end
  
        CRC7_OUT:     begin
          crc7_shift_en = 1'b1;
          highz         = 1'b0;
          sd_cmd        = crc7_out;
        end
  
        END_BIT_OUT:  begin
          sd_cmd = 1'b1;
          highz  = 1'b0;
        end
  
        default: ;
      endcase
    end
  
    assign  tx_done_o = ~tx_ongoing_q;
  
    `FF (tx_ongoing_q, tx_ongoing_d, 0, sd_freq_clk_i, rst_ni);
  
    par_ser_shift_reg #(
      .NumBits    (40),
      .ShiftInVal (0)
    ) i_cmd_shift_reg (
      .clk_i          (sd_freq_clk_i),
      .rst_ni         (rst_ni),
      .par_write_en_i (par_write_en),
      .shift_en_i     (shift_en),
      .dat_par_i      (cmd_bits_47_to_8),
      .dat_ser_o      (shift_reg_out)
    );
  
    crc7_write #( 
    ) i_crc7_write (
      .clk_i            (sd_freq_clk_i),
      .rst_ni           (rst_ni),
      .shift_out_crc7_i (crc7_shift_en),
      .dat_ser_i        (shift_reg_out),
      .crc_ser_o        (crc7_out)
    );
  
    counter #(
      .WIDTH            (3'd6),
      .STICKY_OVERFLOW  (1'b0)
    ) i_tx_bits_counter (
      .clk_i      (sd_freq_clk_i),
      .rst_ni     (rst_ni),
      .clear_i    (tx_done),
      .en_i       (tx_ongoing_q),
      .load_i     (1'b0),
      .down_i     (1'b0),
      .d_i        (6'b0),
      .q_o        (bit_count),
      .overflow_o ()
    );
  
    sd_bus_cmd_driver i_sd_bus_cmd_driver (
      .sd_cmd_i     (sd_cmd),
      .cmd_highz_i  (highz),
      .cmd_od_i     (cmd_od_i)
    );
  
  endmodule