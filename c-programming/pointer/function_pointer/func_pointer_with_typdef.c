#include<stdio.h>

/* Function pointer */
typedef int (*FP)(int, int);

/**
 * subtract - subtract integers
 * @a: first operand
 * @b: second operand
 * Return: answer
 */

int subtract(int a, int b)
{
    return (a-b);
}

/**
 * main - read and prints element of arr using pointer
 *
 * Return: 0 always (success)
 */

int main(void)
{
     // Declare function pointer
    FP fptr;
    int ans;

    // Assign value to function pointer
    fptr = subtract;

    // Invoke value to function pointer
    ans = (*fptr)(2, 4);
    printf("%d\n", ans);

    ans = (*fptr)(50, 4);
    printf("%d\n", ans);
    
    // Print the address of subtract function
    printf("%p\n", fptr);
   return (0);
}

