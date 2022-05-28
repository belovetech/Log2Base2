#include<stdio.h>
/**
 * cube - finds a cube of a number
 *
 * @num: number to find its cube
 */

int cube(int num)
{
    return (num * num * num);
}

/**
 * armstrong_number - checks if a number is armstrong number or not
 * An Armstrong number is a number that is the sum of its own digits
 * each raised to the power of the number of digits.
 * @num: The number to check
 */

void armstrong_number(int num)
{
    int mod, sum = 0, tmp;

    tmp = num;
    while (num >= 1)
    {
        mod = num % 10;
        sum = sum + cube(mod);
        // sum = sum + (mod * mod * mod);
        num = num / 10;
    }

    printf("%d %d\n", sum, tmp);
    if (sum == tmp)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
}

/**
 * main - Entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    armstrong_number(num);
    return (0);
}