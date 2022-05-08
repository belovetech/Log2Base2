#include <stdio.h>

/**
 * main - gets nth bit of a given number using Bitwise
 * 
 * Return: 0 always (success)
 */
 
int main(void)
{
    int num, n, bitStatus;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

   /* Input bit position you want to check */
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);
    
    /* Right shift num, n times and perform bitwise AND with 1 */
    bitStatus = (num >> n) & 1;

     printf("The %d bit is set to %d", n, bitStatus);
    
    return (0);
}