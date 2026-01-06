package croc_cspect_pkg;

  // From CVE2 controller's FSM state encoding
  typedef enum logic [3:0] {
    RESET, BOOT_SET, WAIT_SLEEP, SLEEP, FIRST_FETCH, DECODE, FLUSH,
    IRQ_TAKEN, DBG_TAKEN_IF, DBG_TAKEN_ID
  } cve2_ctrl_fsm_e;

  // Croc SoC's CircumSpect interface signals
  // Collects all signals relevant for logging
  typedef struct {
    logic                 fetch_en;
    logic                 cve2_dbg_mode;
    cve2_pkg::priv_lvl_e  cve2_priv_mode;
    logic                 cve2_dbg_req;
    logic                 cve2_exc_req;
    cve2_ctrl_fsm_e       cve2_ctrl_state;
    cve2_pkg::exc_cause_e cve2_exc_cause;
    logic [31:0]          cve2_exc_instr;
    logic [31:0]          cve2_pc;
    logic                 cve2_inst_req;
    logic                 cve2_inst_gnt;
    logic                 cve2_inst_valid;
    logic [31:0]          cve2_inst_addr;
    logic [31:0]          cve2_inst_data;
    logic                 cve2_data_req;
    logic                 cve2_data_gnt;
    logic                 cve2_data_valid;
    logic                 cve2_data_we;
    logic [31:0]          cve2_data_addr;
    logic [31:0]          cve2_data_rdata;
    logic                 cve2_data_wdata;
    logic                 cve2_irq_software;
    logic                 cve2_irq_timer;
    logic                 cve2_irq_external;
    logic [15:0]          cve2_irq_fast;
    logic                 cve2_irq_nm;
    logic [31:0][31:0]    cve2_regs;
  } croc_cspect_if_t;

  //////////////////////
  // Helper functions //
  //////////////////////

  // Convert priviledge level enum to string
  function automatic string cve2_priv_lvl_to_string(cve2_pkg::priv_lvl_e priv_lvl);
    case(priv_lvl)
      cve2_pkg::PRIV_LVL_M: begin
        return "M";
      end
      cve2_pkg::PRIV_LVL_H: begin
        return "H";
      end
      cve2_pkg::PRIV_LVL_S: begin
        return "S";
      end
      cve2_pkg::PRIV_LVL_U: begin
        return "U";
      end
      default: begin
        return "?";
      end
    endcase
  endfunction

  // Convert CVE2 exception cause to string
  function automatic string cve2_exception_to_string(cve2_pkg::exc_cause_e cause);
    case(cause)
      cve2_pkg::EXC_CAUSE_INSN_ADDR_MISA: begin
        return "Address misaligned";
      end
      cve2_pkg::EXC_CAUSE_INSTR_ACCESS_FAULT: begin
        return "Instruction fault";
      end
      cve2_pkg::EXC_CAUSE_ILLEGAL_INSN: begin
        return "Illegal instruction";
      end
      cve2_pkg::EXC_CAUSE_BREAKPOINT: begin
        return "Breakpoint";
      end
      cve2_pkg::EXC_CAUSE_LOAD_ACCESS_FAULT: begin
        return "Load fault";
      end
      cve2_pkg::EXC_CAUSE_STORE_ACCESS_FAULT: begin
        return "Store fault";
      end
      cve2_pkg::EXC_CAUSE_ECALL_UMODE: begin
        return "ECALL U-mode";
      end
      cve2_pkg::EXC_CAUSE_ECALL_MMODE: begin
        return "ECALL M-mode";
      end
      default: begin
        return $sformatf("Cause: 0x%X", cause);
      end
    endcase
  endfunction

  // Convert CVE2 controller's state to string
  function automatic string cve2_state_to_string(cve2_ctrl_fsm_e state);
    case(state)
      RESET: begin
        return "Reset";
      end
      BOOT_SET: begin
        return "Boot set";
      end
      WAIT_SLEEP: begin
        return "Wait sleep";
      end
      SLEEP: begin
        return "Sleep";
      end
      FIRST_FETCH: begin
        return "First fetch";
      end
      DECODE: begin
        return "Decode";
      end
      FLUSH: begin
        return "Flush";
      end
      IRQ_TAKEN: begin
        return "Irq";
      end
      DBG_TAKEN_IF: begin
        return "Dbg taken IF";
      end
      DBG_TAKEN_ID: begin
        return "Dbg taken ID";
      end
      default: begin
        return "??";
      end
    endcase
  endfunction

