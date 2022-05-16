#include<stdio.h>
/**
 * main - assigns and prints value to array of pointer
 * 
 * Return: 0 always (success)  
 */
int main(void)
{
    /* Pointer to entire array */
    int *arr[5];
    int a, b, c, d, e;
    
    // initialize 5 integers
    a = 5; b = 10; c = 15; d = 20;  e = 25;
    
    // initialize arr of 5 pointer
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    arr[4] = &e;

    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %p \t *(arr[%d]) = %d\n", i, arr[i], i, *(arr[i]));


    return 0;
}