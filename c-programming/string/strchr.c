#include <stdio.h>

/**
 * _strchr - finds first occurence of a charcter in a string
 * @str: string
 * @c: character to find
 * 
 * Return: position of the character
 */

int _strchr(char str[], char c)
{
    int pos;

    for (pos = 0; str != NULL; pos++)
    {
        if (str[pos] == c)
            return (pos);
    }
}

int main(void)
{
    char str[20];
    char chr;
    int pos;

    printf("Enter a string: ");
    fgets(str, 20, stdin);

    printf("Enter a character to find its first occurrence: ");
    scanf("%c", &chr);

    pos = _strchr(str, chr);
    printf("The first occurrence of %c in %s is at position %d\n", chr, str, pos);
    return (0);
}