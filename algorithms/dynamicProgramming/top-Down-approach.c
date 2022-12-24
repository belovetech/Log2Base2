#include <stdio.h>

/**
 * init - Initialize results to -1 
 * 
 * @arr: Array to initialiaze
 * @size: S tize of array to initialiaze
 */
void init(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = -1;
}

/**
 * fibonacci - nth fibonacci using Bottom-Up approach 
 * 
 * @res: Array used for memoization
 * @N: Nth of fibonacci
 * Return: The result of nth fibonacci
 */
int fibonacci(int res[], int N)
{
    if (res[N] == -1)
    {
        if (N <= 1)
            res[N] = N;
        else
            res[N] = fibonacci(res, N-2) + fibonacci(res, N-1);
    }
    return res[N];
}


int main(void)
{
    int n;    
    printf("Enter number of fibonacci\n");
    scanf("%d", &n);
    
    n = n + 1;  // Increase the value of n by 1
    int results[n];
    init(results, n);
    
    if (n <= 1)
        printf("Fib[%d] = %d\n", n, n);
    else
        n -= 1; // Decrease the value of n by 1
        printf("Fib[%d] = %d\n", n, fibonacci(results, n));

    return (0);
}