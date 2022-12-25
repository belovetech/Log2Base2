#include "queue.h"

#define SIZE 25 // Define size of queue

// Declare queue array, front and rear index
int queue[SIZE];
int front = 0;
int rear = 0;

/**
 * isQueueEmpty: Check if queue is empty 
 * 
 * Return: (1) if queue is empty otherwise (0)
 */
int isQueueEmpty()
{
    if (front == rear)
        return (1);
    return (0);
}

/**
 * isQueueFull - Check if queue is full 
 * 
 * Return: (1) if queue is empty otherwise (0)
 */
int isQueueFull()
{
    if (rear == SIZE)
        return (1);
    return (0);
}

/**
 * enqueue - Insert data into queue
 * 
 * @value: Data to insert 
 */
void enqueue(int value)
{
    if (rear == SIZE)
        return;
    
    queue[rear++] = value;
}

/**
 * dequeue - Remove data from the queue
 * 
 * Return: Removed data otherwise (-1) 
 */
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
