#include<stdio.h>

/**
 * main - prints hallow pattern
 *
 *  Return: 0 always (success)
 */

int main(void)
{
    int n, i, j;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || i == 1 || j == n || i == n)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}