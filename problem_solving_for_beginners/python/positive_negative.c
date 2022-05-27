#include <stdio.h>
/**
 * main - checks for positive or negative number
 *
 * Return: 0 always (success)
 */

int main(void)
{
    int num;
    printf("Enter a number: ")
    scanf("%d", &num);

    //Write your code here
    if (num == 0)
        printf("Neither positive nor negative");
    else if (num < 0)
        printf("Negative");
    else
        printf("Positive");

    return 0;
}