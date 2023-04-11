#include "fast_slow.h"

/**
 * digitSquareSum - calculate the square of a digit
 *
 * @num: number to calculate its square digit
 * Return: The square of the digit
 */
int digitSquareSum(int num)
{
    int sum, mod;
    sum = mod = 0;

    while (num >= 1)
    {
        mod = num % 10;
        sum += mod * mod;
        num = num / 10;
    }
    return sum;
}

/**
 * isHappyNumber - Find if a number is a happyNumber or not
 *
 * @num: The number
 * Return: (1) if it's a happy number otherwise (0)
 */
int isHappyNumber(int num)
{
    int fast, slow;
    slow = fast = num;

    do
    {
        slow = digitSquareSum(slow);
        fast = digitSquareSum(digitSquareSum(fast));
    } while (slow != fast);
    return slow == 1;
}


int main(int ac, char **av)
{
    printf("%d\n", isHappyNumber(19));
    return (0);
}
