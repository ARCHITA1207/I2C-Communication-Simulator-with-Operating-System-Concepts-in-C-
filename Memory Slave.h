#ifndef MEMORY_SLAVE_H
#define MEMORY_SLAVE_H
#define MEM_SIZE 256
typedef struct
{
    unsigned char memory[MEM_SIZE];
}MemorySlave;
void memory_write(MemorySlave *m, int addr, unsigned char data);
unsigned char memory_read(MemorySlave *m, int addr);
#endif
