#include<stdio.h>
#include "../include/i2c_bus.h"
void bus_init(I2CBus *bus)
{
    bus->scl=1;
    bus->sda=1;
    bus->count=0;
}
void register_device(I2CBus *bus,int address,void *device)
{
    bus->devices[bus->count].address=address;
    bus->devices[bus->count].device=device;
    bus->count++;
    printf("Registered Device : 0x%X\n",address);
}
