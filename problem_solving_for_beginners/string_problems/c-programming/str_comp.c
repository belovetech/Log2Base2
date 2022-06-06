#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @str1: first string
 * @str2: seconf string
 *
 * Return: Print Yes otherwise
 */

void _strcmp(char *str1, char *str2)
{
    int idx = 0;

    while(str1[idx] != '\0' && str2[idx] != '\0' && str1[idx] == str2[idx])
    {
        idx++;
    }
    if (str1[idx] == '\0' && str2[idx] == '\0')
        printf("Yes\n");
    else
        printf("No\n");
}

int main(void)
{
    char str1[10], str2[10];
    printf("Enter two strings to compare: ");
    scanf("%s%s", str1, str2);

    //Write your code here
    _strcmp(str1, str2);

    return 0;
}