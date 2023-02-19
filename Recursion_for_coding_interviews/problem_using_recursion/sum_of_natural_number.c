#include <stdio.h>

int sum(int n)
{
    if (n <= 1)
        return 1;
    return n + sum(n-1);
}

int main(void)
{
    int num;
    scanf("%d", &num);

    printf("%d\n", sum(num));
    return (0);
}
