#include<stdio.h>
/**
 * main - sum of natural number O(N)
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int N, sum;
    printf("Enter a number: ");
    scanf("%d", &N);

    //Write your code here
    int i;
    sum = 0;
    
    if (N  <= 0)
        return (N);

    for (i = 1; i <= N; i++)
        sum += i;
    
    printf("%d", sum);
    return 0;
}