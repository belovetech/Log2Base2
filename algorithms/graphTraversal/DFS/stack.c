#include "stack.h"

#define SIZE 5 // Define the size of stack

// Declare stack and top index
int stack[SIZE];
int top = -1;

/**
 * isStackEmpty - Check if stack is empty
 * 
 * Return: (1) if stack is empty otherwise (0) 
 */
int isStackEmpty()
{
    if (top == -1)
        return (1);
    return (0);
}

/**
 * isStackFull - Check if stack is full 
 * 
 * Return: (1) if stack is empty otherwise (0)
 */
int isStackFull()
{
    if (top == SIZE-1)
        return (1);
    return (0);
}

/**
 * push - Insert data into stack
 * 
 * @value: Data to push into stack
 */
void push(int value)
{
    if (isStackFull())
        return;
    stack[++top] = value;
}

/**
 * pop - Remove data from the stack 
 * 
 * Return: The data 
 */
int pop()
{
    if (isStackEmpty())
        return (-1);
    return stack[top--];
}

/*
int main(void)
{
    
    printf("%d\n", isStackEmpty());
    printf("%d\n", isStackFull());   
    
    push(5);
    push(10);
    push(15); 
    
    
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return (0);
}*/


