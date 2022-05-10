#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - concatenates dest and src 
 * @dest: destination to copy to
 * @src: source to copy from
 *
 * Return: destination
 */

// simple implementation of strcat
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    while (dest[i])
        i++;

    while (src[j])
     {
       dest[i+j] = src[j];
       j++;
     }
    dest[i+j] = '\0';

    return (dest);
}
/**
 * _strcat - concatenates dest and src into another buffer
 * @dest: destination to copy to
 * @src: source to copy from
 *
 * Return: pointer to the buffer
 */

char *_strcat(char *dest, char *src)
{
    int i, j, destLen = 0, srcLen = 0, totalLen;
    char *newStr;

    destLen = strlen(dest);
    srcLen  = strlen(src);
    totalLen = destLen + srcLen;

    newStr = malloc(sizeof(char) * (totalLen + 1));
    if (newStr ==  NULL)
        return (NULL);

    for (i = 0; dest[i] != '\0'; i++)
            newStr[i] = dest[i];
    for (j = 0; src[j] != '\0'; j++)
            newStr[i+j] = src[j];
    newStr[i+j] = '\0';

    return (newStr);
}


int main(void)
{
    char str1[20];
    char str2[20];
    char *newstr;

    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);

    _strcat(str1, str2);
    printf("Concatenated string %s\n", str1);

    return (0);
}
