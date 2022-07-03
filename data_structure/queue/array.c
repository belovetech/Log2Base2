#include <stdio.h>

#define SIZE 5
int queue[SIZE];
int front = 0;
int rear = 0;
/**
 * is_empty - Checks if stack is empty
 *
 * Return: 1 if it's empty otherwise 0
 */
int is_empty()
{
    if (rear == 0)
        return (1);
    return (0);
}

/**
 * is_full - Checks if stack is full
 *
 * Return: 1 if it's full otherwise 0
 */

int is_full()
{
    if (rear == SIZE)
        return (1);
    return (0);
}


/**
 * enqueue - Adds element to the queue
 * @val: Value to add to queue
 */

void enqueue(int val)
{
    if (is_full())
        printf("Queue Overflow\n");
    else
    {
        queue[rear] = val;
        rear++;
    }
}

/**
 * dequeue - Removes element from the queue
 * @val: Value to add to queue
 */
int dequeue()
{
    if (is_empty())
    {
        printf("Queue is empty: ");
        return -1;
    }
    else
    {
        rear--;
        return (queue[front++]);
    }
}

/**
 * main -  Enqueue and Dequeue some element from the queue
 *
 * Return: 0 always (success)
 */
int main(void)
{
    enqueue(10);
    enqueue(20);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    return (0);
}