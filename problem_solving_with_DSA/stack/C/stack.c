#include "stack.h"

#define SIZE 100

char stack[SIZE];
int top = -1;

/**
 * push - push adata into stack 
 * 
 *  @c: The value 
 */
void push(char c)
{
    if (top == SIZE-1)
        return;
    stack[++top] = c;
}

/**
 * pop - remove the topmost data in the stack 
 * 
 * Return: The topmost data in the stack 
 */
char pop()
{
    if (top == -1)
        return -1;
    return stack[top--];
}

/**
 * isStackEmpty - Check if stack is empty or not
 * 
 * Return - 1 if empty otherwise 0 
 */
int isStackEmpty()
{
    if (top == -1)
        return (1);
    return (0);
}

/**
 * isStackFull - Check if stack is full or not
 * 
 * Return - 1 if full otherwise 0 
 */
int isStackFull()
{
    if (top == SIZE-1)
        return (1);
    return (0);
}

