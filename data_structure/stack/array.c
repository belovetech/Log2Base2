#include <stdio.h>

#define size 3
int stack[size];
int top = -1;

/**
 * is_empty - Checks if stack is empty
 *
 * Return: 1 if it's empty otherwise 0
 */

int is_empty()
{
    if (top == -1)
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
    if (top == size - 1)
        return (1);
    return (0);
}

/**
 * push - Pushes element into the stack
 * @val: Value to push
 */

int push(int val)
{
    if (is_full())
    {
        printf("Stack Overflow\n");
        return (-1);
    }
    else
    {
        ++top;
        stack[top] = val;
    }
}

/**
 * pop - Removes element from the stack
 *
 * Return: -1 if list is empty otherwise the popped element
 */
int pop()
{
    int pop_data;

    if (is_empty())
    {
        printf("Stack Underflow\n");
        return (-1);
    }
    else
    {
        pop_data = stack[top--];
        printf("%d ", pop_data);
        return pop_data;
    }
}

/**
 * print_stack - Prints elements of the stack
 * @val: Value to push
 */
void print_stack()
{
    int i;
    if (is_empty())
    {
        printf("Stack is Empty\n");
        return;
    }
    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);
}
/**
 * main -  Pushes and Pop some element from the stack
 *
 * Return: 0 always (success)
 */

int main(void)
{
    push(10);
    push(20);
    push(30);
    print_stack();
    pop();
    pop();
    pop();
    // print_stack();


    printf("\n");
    return (0);
}