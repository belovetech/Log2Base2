#include <stdio.h>
#include <math.h>

int isperfect(int num)
{
    int  i, tmp, sqr, res = 1;
     sqr = sqrt(num);
    for (i = 2; i <= sqr; i++)
    {
        if (num % i == 0)
        {
            tmp = num / i;
            res = res + i + tmp;
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