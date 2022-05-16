#include <stdio.h>

/**
 * main - set the value of status using enum
 * 
 * Return: 0 always (success) 
 */
int main(void)
{
    enum status{OFF, ON};

    printf("ON = %d OFF = %d\n", ON, OFF);

    return (0);
}