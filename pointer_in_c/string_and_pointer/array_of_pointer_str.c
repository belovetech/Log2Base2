#include<stdio.h>
#include<string.h>

/**
 * main - prints base address and value of array of string
 *
 * Return: 0 always (success)
 */
int main(void)
{
    char *names[6] = {"Joe", "John", "James", "Mark", "Doe"};
    int i;
    
    for(i = 0; names[i] != NULL; i++)
        printf("&names[%d] = %p = %s\n", i, names[i], names[i]);

    return 0;
}

