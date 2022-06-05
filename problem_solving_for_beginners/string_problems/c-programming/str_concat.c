#include<stdio.h>
/**
 * main - Concatenates two strings
 *
 * Return: 0 always (success)
 */
int main(void)
{
    char str1[10], str2[10], str3[20];

    printf("Enter two strings: ");
    scanf("%s%s", str1, str2);

    int i, len = 0;

    for (i = 0; str1[i] != '\0'; i++)
        str3[len++] = str1[i];

    for (i = 0; str2[i] != '\0'; i++)
        str3[len++] = str2[i];

    str3[len] = '\0';

    printf("%s\n", str3);

    return 0;
}
