#include <stdio.h>
/**
 * main - sets nth bit of a given number using Bitwise
 * 
 * Return: 0 always (success)
 */
int main(void)
{
    unsigned int num, n, newNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

   /* Input bit position you want to check */
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

  /* Left shift 1, n times and perform bitwise OR with num */
  if (n >= 0 && n <= 31)
  {
        newNum = (1 << n) | num;
        printf("Bit set successfully.\n\n");
        printf("Number before setting %d bit: %d (in decimal)\n", n, num);
        printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);
  }
    return (0);
}
