#include<stdio.h>
/**
 * main - splits number
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num);

    //Write your code here
    while (num >= 1)
    {
        res =  num % 10;
        printf("%d\n", res);
        num = num / 10;
    }
    

    return 0;
}