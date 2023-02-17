#include <stdio.h>

/**
 * tail_recursion - print string
 *
 * @str: String to print
 */
void tail_recursion(char *str)
{
    if (*str == '\0')
        return;

    printf("%c ", *str);
    tail_recursion(str+1);
}


int main(void)
{
    char *str = "Tail Recursion!";

    tail_recursion(str);
    printf("\n");

    return (0);
}
