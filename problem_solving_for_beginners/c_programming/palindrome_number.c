#include<stdio.h>
/**
 * palindrome_number - checks wheather a number is a palindrom or not
 * @num: number to check
 */

void palindrome_number(int num)
{
    int tmp, mod, ans = 0;

    tmp = num;
    while (num >= 1)
    {
        mod = num % 10;
        ans = ans * 10 + mod;
        num = num / 10;
    }
    
    if (tmp == ans)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

/**
 * main - Entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    palindrome(num);
    return 0;
}