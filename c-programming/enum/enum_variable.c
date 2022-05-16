#include <stdio.h>

/**
 * main - initializing and naming of variable using enum
 * 
 * Return: 0 always (success) 
 */

int main(void)
{
    // initializing and naming of variable
    enum status{sun, mon, tue, wed, thur, fri, sat} day;
    
    // initializing the declare variable
    enum status{sun, mon, tue, wed, thur, fri, sat};
    enum status day;
    
    day = sat;
    printf("%d\n", day);
    
    return (0);
}