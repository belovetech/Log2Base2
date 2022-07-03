#include<stdio.h>
/**
 * main - pointer to array elements
 * 
 * Return: 0 always (success)  
 */
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5];
    
    ptr = &arr;
 
    for (int i = 0; i < 5; i++)
        printf("arr[%d]-> *(ptr+i) = %p  ptr+i = %p  *(*ptr+i) = %d\n", i, *(ptr+i), ptr+i, *(*ptr+i));

    
    return 0;
}