#include<stdio.h>

/***
 * main - Swap two integers using bitwise XOR operator
 *
 * Return: prints Equal otherwise Unequal
 */

int main(void)
{
	int a, b, tmp;

    printf("Enter two positive integers: ");
	scanf("%d%d", &a, &b);

	printf("Before.... %d %d\n", a, b);

	tmp = a ^ b;
	b = tmp ^ b;
	a = tmp ^ a;

	printf("After..... %d %d\n", a, b);

	return 0;
}