endpackage

interface croc_cspect_if;

  event start_log;

  logic                            fetch_en;
  logic                            cve2_dbg_mode;
  cve2_pkg::priv_lvl_e             cve2_priv_mode;
  logic                            cve2_dbg_req;
  logic                            cve2_exc_req;
  croc_cspect_pkg::cve2_ctrl_fsm_e cve2_ctrl_state;
  cve2_pkg::exc_cause_e            cve2_exc_cause;
  logic [31:0]                     cve2_exc_instr;
  logic [31:0]                     cve2_pc;
  logic                            cve2_inst_req;
  logic                            cve2_inst_gnt;
  logic                            cve2_inst_valid;
  logic [31:0]                     cve2_inst_addr;
  logic [31:0]                     cve2_inst_data;
  logic                            cve2_data_req;
  logic                            cve2_data_gnt;
  logic                            cve2_data_valid;
  logic                            cve2_data_we;
  logic [31:0]                     cve2_data_addr;
  logic [31:0]                     cve2_data_rdata;
  logic                            cve2_data_wdata;
  logic                            cve2_irq_software;
  logic                            cve2_irq_timer;
  logic                            cve2_irq_external;
  logic [15:0]                     cve2_irq_fast;
  logic                            cve2_irq_nm;
  logic [31:0][31:0]               cve2_regs;

endinterface

module edge_detector (
  input  logic clk_i,
  input  logic rst_ni,
  input  logic d_i,
  output logic re_o,
  output logic fe_o
);

  logic d_prev;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (~rst_ni) begin
      d_prev <= '0;
    end else begin
      d_prev <= d_i;
    end
  end

  assign re_o = ~d_prev & d_i;
  assign fe_o = d_prev & ~d_i;

endmodule

module croc_cspect_logger 
  import cspect_pkg::*;
  import croc_cspect_pkg::*;
