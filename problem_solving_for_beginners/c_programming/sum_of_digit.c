#include<stdio.h>
/**
 * main - sum of digit
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int num, sum, res;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    //Write your code here
    while (num >= 1)
    {
      res = num % 10;
      sum += res;
      num = num / 10;
    }
    
    printf("%d", sum);
    return 0;
}