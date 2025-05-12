#include "uart.h"
#include "print.h"
#include "obi_timer.h"
#include "util.h"

#define PRINT_TIMER_IRQ

int timer_count = 0;

// default interrupt handler override
// count timer interrupts and print irq information
// note: performing slow operations such as
// printing through UART inside interrupt service
// routines is not recommended. Only use for debug
// or testing.
void croc_interrupt_handler(uint32_t cause) {
    if (cause == IRQ_OBI_TIMER) {
        obi_timer_clear_expired();
        timer_count += 1;
#ifdef PRINT_TIMER_IRQ
        printf("Timer\n");
#endif
    }
}

int main() {

    // setup the uart peripheral
    uart_init();

    // set periodic timer
    // note: give enough time for printing
    obi_timer_set(20000);

    // enable timer interrupt
    set_interrupt_enable(1, IRQ_OBI_TIMER);
    set_global_irq_enable(1);

    while (timer_count < 10) wfi();

    // disable the timer
    obi_timer_set_enable(0);

    // wait until uart has finished sending
    uart_write_flush();

    return 0;
}
