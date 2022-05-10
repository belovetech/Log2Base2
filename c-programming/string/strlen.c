#include <stdio.h>

/**
 * _strlen - finds legnth of a string 
 * @str: string to fins its length
 * Return: length of the string 
 */
int _strlen(char str[])
{
    int len = 0;
    while (str[len])
        len++;
    
    return (len);
}

int main(void)
{
    char str[20];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);
    len = _strlen(str);

    printf("The length of  %s = %d\n", str, len);
    return (0);
}