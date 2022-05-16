#include<stdio.h> 
/**
 * struct date - sets bit of date of the year
 * @day: day of week 
 * @month: month of the year 
 * @year: the year
 */
struct date
{
    unsigned int day   :  5;
    unsigned int month :  4;
    unsigned int year  : 23;
};


/**
 * main - prints size of struct date 
 * 
 *  * Return: 0 always (success)  
 */

int main(void)
{
   struct date d;
   
   d.day   =    2;
   d.month =   11;
   d.year  = 1996;
   
   printf("%d %d %d\n", d.day, d.month, d.year);
   printf("%ld\n", sizeof(struct date));
    
    return 0; 
}