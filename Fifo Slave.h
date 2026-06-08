#ifndef FIFO_SLAVE_H
#define FIFO_SLAVE_H
#define FIFO_SIZE 10
typedef struct
{
    int buffer[FIFO_SIZE];
    int front;
    int rear;
    int count;
}FIFO;
void fifo_init(FIFO *f);
void enqueue(FIFO *f,int data);
int dequeue(FIFO *f);
#endif
