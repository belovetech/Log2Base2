#include <stdio.h>

/**
 * main - find least signficant bit of a number  using bitwise
 * 
 * Return: 0 always (success)
 */

int main(void)
{
    int num;
    int mask = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    /*if (num & 1) evaluates to 1 */
    if (num & mask)
        printf("LSB of %d is set to (1).\n",  num);
    else
        printf("LSB of %d is set to (0).\n",  num);
    
    return(0);
}