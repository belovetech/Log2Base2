#include<stdio.h>

int add(int a, int b);
/**
 * main - read and prints element of arr using pointer
 *
 * Return: 0 always (success)
 */

int main(void)
{
     // Declare function pointer
    int (*fptr)(int, int);

    // Assign value to function pointer
    fptr = add;

    // Invoke function pointer
    int sum = (*fptr)(2, 4);
    
    printf("%d\n", sum);

   return (0);
}


/**
 * add - add two integers
 * @a: first operand
 * @b: second operand
 * Return: 
 */

int add(int a, int b)
{
    return (a+b);
}