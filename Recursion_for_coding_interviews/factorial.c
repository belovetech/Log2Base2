#include <stdio.h>

/**
 * factorial - find a factorial of a number
 * @num: number to find its factorial
 * return: factorial of the number
 */

int factorial(int num)
{
    if (num <= 1)
        return (1);
    return num * factorial(num - 1);
}

/**
 * main - Entry level
 * return: 0 always (success)
 */
int main(void)
{
    int n, ans;
    
    printf("Enter a number ");
    scanf("%d", &n);
    
    if (n > 0)
    {
        ans = factorial(n);
        printf("%d\n", ans);
    }
    
    return (0);
}