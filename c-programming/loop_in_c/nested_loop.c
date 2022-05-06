#include<stdio.h> 
/**
 * main -  prints N X N empty box.
 * 
 * Return: 0 always (success)
 */

int main(void)
{
    int count, i, j;

    printf("Enter positive integers: ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= count; j++)
        {
            if ((i > 1 && j > 1) && (i != count && j != count))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return (0);
}