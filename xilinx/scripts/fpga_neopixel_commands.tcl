# this are commands for the neopixel fpga programming

openocd -f xilinx/scripts/openocd.genesys2.tcl 
riscv-1.0 riscv32-unknown-elf-gdb -ex "target extended-remote localhost:3333"

set *0x20001040=8
set *0x20001060=16
set *0x20001080=9
set *0x200010a0=8
set *0x200010c0=17
set *0x200010e0=1000
set *0x20001100=0xFFFFFF

set *0x20001040=64

# set *0x20001060=4
# set *0x20001080=16
# set *0x200010a0=9
# set *0x200010c0=8
# set *0x200010e0=17
# set *0x20001100=1000
# set *0x20001100=10000000

set *0x20001180=1
set *0x20001200=0x64ff00
set *0x20001180=0

set *0x20001180=1
set *0x20001200=0xff32ff
set *0x20001180=0

# dog part 1
set *0x10000374=0xff32ff
set *0x10000378=0xff32ff
set *0x1000037c=0xff32ff
set *0x10000380=0xff32ff
set *0x10000384=0x64ff00
set *0x10000388=0xff32ff
set *0x1000038c=0xff32ff
set *0x10000390=0xff32ff

set *0x10000394=0xff32ff
set *0x10000398=0xff32ff
set *0x1000039c=0xff32ff
set *0x100003a0=0xff32ff
set *0x100003a4=0x64ff00
set *0x100003a8=0xff32ff
set *0x100003ac=0xff32ff
set *0x100003b0=0xff32ff

set *0x100003b4=0xff32ff
set *0x100003b8=0xff32ff
set *0x100003bc=0xff32ff
set *0x100003c0=0xff32ff
set *0x100003c4=0x64ff00
set *0x100003c8=0x64ff00
set *0x100003cc=0xff32ff
set *0x100003d0=0xff32ff

set *0x100003d4=0x64ff00
set *0x100003d8=0xff32ff
set *0x100003dc=0xff32ff
set *0x100003e0=0xff32ff
set *0x100003e4=0x64ff00
set *0x100003e8=0xff32ff
set *0x100003ec=0x64ff00
set *0x100003f0=0x64ff00

set *0x100003f4=0x64ff00
set *0x100003f8=0xff32ff
set *0x100003fc=0xff32ff
set *0x10000400=0xff32ff
set *0x10000404=0x64ff00
set *0x10000408=0x64ff00
set *0x1000040c=0x64ff00
set *0x10000410=0x64ff00

set *0x10000414=0xff32ff
set *0x10000418=0x64ff00
set *0x1000041c=0x64ff00
set *0x10000420=0x64ff00
set *0x10000424=0x64ff00
set *0x10000428=0x64ff00
set *0x1000042c=0xff32ff
set *0x10000430=0xff32ff

set *0x10000434=0xff32ff
set *0x10000438=0x64ff00
set *0x1000043c=0x64ff00
set *0x10000440=0x64ff00
set *0x10000444=0x64ff00
set *0x10000448=0x64ff00
set *0x1000044c=0xff32ff
set *0x10000450=0xff32ff

set *0x10000454=0x64ff00
set *0x10000458=0xff32ff
set *0x1000045c=0x64ff00
set *0x10000460=0xff32ff
set *0x10000464=0x64ff00
set *0x10000468=0xff32ff
set *0x1000046c=0x64ff00
set *0x10000470=0xff32ff

# dog part 2
set *0x10000374=0xff32ff
set *0x10000378=0xff32ff
set *0x1000037c=0xff32ff
set *0x10000380=0x64ff00
set *0x10000384=0x64ff00
set *0x10000388=0xff32ff
set *0x1000038c=0xff32ff
set *0x10000390=0xff32ff

set *0x10000394=0xff32ff
set *0x10000398=0xff32ff
set *0x1000039c=0xff32ff
set *0x100003a0=0xff32ff
set *0x100003a4=0x64ff00
set *0x100003a8=0x64ff00
set *0x100003ac=0xff32ff
set *0x100003b0=0xff32ff

