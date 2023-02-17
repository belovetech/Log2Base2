#include <stdio.h>

/**
 * fun - nested recursion
 * @num: positive integer
 *
 * Return: positive integer
 */
int fun(int num)
{
    if (num > 10)
        return num -1;

    return fun(fun(num + 2));
}


int main(void)
{
    int num = 6;

    printf("%d\n", fun(num));

    return (0);
}
