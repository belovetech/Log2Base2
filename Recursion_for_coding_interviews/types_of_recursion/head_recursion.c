#include <stdio.h>

/**
 * head_recursion - print string
 *
 * @str: String to print
 */
void head_recursion(char *str)
{
    if (*str == '\0')
        return;

    head_recursion(str+1);
    printf("%c ", *str);
}


int main(void)
{
    char *str = "Head Recursion!";

    head_recursion(str);
    printf("\n");

    return (0);
}
