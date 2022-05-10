#include <stdio.h>

/**
 * _strcpy - copy a string into another string
 * @dest: destination to copy to
 * @src: source to copy from
 * 
 * Return: pointer to the newstring
 */
char *_strcpy(char *dest, char *src)
{
    int i;
    
    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    
    return (dest);
}

int main(void)
{
    char str[20];
    char newStr[20];

    printf("Enter a string: ");
    fgets(str, 20, stdin);

    _strcpy(newStr, str);
    printf("The new string is %s\n", newStr);
    return (0);
}
