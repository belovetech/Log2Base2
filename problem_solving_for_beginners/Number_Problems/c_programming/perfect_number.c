#include <stdio.h>
#include <math.h>
/**
 * isperfect - checks for a perfect number
 * 
 * @num: number to check
 * 
 * Return: 0 (prime), 1 (Not Prime)
 */
int isperfect(int num)
{
    int  i, res = 1;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
                res = res + i;
            else
                res = res + i + (num / i);
        }
    }
    return (res);
}

int main(void)
{
    int n, res;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    res = isperfect(n);
    if (res == n)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}