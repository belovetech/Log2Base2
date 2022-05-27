#include<stdio.h>

int main(void)
{
    int num, res;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    //Write your code here
    while (num >= 1)
    {

        res = num % 10;
        if (res == 0)
            putchar(0);
        else
            printf("%d", res);
        num = num / 10;
    }

    putchar(10);
    return 0;
}