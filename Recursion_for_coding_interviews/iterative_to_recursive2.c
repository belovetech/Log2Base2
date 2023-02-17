#include <stdio.h>

#define SIZE 11

void swap(char *dest, char *src)
{
    char temp;

    temp = *dest;
    *dest = *src;
    *src = temp;
}

/**
 * reverse_str- reverse string
 * @str: string to reverse
 * @n: length of the string
 */

void reverse_str(char str[], int size)
{
   for (int i = 0; i < size/2; i++)
   {
        swap(&str[i], &str[size-i-1]);
   }
}

/**
 * reverse_str- print number up to 1 using recursion
 * @num: number to print
 */
void reverse_str2(char *str, int i, int size)
{
    if (size/2 == i)
        return;

    swap(&str[i], &str[size-i-1]);

    reverse_str2(str, i+1, size);
}


/**
 * main - Entry level
 * return: 0 always (success)
 */
int main(void)
{
    char str[SIZE] = "Hello World";

    reverse_str(str, SIZE);
    printf("%s\n", str);

    reverse_str2(str, 0, SIZE);
    printf("%s\n", str);

    return (0);
}
