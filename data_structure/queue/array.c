#include <stdio.h>

#define SIZE 5
int queue[SIZE];
int front = 0;
int rear = 0;

int is_empty()
{
    if (rear == 0)
        return (1);
    return (0);
}
int is_full()
{
    if (rear == SIZE)
        return (1);
    return (0);
}

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

void dequeue()
{
    if (is_empty())
        printf("Queue is empty\n");
    else
    {
        printf("%d ", queue[front]);
        front++;
    }
}

int main(void)
{
    enqueue(10);
    enqueue(20);
    dequeue();
    dequeue();

    printf("\n");
    return (0);
}