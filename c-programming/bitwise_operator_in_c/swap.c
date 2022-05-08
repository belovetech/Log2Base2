#include<stdio.h>
/**
 * main - swap two integer
 * Return: 0 always (success)
 */

int main(void)
{
   int a, b, tmp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap a = %d b = %d\n", a, b);
    tmp = a ^ b;
    a = tmp ^ a;
    b = tmp ^ b;
    printf("After  swap a = %d b = %d\n", a, b);

    return 0;
}