set *0x100003b4=0xff32ff
set *0x100003b8=0xff32ff
set *0x100003bc=0xff32ff
set *0x100003c0=0xff32ff
set *0x100003c4=0x64ff00
set *0x100003c8=0xff32ff
set *0x100003cc=0x64ff00
set *0x100003d0=0x64ff00

set *0x100003d4=0xff32ff
set *0x100003d8=0x64ff00
set *0x100003dc=0xff32ff
set *0x100003e0=0xff32ff
set *0x100003e4=0x64ff00
set *0x100003e8=0x64ff00
set *0x100003ec=0x64ff00
set *0x100003f0=0x64ff00

set *0x100003f4=0xff32ff
set *0x100003f8=0x64ff00
set *0x100003fc=0xff32ff
set *0x10000400=0xff32ff
set *0x10000404=0x64ff00
set *0x10000408=0x64ff00
set *0x1000040c=0xff32ff
set *0x10000410=0xff32ff

set *0x10000414=0xff32ff
set *0x10000418=0x64ff00
set *0x1000041c=0x64ff00
set *0x10000420=0x64ff00
set *0x10000424=0x64ff00
set *0x10000428=0x64ff00
set *0x1000042c=0xff32ff
set *0x10000430=0xff32ff

set *0x10000434=0xff32ff
set *0x10000438=0x64ff00
set *0x1000043c=0x64ff00
set *0x10000440=0x64ff00
set *0x10000444=0x64ff00
set *0x10000448=0x64ff00
set *0x1000044c=0xff32ff
set *0x10000450=0xff32ff

set *0x10000454=0x64ff00
set *0x10000458=0xff32ff
set *0x1000045c=0x64ff00
set *0x10000460=0xff32ff
set *0x10000464=0x64ff00
set *0x10000468=0xff32ff
set *0x1000046c=0x64ff00
set *0x10000470=0xff32ff


set *0x20001040=64

set *0x20001180=2
set *0x20001120=0x10000374
set *0x20001140=384
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001180=2
set *0x20001120=0x10000374
set *0x20001140=764
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
 
32'h0DAD_1234, 32'hCAFE_FADE, 32'h5555_ACED, 32'hFFFF_7871, 32'h8888_1111, 32'h8888_EDEF
parameter logic [BlockAwNeopixel - 1:0] NUM_NEOPIXEL_OFFSET     = 11'h 60;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T1H_OFFSET      = 11'h 80;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T1L_OFFSET      = 11'h A0;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T0H_OFFSET      = 11'h C0;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T0L_OFFSET      = 11'h E0;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T_LATCH_OFFSET  = 11'h 100;
parameter logic [BlockAwNeopixel - 1:0] DMA_SRC_ADDR_OFFSET      = 11'h 120;
parameter logic [BlockAwNeopixel - 1:0] DMA_NUM_BYTES_OFFSET     = 11'h 140;
parameter logic [BlockAwNeopixel - 1:0] DMA_VALID_OFFSET         = 11'h 160;
parameter logic [BlockAwNeopixel - 1:0] FIFO_ACCESS_OFFSET      = 11'h 180;

SramBaseAddr      = 32'h1000_0000;
foreach (neopixel_dma_data[i])begin
            jtag_write_reg32(croc_pkg::SramBaseAddr + (i) * 4 + 884, neopixel_dma_data[i], 1, 5);
end
    $display("@%t | [JTAG] FINISHED: Writing data1 to SRAM for neopixel_dma", $time);
    $display("@%t | [JTAG] START: Writing to Register for neopixel_dma", $time);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::FIFO_ACCESS_OFFSET, 2'b10);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_SRC_ADDR_OFFSET, croc_pkg::SramBaseAddr + 884);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_NUM_BYTES_OFFSET, 4*4);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_VALID_OFFSET, 1'b1, 0, 0);