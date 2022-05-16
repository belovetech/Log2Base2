#include<stdio.h>
/**
 * main - compares the address of elemnt of array
 * 
 * Return: 0 always (success)  
 */
int main(void)
{
    int a[5] = {1, 4, 8, 12, 16};

    int *x = &a[2];
    int *y = &a[3];

    if (x > y)
        printf("Y is ahead of X\n");

    return 0;
}