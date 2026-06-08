#include<stdio.h>
#include "../include/i2c_master.h"
void start_condition(void)
{
    printf("\n[I2C START]\n");
}
void stop_condition(void)
{
    printf("[I2C STOP]\n");
}
void send_ack(void)
{
    printf("ACK\n");
}
void send_nack(void)
{
    printf("NACK\n");
}
