#include <stdio.h>

/**
 * iterative- print number up to 1 using iteration
 * @num: number to print
 */

void iterative(int num)
{
    while (num > 0)
    {
        printf("%d\n", num);
        num--;
    }
}

/**
 * recurcive- print number up to 1 using recursion
 * @num: number to print
 */
void recurcive(int num)
{
    // if (num == 0)
    if (num < 1)
        return;

    printf("%d\n", num);
    recurcive(--num);
}

/**
 * main - Entry level
 * return: 0 always (success)
 */
int main(void)
{

    iterative(5);
    printf("________________\n");
    recurcive(5);

    return (0);
}
