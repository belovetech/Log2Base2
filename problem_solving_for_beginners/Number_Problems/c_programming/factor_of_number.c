#include<stdio.h>
/**
 * main - finds a factor of a number
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int N,X;
    printf("Enter a number: ");
    printf("Enter a divisor: ");
    scanf("%d%d", &N, &X);

    //Write your code here
    if (N % X == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}