//CRC7 calculation. Takes in serial data.
//shifts out result MSb first when shift_out_crc7_i is high, output should otherwise be ignored.



//Untested!
module crc7_write (
  input   logic clk_i,
  input   logic rst_ni,

  input   logic shift_out_crc7_i,
  input   logic dat_ser_i,
  output  logic crc_ser_o
);
  logic [2:0] lower_3_d, lower_3_q;
  logic [3:0] upper_4_d, upper_4_q;
  logic       dat_i_xor_out;

  always_comb begin : crc7_comb
    lower_3_d = lower_3_q;
    upper_4_d = upper_4_q;
    
    if (shift_out_crc7_i) begin : shift_out_result
      upper_4_d[3:1]  = upper_4_q[2:0];
      upper_4_d[0]    = lower_3_q[2];
      lower_3_d[2:1]  = lower_3_q[1:0];
      lower_3_d[0]    = 0'b0; //Fill with zeros while shifting out crc; no reset needed?
    end else begin : calc_crc7
      dat_i_xor_out   = (dat_ser_i ^ upper_4_q[3]);
      upper_4_d[3:1]  = upper_4_q[2:0];
      upper_4_d[0]    = (lower_3_q[2] ^ dat_i_xor_out);
      lower_3_d[2:1]  = lower_3_q[1:0];
      lower_3_d[0]    = dat_i_xor_out;
    end
  end
  
  `FF (lower_3_q, lower_3_d, 0, clk_i, rst_ni);
  `FF (upper_4_q, upper_4_d, 0, clk_i, rst_ni);
  
  //Output assignment
  assign crc_ser_o = upper_4_q[3];

endmodule