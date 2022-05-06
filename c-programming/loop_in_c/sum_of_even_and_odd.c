#include<stdio.h> 
/**
 * main -  prints the sum of odd and even numbers separately.
 * 
 * Return: 0 always (success)
 */

int main(void)
{
    int n, l, evenSum = 0, oddSum = 0;

    printf("Enter positive integers: ");
    scanf("%d", &n);
    
    while (n >= 1)
    {
        l = n % 10;
        if (l % 2 == 0)
                evenSum += l;
            else
                oddSum += l;
        n = n / 10;
    }
        printf("Odd Digit Sum = %d\n", oddSum);
        printf("Even Digit Sum = %d\n", evenSum);
        return 0; 
}