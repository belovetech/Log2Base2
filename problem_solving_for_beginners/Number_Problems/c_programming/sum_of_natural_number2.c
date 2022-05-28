#include<stdio.h>
/**
 * main - sum of natural number O(1)
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int N, sum;
    printf("Enter a number: ");
    scanf("%d", &N);

    //Write your code here
    sum = (N * (N + 1)) / 2;
    
    printf("%d", sum);
    return 0;
}