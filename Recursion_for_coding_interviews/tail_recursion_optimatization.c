#include <stdio.h>

/**
 * factorial - Factorial of a number O(N) space complexity
 *
 * @num: Number to fins its factorial
 * Return: the factorial
 */
int factorial(int num)
{
    if (num <= 1)
        return 1;
    return num * factorial(num-1);
}

/**
 * fact - Factorial of a number (Tail optimazation version) O(1) space complexity
 * @num: Number to fins its factorial
 * Return: the factorial
 *
 * 5
 * fact(5, 1)  -> 4, 5
 * fact(4, 5)  -> 3, 20
 * fact(3, 20) -> 2, 60
 * fact(2, 60) -> 1, 120
 * fact(1, 120) -> 0, 120
 */
int fact(int num, int ans)
{
    if (num == 0)
        return ans;
    return fact(num-1, num*ans);
}


int main(void)
{
    int num = 5;

    printf("%d\n", factorial(num));
    printf("%d\n", fact(num, 1));

    return (0);
}
