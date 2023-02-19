#include <stdio.h>

/**
 * mod - Find modulo
 *
 * @num: Numerator
 * @den: Denomerator
 * Return: The modulo
 */
int mod(int num, int den)
{
    if (num < den)
        return num;
    return mod(num-den, den);
}



int main(void)
{
    int num, den;
    scanf("%d %d", &num, &den);

    printf("%d\n", mod(num, den));
    return (0);
}
