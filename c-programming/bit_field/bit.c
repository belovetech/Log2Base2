#include<stdio.h> 
/**
 * struct status - sets bit of two integers
 * @ON: 1 bit 
 * @OFF: 1 bit 
 */
struct status
{
    unsigned int ON  : 1;
    unsigned int OFF : 1;
};

/**
 * main - prints size of struct status 
 * 
 *  * Return: 0 always (success)  
 */

int main(void)
{
   struct status s;
   
   s.ON = 1; 
   s.OFF = 0; 
   
   printf("%d\n",s.OFF);
   printf("%d\n",s.ON);
   printf("%ld\n", sizeof(struct status));
    
    return 0; 
}