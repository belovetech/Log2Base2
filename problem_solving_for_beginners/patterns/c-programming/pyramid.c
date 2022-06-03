 #include<stdio.h>

/**
 * main - prints pyramid pattern
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
        for (j = 1; j <= i; j++)
                printf("* ");

        printf("\n");
    }


    return 0;
}