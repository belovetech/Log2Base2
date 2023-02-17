#include <stdio.h>

/**
 * fib - fibonacci series
 * @num: positive integer
 *
 * Return: fibonacci of nth term
 */
int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n-2) + fib(n-1);
}


int main(void)
{
    int num = 8;

    printf("%d\n", fib(num));

    return (0);
}
