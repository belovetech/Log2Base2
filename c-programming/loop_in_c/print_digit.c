#include<stdio.h> 

/**
 * main - get a positive integer from the user. And print it's digits one by one. 
 * 
 * Return: 0 always (success)
 */

int main(void)
{
   int n, l;
   
   printf("Enter positive integers: ");
   scanf("%d", &n);
   
   while (n >= 1)
   {
       l = n % 10;
       printf("%d\n", l);
       n = n / 10;
   }
    return 0; 
}