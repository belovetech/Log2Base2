#include<stdio.h> 

/**
 * main - read and prints element of arr using pointer 
 * 
 * Return: 0 always (success)  
 */

int main(void)
{
   int i, arr[5];
   
   for (i = 0; i < 5; i++)
        scanf("%d", arr+i);
        
    for (i = 0; i < 5; i++)
        printf("%p %d\n", arr+i, *(arr+i));

    return 0; 
}