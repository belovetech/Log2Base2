#include<stdio.h>

int main()
{
    int N, sum;
    printf("Enter a number: ");
    scanf("%d", &N);

    //Write your code here
    int i;
    sum = 0;
    
    if (N  <= 0)
        return;

    for (i = 1; i <= N; i++)
        sum += i;
    
    printf("%d", sum);
    return 0;
}