#include<stdio.h> 
/**
 * main -  prints the sum of all the digits.
 * 
 * Return: 0 always (success)
 */

int main(void)
{

    int num, n, sum = 0;
   
    printf("Enter positive integers: ");
    scanf("%d", &num);
   
    n = num;
    while (n >= 1)
    {
        sum  += n % 10;
        n = n / 10;
    }
    printf("The sum of %d is %d\n", num, sum);

    return 0; 
}