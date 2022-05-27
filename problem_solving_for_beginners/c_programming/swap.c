#include<stdio.h>
/**
 * main - swaps two integers
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int a, b;
    printf("Enter two integers (a b): ");
    scanf("%d%d", &a, &b);

    //Write your code here
    int tmp;
    
    tmp = a;
    a = b;
    b = tmp;
    
    printf("%d %d\n", a, b);
    return 0;
}