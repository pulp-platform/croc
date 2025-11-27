#include "uart.h"
#include "print.h"
#include "obi_timer.h"
#include "util.h"

int timer_count = 0;

void obi_timer_handler () {
    printf("Timer\n");
    obi_timer_set(1000);
    timer_count += 1;
}

int main() {
    uart_init(); // setup the uart peripheral

    // using the timer
    obi_timer_set(1000);

    // Enable timer interrupt
    set_interrupt_enable(1, IRQ_OBI_TIMER);
    set_global_irq_enable(1);

    while(timer_count < 10) wfi();

    obi_timer_disable();

    // wait until uart has finished sending
    uart_write_flush();

    return 1;
}
