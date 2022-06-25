#include <stdio.h>

/***
 * main - Finds equal or not using bitwise XOR operator
 *
 * Return: prints Equal otherwise Unequal
 */

int main(void)
{
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d%d", &num1, &num2);

    if ((num1 ^ num2) == 0)
        printf("Equal\n");
    else
        printf("Unequal\n");

    return (0);
}