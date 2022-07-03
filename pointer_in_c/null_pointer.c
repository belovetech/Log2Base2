#include<stdio.h>

/**
 * main - checks null pointer 
 * 
 * Return: 0 always (success)  
 */

int main(void)
{
    int a[5] = {1, 4, 8, 12, 16};
    

    int *ptr = NULL;
    int *ptr2 = a;

    if (ptr == NULL)
        printf("ptr points to Nothing!\n");
        
    if (ptr2 != NULL)
        printf("ptr2 points to one memory address!\n");
        

    return 0;
}