#include<stdio.h>

/**
 * main - prints address of array of character and the value at the address
 *
 * Return: 0 always (success)
 */

int main(void)
{
   char *str = "Hello World";
   int i;

    for (i = 0; str[i]; i++)
        printf("&str[%d] = %p \t *(str+%d) = %c\n", i, str+i, i, *(str+i));

    return 0;
}