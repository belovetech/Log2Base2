#include <stdio.h>
#include <string.h>

/**
 * isPalindrome - Check is a string is a palindrome
 *
 * @str: String to check
 * @start: start index of the string
 * @end: end index of the string
 * Return: 1 if it's a palindrome otherwise 0
 */
int isPalindrome(char str[], int start, int end)
{
    if (start >= end)
        return 1;

    if (str[start] == str[end])
        isPalindrome(str, start+1, end-1);
    else
        return 0;
}

/**
 * isPalindrome2 - Check is a string is a palindrome
 *
 * @str: String to check
 * @start: start index of the string
 * @end: end index of the string
 * Return: 1 if it's a palindrome otherwise 0
 */
int isPalindrome2(char str[], int start, int end)
{
    while (start <= end)
    {
        if (str[start] != str[end])
            return 0;
        else
            start++;
            end--;
    }
    return 1;
}


int main(int ac, char **av)
{
    if (ac > 1)
    {
        int res = isPalindrome2(av[1], 0, strlen(av[1])-1);

        if (res == 1)
            printf("%s => is a palindrome\n", av[1]);
        else
            printf("%s => is not a palindrome\n", av[1]);
    }

    return (0);
}
