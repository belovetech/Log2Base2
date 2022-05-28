#include<stdio.h>
/**
 * fibonacci - finds a fibonnaci of any given number
 *
 * @num: number to find its fibonnaci
 */
void fibonnaci(int num)
{
    int a, b, c, i;

    a = 0;
    b = 1;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d ", a);
        else if (i == 1)
            printf("%d ", b);
        else
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    fibonnaci(n);
    putchar(10);

    return 0;
}