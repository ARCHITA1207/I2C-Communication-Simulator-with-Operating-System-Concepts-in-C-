#include<stdio.h>
#include "../include/fifo_slave.h"
void fifo_init(FIFO *f)
{
    f->front=0;
    f->rear=-1;
    f->count=0;
}
void enqueue(FIFO *f,int data)
{
    if(f->count==FIFO_SIZE)
    {
        printf("FIFO FULL\n");
        return;
    }
    f->rear=(f->rear+1)%FIFO_SIZE;
    f->buffer[f->rear]=data;
    f->count++;
}
int dequeue(FIFO *f)
{
    if(f->count==0)
    {
        printf("FIFO EMPTY\n");
        return -1;
    }
    int value=f->buffer[f->front];
    f->front=(f->front+1)%FIFO_SIZE;
    f->count--;
    return value;
}
