#include<stdio.h>
#include "../include/i2c_bus.h"
#include "../include/i2c_master.h"
#include "../include/memory_slave.h"
#include "../include/fifo_slave.h"
#include "../include/lifo_slave.h"
#include "../include/logger.h"
#include "../include/scheduler.h"
int main()
{
    I2CBus bus;
    MemorySlave memory;
    FIFO fifo;
    LIFO lifo;
    bus_init(&bus);
    fifo_init(&fifo);
    lifo_init(&lifo);
    register_device(&bus,0x10,&memory);
    register_device(&bus,0x20,&fifo);
    register_device(&bus,0x30,&lifo);
    start_condition();
    memory_write(&memory,5,100);
    printf("Memory[5] = %d\n", memory_read(&memory,5));
    enqueue(&fifo,10);
    enqueue(&fifo,20);
    printf("FIFO Pop : %d\n",dequeue(&fifo));
    push(&lifo,100);
    push(&lifo,200);
    printf("LIFO Pop : %d\n",pop(&lifo));
    send_ack();
    scheduler_run();
    log_message("Transaction Completed");
    stop_condition();

    return 0;
}
