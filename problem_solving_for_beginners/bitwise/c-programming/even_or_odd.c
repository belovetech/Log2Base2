#include<stdio.h>

/**
 * isEven - Checks if Even or  using Bitwise AND
 * @num: number to check
 * Return: prints Even otherwise Odd
 */

void isEven(int num)
{
    if ((num & 1) == 0)
	    printf("Even\n");
	else
	    printf("Odd\n");
}

/**
 * isEven2 - Checks if Even or  using Bitwise OR
 * @num: number to check
 * Return: prints Even otherwise Odd
 */

void isEven2(int num)
{
    if ((num | 1) == num)
	    printf("Odd\n");
	else
	    printf("Even\n");
}

/**
 * isEven - Checks if Even or  using Bitwise XOR
 * @num: number to check
 * Return: prints Even otherwise Odd
 */
void isEven3(int num)
{
    if ((num ^ 1) == (num + 1))
	    printf("Even\n");
	else
	    printf("Odd\n");
}

/***
 * main - Entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int num;

    printf("Enter a number: ");
	scanf("%d", &num);

    isEven(num);
    isEven2(num);
    isEven3(num);

	return 0;
}