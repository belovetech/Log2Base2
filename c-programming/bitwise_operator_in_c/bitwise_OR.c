#include<stdio.h>

/**
 * main - enable the second bit of the 3 bits
 * 
 * Return: 0 always (success) 
 */

int main(void)
{
    int status, mask, output;

    status = 0;
    mask = 2;
    
    //enable 2bit here
    output = status | mask;
    
    printf("%d", output);
    return 0;
}

