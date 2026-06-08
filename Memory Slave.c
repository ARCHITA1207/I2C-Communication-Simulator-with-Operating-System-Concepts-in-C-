#include<stdio.h>
#include "../include/memory_slave.h"
void memory_write(MemorySlave *m, int addr, unsigned char data)
{
    if(addr>=MEM_SIZE)
    {
        printf("Memory Overflow\n");
        return;
    }
    m->memory[addr]=data;
}
unsigned char memory_read(MemorySlave *m, int addr)
{
    if(addr>=MEM_SIZE)
    {
        printf("Invalid Address\n");
        return 0;
    }
    return m->memory[addr];
}
