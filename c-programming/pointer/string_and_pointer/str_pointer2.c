#include<stdio.h>

/**
 * main - prints address of array of character and the value at the address
 *
 * Return: 0 always (success)
 */

int main(void)
{
   char str[11] = "Hello World";
   char *ptr;
   int i;

    ptr = str;
    for (i = 0; ptr[i] != '\0'; i++)
        printf("&ptr[%d] = %p \t *(ptr+%d) = %c\n", i, ptr+i, i, *(ptr+i));

    return 0;
}