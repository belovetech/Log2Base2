#include<stdio.h> 
/**
 * union value - union of char and int variable 
 * @c: union member of char type
 * @i: union member of int type
 */

union value
{
    char c;
    int i;
};

/**
 * main - union  
 * 
 * Return: 0 always (success)  
 */

int main(void)
{
   union value v;
   
   v.i = 100;
   v.c = 'a';
   
   printf("%c %d\n", v.c, v.i);
    return 0; 
}