#include<stdio.h>
/**
 * main - prints absolute number of a number
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int num;
     printf("Enter a number: ")
    scanf("%d", &num);

    //Write your code here
    if (num >= 0)
        printf("%d", num);
    else
    {
        num *= -1;
        printf("%d", num);
    }
    

    return 0;
}