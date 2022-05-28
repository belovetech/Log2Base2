#include<stdio.h>

/**
 * main - prints diagonal pattern
 *
 *  Return: 0 always (success)
 */
int main(void)
{
    int n, i, j;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    //Write your Code here
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || i+j == n+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }


    return 0;
}