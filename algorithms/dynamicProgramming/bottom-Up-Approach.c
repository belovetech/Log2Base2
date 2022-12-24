#include <stdio.h>

/**
 * fibonacci - nth fibonacci using Bottom-Up approach
 * 
 * @N: Nth of fibonacci
 * Return: the result
 */
int fibonacci(int N)
{
    int fib[N];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= N; i++)
        fib[i] = fib[i - 2] + fib[i - 1];

    return fib[N];
}

int main(void)
{
    int n;
    
    printf("Enter number of fibonacci\n");
    scanf("%d", &n);

    if (n <= 1)
        printf("Fib[%d] = %d\n", n, n);
    else
        printf("Fib[%d] = %d\n", n, fibonacci(n));

    return (0);
}