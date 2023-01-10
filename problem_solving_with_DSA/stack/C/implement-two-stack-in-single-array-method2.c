#include <stdio.h>

#define SIZE 6

int stack[SIZE];
int top1    = -1; // Top of stack 1
int top2 = SIZE; // Top of stack 2

/**
 * push1 - Push data into stack 1
 * 
 * @val: Value to push to stack 
 */
void push1(int val)
{
    if (top1 == top2-1) 
        return;
    stack[++top1] = val;
}

/**
 * pop1 - Pop data from the stack 1 
 * 
 * Return - Data popped of the stack
 */
int pop1()
{
    if (top1 == -1) 
        return -1;
    return stack[top1--];
}

/**
 * push2 - Push data into stack 2
 * 
 * @val: Value to push to stack 
 */
void push2(int val)
{
    if (top2-1 == top1) 
        return;
    stack[--top2] = val;
}



/**
 * pop2 - Pop data from the stack 2
 * 
 * Return - Data popped of the stack
 */
int pop2()
{
    if (top2 == SIZE) 
        return -1;
    return stack[top2++];
}

/**
 * printstack - Print data in stack 
 * 
 * @stack: Stack 
 * @size: Size of the stack 
 */
void printstack(int *stack, int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i < size-1)
            printf("%d, ", stack[i]);
        else
            printf("%d}\n", stack[i]);
    }
}

int main (void)
{   
    push1(10);
    push1(20);
    push1(30);
    
    printf("%d\n",pop1());
    printf("%d\n",pop1());
    printf("%d\n",pop1());
    printf("%d\n",pop1());
        
    push2(40);
    push2(50);
    push2(60);
    
    printf("%d\n",pop2());
    printf("%d\n",pop2());
    printf("%d\n",pop2());
    printf("%d\n",pop2());
    printf("%d\n",pop2());
    printf("%d\n",pop2());
    
    return (0);
}