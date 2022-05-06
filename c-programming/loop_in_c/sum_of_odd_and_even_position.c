#include<stdio.h> 
/**
 * main -  prints the sum of odd and even position digits.
 * (Note: Position count starts from the right side of the number)
 * 
 * Return: 0 always (success)
 */

int main(void)
{
    int n, l, count = 0, oddPostSum = 0, evenPostSum = 0;

    printf("Enter positive integers: ");
    scanf("%d", &n);
    
    while (n >= 1)
    {
        ++count;
        l = n % 10;
        if (count % 2 == 0)
                evenPostSum += l;
            else
                oddPostSum += l;
        n = n / 10;
    }
    printf ("Odd Position Sum = %d\n", oddPostSum);
    printf ("Even Position Sum = %d\n", evenPostSum);
    return 0; 
}