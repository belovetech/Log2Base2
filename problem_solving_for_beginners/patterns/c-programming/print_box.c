#include<stdio.h>

/**
 * main - prints n x n box pattern
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
            printf("* ");

        printf("\n");
    }
    
    return 0;
}