#ifndef LIFO_SLAVE_H
#define LIFO_SLAVE_H
#define STACK_SIZE 10
typedef struct
{
    int stack[STACK_SIZE];
    int top;
}LIFO;
void lifo_init(LIFO *s);
void push(LIFO *s,int data);
int pop(LIFO *s);
#endif