(
  input logic    clk_i,
  input logic    rst_ni,
  croc_cspect_if croc_if
);

  ////////////////////////////////
  // Helper signals and modules //
  ////////////////////////////////

  // Instruction / data request
  typedef struct packed {
    logic valid;
    logic we;
    uuid_t flow;
  } req_in_flight_t;

  logic cve2_exception;
  logic fetch_en_asserted;
  logic fetch_en_deasserted;
  logic cve2_timer_irq_asserted;
  logic cve2_timer_irq_deasserted;
  logic cve2_software_irq_asserted;
  logic cve2_software_irq_deasserted;
  logic cve2_external_irq_asserted;
  logic cve2_external_irq_deasserted;
  logic cve2_nmi_irq_asserted;
  logic cve2_nmi_irq_deasserted;
  logic [15:0] cve2_fast_irq_asserted;
  logic [15:0] cve2_fast_irq_deasserted;
  req_in_flight_t inst_req_in_flight_q;
  req_in_flight_t data_req_in_flight_q;

  edge_detector i_exception_edge_detect (
    .clk_i  ( clk_i                   ),
    .rst_ni ( rst_ni                  ),
    .d_i    ( croc_if.cve2_exc_req    ),
    .re_o   ( cve2_exception          ),
    .fe_o   ()
  );

  edge_detector i_fetch_en_edge_detect (
    .clk_i  ( clk_i               ),
    .rst_ni ( rst_ni              ),
    .d_i    ( croc_if.fetch_en    ),
    .re_o   ( fetch_en_asserted   ),
    .fe_o   ( fetch_en_deasserted )
  );

  edge_detector i_timer_irq_edge_detect (
    .clk_i  ( clk_i                     ),
    .rst_ni ( rst_ni                    ),
    .d_i    ( croc_if.cve2_irq_timer    ),
    .re_o   ( cve2_timer_irq_asserted   ),
    .fe_o   ( cve2_timer_irq_deasserted )
  );

  edge_detector i_software_irq_edge_detect (
    .clk_i  ( clk_i                        ),
    .rst_ni ( rst_ni                       ),
    .d_i    ( croc_if.cve2_irq_software    ),
    .re_o   ( cve2_software_irq_asserted   ),
    .fe_o   ( cve2_software_irq_deasserted )
  );

  edge_detector i_external_irq_edge_detect (
    .clk_i  ( clk_i                        ),
    .rst_ni ( rst_ni                       ),
    .d_i    ( croc_if.cve2_irq_external    ),
    .re_o   ( cve2_external_irq_asserted   ),
    .fe_o   ( cve2_external_irq_deasserted )
  );

  edge_detector i_nm_irq_edge_detect (
    .clk_i  ( clk_i                  ),
    .rst_ni ( rst_ni                 ),
    .d_i    ( croc_if.cve2_irq_nm    ),
    .re_o   ( cve2_nm_irq_asserted   ),
    .fe_o   ( cve2_nm_irq_deasserted )
  );

  generate
    for (genvar i = 0; i < 16; ++i) begin
      edge_detector i_fast_irq_edge_detect (
        .clk_i  ( clk_i                       ),
        .rst_ni ( rst_ni                      ),
        .d_i    ( croc_if.cve2_irq_fast[i]    ),
        .re_o   ( cve2_fast_irq_asserted[i]   ),
        .fe_o   ( cve2_fast_irq_deasserted[i] )
      );
    end
  endgenerate

  ///////////////////////////////
  // Logging scopes and tracks //
  ///////////////////////////////

  ctx   cspect_ctx;
  track sim_track;
  // CVE2 top scope
  scope cve2_scope;
  // CVE2 overview scope
  scope cve2_overview_scope;
  track cve2_mode_track;
  track cve2_dbg_req_track;
  track cve2_exception_track;
  track cve2_fetch_en_track;
  track cve2_state_track;
  // CVE2 interrupts scope
  scope cve2_interrupts_scope;
  track cve2_timer_irq_track;
  track cve2_software_irq_track;
  track cve2_external_irq_track;
  track cve2_nm_irq_track;
  track cve2_fast_irq_tracks [16];
  // CVE2 IF stage scope
  scope cve2_if_scope;
  track cve2_instr_req_track;
  track cve2_instr_rsp_track;
  // CVE2 LSU scope
  scope cve2_lsu_scope;
  track cve2_data_req_track;
  track cve2_data_rsp_track;
  // CVE2 register file scope
  scope cve2_registers_scope;
  track cve2_regfile_tracks [32];

  ////////////////////////////////
  // CirscumSpect logging setup //
  ////////////////////////////////
  string filename = "croc.pftrace";

  initial begin

    wait(croc_if.start_log.triggered);

    cspect_ctx = new(filename);
    $display("@%t | [INFO] Started cspect trace @ %s", $time, filename);

    sim_track = cspect_ctx.new_track("simulation");
    sim_track.instant_evt("begin");

    cve2_scope            = cspect_ctx.new_track("CVE2",          .child_ordering(cspect_pkg::Explicit));
    cve2_overview_scope   = cve2_scope.new_track("Overview",      .child_ordering(cspect_pkg::Explicit), .child_order_rank(1));
    cve2_interrupts_scope = cve2_scope.new_track("Interrupts",    .child_ordering(cspect_pkg::Explicit), .child_order_rank(2));
    cve2_if_scope         = cve2_scope.new_track("IF stage",      .child_ordering(cspect_pkg::Explicit), .child_order_rank(3));
    cve2_lsu_scope        = cve2_scope.new_track("LSU",           .child_ordering(cspect_pkg::Explicit), .child_order_rank(4));
    cve2_registers_scope  = cve2_scope.new_track("Register file", .child_ordering(cspect_pkg::Explicit), .child_order_rank(5));

    cve2_mode_track         = cve2_overview_scope.new_track("Priviledge mode");
    cve2_dbg_req_track      = cve2_overview_scope.new_track("Debug reqests");
    cve2_exception_track    = cve2_overview_scope.new_track("Exceptions");
    cve2_fetch_en_track     = cve2_overview_scope.new_track("Fetch enable");
    cve2_state_track        = cve2_overview_scope.new_track("Controller FSM state");

    cve2_timer_irq_track    = cve2_interrupts_scope.new_track("Timer interrupts");
    cve2_software_irq_track = cve2_interrupts_scope.new_track("Software interrupts");
    cve2_external_irq_track = cve2_interrupts_scope.new_track("External interrupts");
    cve2_nm_irq_track       = cve2_interrupts_scope.new_track("Non-maskable interrupts (NMIs)");
    foreach (cve2_fast_irq_tracks[i]) begin
      cve2_fast_irq_tracks[i] = cve2_interrupts_scope.new_track($sformatf("Fast interrupt %1d", i));
    end

    cve2_instr_req_track = cve2_if_scope.new_track("Instruction requests");
    cve2_instr_rsp_track = cve2_if_scope.new_track("Instruction responses");

    cve2_data_req_track = cve2_lsu_scope.new_track("Data requests");
    cve2_data_rsp_track = cve2_lsu_scope.new_track("Data responses");

    foreach (cve2_regfile_tracks[i]) begin
      cve2_regfile_tracks[i] = cve2_registers_scope.new_track($sformatf("X%1d", i));
    end

  end

  final begin
    sim_track.instant_evt("end");
    cspect_ctx.finish();
  end

  ////////////////////////////////
  // CirscumSpect logging logic //
  ////////////////////////////////

  always @(posedge clk_i) begin

    if (~rst_ni) begin

      inst_req_in_flight_q <= '0;
      data_req_in_flight_q <= '0;

    end else begin

      automatic string msg;
      automatic req_in_flight_t inst_req_in_flight_d;
      automatic req_in_flight_t data_req_in_flight_d;

      // Helper variables initialization
      inst_req_in_flight_d = inst_req_in_flight_q;
      data_req_in_flight_d = data_req_in_flight_q;

      // Privilege mode
      msg = croc_if.cve2_dbg_mode ? "D" : cve2_priv_lvl_to_string(croc_if.cve2_priv_mode);
      cve2_mode_track.slice_set(msg, .compress(1));

      // Debug requests
      if (croc_if.cve2_dbg_req) cve2_dbg_req_track.instant_evt("Req");

      // Exceptions
      if (cve2_exception) begin
        msg = $sformatf(
          "cause: %s pc: $a2l:0x%0h insn: $da-rv64:0x%0h",
          cve2_exception_to_string(croc_if.cve2_exc_cause),
          croc_if.cve2_pc,
          croc_if.cve2_exc_instr
        );
        cve2_exception_track.instant_evt(msg);
      end

      // Fetch enable
      if (fetch_en_asserted) begin
        cve2_fetch_en_track.slice_set("Enabled", .compress(1));
      end else if (fetch_en_deasserted) begin
        cve2_fetch_en_track.slice_end();
      end

      // CVE2 state
      msg = cve2_state_to_string(croc_if.cve2_ctrl_state);
      cve2_state_track.slice_set(msg, .compress(1));

      // CVE2 interrupts
      if (cve2_timer_irq_asserted) begin
        cve2_timer_irq_track.slice_set("Timer interrupt", .compress(1));
      end else if (cve2_timer_irq_deasserted) begin
        cve2_timer_irq_track.slice_end();
      end
      if (cve2_software_irq_asserted) begin
        cve2_software_irq_track.slice_set("Software interrupt", .compress(1));
      end else if (cve2_software_irq_deasserted) begin
        cve2_software_irq_track.slice_end();
      end
      if (cve2_external_irq_asserted) begin
        cve2_external_irq_track.slice_set("External interrupt", .compress(1));
      end else if (cve2_external_irq_deasserted) begin
        cve2_external_irq_track.slice_end();
      end
      if (cve2_nm_irq_asserted) begin
        cve2_nm_irq_track.slice_set("NMI set", .compress(1));
      end else if (cve2_nm_irq_deasserted) begin
        cve2_nm_irq_track.slice_end();
      end
      foreach (cve2_fast_irq_tracks[i]) begin
        if (cve2_fast_irq_asserted[i]) begin
          cve2_fast_irq_tracks[i].slice_set($sformatf("Fast interrupt %d", i));
        end else if (cve2_fast_irq_deasserted[i]) begin
          cve2_fast_irq_tracks[i].slice_end();
        end
      end

      // CVE2 instruction response
      if (croc_if.cve2_inst_valid) begin
        if (~inst_req_in_flight_q.valid) $error("Instruction response without valid in-flight transaction");
        msg = $sformatf("Data: 0x%08X", croc_if.cve2_inst_data);
        inst_req_in_flight_d.valid = 1'b0;
        cve2_instr_rsp_track.slice_set(msg, .flows({inst_req_in_flight_q.flow}));
      end else begin
        cve2_instr_rsp_track.slice_end();
      end

      // CVW2 instruction request
      if (croc_if.cve2_inst_req && croc_if.cve2_inst_gnt) begin
        automatic uuid_t flow = cve2_if_scope.new_uuid();
        msg = $sformatf("PC: 0x%08X", croc_if.cve2_inst_addr);
        if (inst_req_in_flight_d.valid) $error("Multiple instruction requests in-flight");
        cve2_instr_req_track.slice_set(msg, .flows({flow}));
        inst_req_in_flight_d.valid = 1'b1;
        inst_req_in_flight_d.flow = flow;
      end else begin
        cve2_instr_req_track.slice_end();
      end

      // CVE2 data response
      if (croc_if.cve2_data_valid) begin
        if (~data_req_in_flight_q.valid) $error("Data response without valid in-flight transaction");
        data_req_in_flight_d.valid = 1'b0;
        if (data_req_in_flight_q.we) begin
          cve2_data_rsp_track.slice_set("Write ACK", .flows({data_req_in_flight_q.flow}));
        end else begin
          msg = $sformatf("Rdata: 0x%08X", croc_if.cve2_data_rdata);
          cve2_data_rsp_track.slice_set(msg, .flows({data_req_in_flight_q.flow}));
        end
      end else begin
        cve2_data_rsp_track.slice_end();
      end

      // CVE2 data request
      if (croc_if.cve2_data_req && croc_if.cve2_data_gnt) begin
        automatic uuid_t flow = cve2_lsu_scope.new_uuid();
        msg = $sformatf("%s @0x%08X", croc_if.cve2_data_we ? "Write" : "Read", croc_if.cve2_data_addr);
        if (data_req_in_flight_d.valid) $error("Multiple data requests in-flight");
        cve2_data_req_track.slice_set(msg, .flows({flow}));
        data_req_in_flight_d.valid = 1'b1;
        data_req_in_flight_d.we = croc_if.cve2_data_we;
        data_req_in_flight_d.flow = flow;
      end else begin
        cve2_data_req_track.slice_end();
      end

      // CVE2 registers
      for (int i = 0; i < 32; ++i) begin
        cve2_regfile_tracks[i].slice_set($sformatf("0x%08X", croc_if.cve2_regs[i]), .compress(1));
      end

      // Helper variables update
      inst_req_in_flight_q <= inst_req_in_flight_d;
      data_req_in_flight_q <= data_req_in_flight_d;

    end

  end

endmodule
