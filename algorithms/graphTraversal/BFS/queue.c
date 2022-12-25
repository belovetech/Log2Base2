#include "queue.h"

#define SIZE 25

int queue[SIZE];
int front = 0;
int rear = 0;


int isQueueEmpty()
{
    if (front == rear)
        return (1);
    return (0);
}

int isQueueFull()
{
    if (rear == SIZE)
        return (1);
    return (0);
}

void enqueue(int value)
{
    if (rear == SIZE)
        return;
    
    queue[rear++] = value;
}

int dequeue()
{
    if( front == rear)
        return -1;

    return queue[front++];
}


/*
int main()
{
    printf("%d\n", isQueueEmpty());
    printf("%d\n", isQueueFull());
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());

    
    return (0);
}*/
