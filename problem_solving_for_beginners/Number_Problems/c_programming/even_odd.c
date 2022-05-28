#include<stdio.h>
/**
 * main - checks if num is even or odd number
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int num;
    printf("Enter a number: ")
    scanf("%d", &num);

    //Write your code here
    if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    
    return 0;
}