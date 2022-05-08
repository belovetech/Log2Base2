#include <stdio.h>

#define BITS sizeof(int) * 8 // Total bits required to represent integer

/**
 * main - find most signficant bit of a number  using bitwise
 * 
 * Return: 0 always (success)
 */
 
int main(void)
{
    int num, msb;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    /* Move first bit of 1 to highest order */
    msb = 1 << (BITS - 1);
    
    /* Perform bitwise AND with msb and num */
    if (num & msb == 1)
        printf("MSB of %d is (1). \n", num);
    else
        printf("MSB of %d is (0). \n", num);
    
    return (0);
}