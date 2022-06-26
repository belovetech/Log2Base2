#include<stdio.h>
/***
 * main -Enable nth bit using bitwise OR and LEFT SHIFT operators
 * Return: prints the new value
 */
 
 int main(void)
 {  
     int num, n, res;
     
     printf("Enter number and nth bit you want to enable: ");
     scanf("%d%d", &num, &n);
     
     /*
     * shift the bit to the nth number - 1
     * and enable it with bitwise OR
     */
     res = num | (1 << (n - 1));
    
     printf("%d\n", res);
     return (0);
 }