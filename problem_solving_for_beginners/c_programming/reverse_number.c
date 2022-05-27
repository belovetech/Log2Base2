#include<stdio.h>
/**
 * reverse_number - reverse number
 * @num: positive integer
 */
void reverse_number(int num)
{
    int mod, ans = 0;
    while (num >= 1)
    {
        mod = num % 10;    
        ans = ans * 10 + mod; 
        num = num / 10; 
    }
    printf("%d\n", ans);
}

/**
 * reverse_number2 - reverse number
 * @num: positive integer
 */
void reverse_number2(int num)
{
    int res;
    while (num >= 1)
    {

        res = num % 10;
        if (res == 0)
            putchar(0);
        else
            printf("%d", res);
        num = num / 10;
    }
}

int main(void)
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    reverse_number(num);
    reverse_number2(num);
    
    putchar(10);
    return 0;
}