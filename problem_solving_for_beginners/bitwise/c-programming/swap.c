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

	tmp = a ^ b;
	b = tmp ^ b;
	a = tmp ^ a;

	printf("%d %d\n", a, b);

	return 0;
}