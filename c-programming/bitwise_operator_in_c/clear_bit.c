#include <stdio.h>
/**
 * main - unsets nth bit of a given number using Bitwise
 * 
 * Return: 0 always (success)
 */
int main(void)
{
    int num, n, newNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

   /* Input bit position you want to check */
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    /**
     * Left shifts 1 to n times
     * Perform complement of above
     * finally perform bitwise AND with num and result of above
     */
    newNum = num & (~ (1 << n));

    printf("Bit cleared successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);
    return (0);
}
