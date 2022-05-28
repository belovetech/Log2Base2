#include<stdio.h>
/**
 * isprime - checks for a prime number
 * 
 * @num: number to check
 * 
 * Return: 0 (prime), 1 (Not Prime)
 */
int isprime(int num)
{
    int i, flag;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    return (flag);
}

/**
 * print_prime - prints prime number if flag is 0 Else  Not prime number
 * @flag: number flag
 */
void print_prime(int flag)
{
    if (flag == 0)
        printf("Prime number\n");
    else
        printf("Not a Prime number\n");
}
/**
 * main - finds a factor of a number
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int num, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    flag = isprime(num);
    print_prime(flag);

    return 0;
}