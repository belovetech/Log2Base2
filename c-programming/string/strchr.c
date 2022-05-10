#include <stdio.h>

/**
 * _strchr - locates first occurence of a character in a string
 * @str: string
 * @c: character to find
 * 
 * Return: pointer to the character
 */

char *_strchr(char str[], int c)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
            return (&str[i]);
        else
            return (NULL);
    }
}

int main(void)
{
    char str[20];
    char chr, *pos;

    printf("Enter a string: ");
    fgets(str, 20, stdin);

    printf("Enter a character to find its first occurrence: ");
    scanf("%c", &chr);

    pos = _strchr(str, chr);
    printf("The first occurrence of %c in %s is at  %c\n", chr, str, *pos);
    return (0);
}