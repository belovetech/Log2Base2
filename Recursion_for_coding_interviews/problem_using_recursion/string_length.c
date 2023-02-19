#include <stdio.h>

/**
 * strLength - Length of a string
 *
 * @str: The string
 * @index: Index of the string
 * Return: Length of the strign
 */
int strLength(char str[], int index)
{
    if (str[index] == '\0')
        return 0;
    return strLength(str, index+1) + 1;
}

/**
 * strLength2 - Length of a string
 *
 * @str: The string
 * @index: Index of the string
 * Return: Length of the strign
 */
int strLength2(char str[], int index)
{
    static int len = 0;

    if (str[index] == '\0')
        return len;
    len++;

    return strLength2(str, index+1);
}


int main(void)
{
    char *str = "Abeeb";

    printf("%d\n", strLength(str, 0));
    printf("%d\n", strLength2(str, 0));
    return (0);
}
