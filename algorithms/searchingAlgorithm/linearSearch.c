#include <stdio.h>

#define SIZE 5

/**
 * linearSearch - Search for a key in array element 
 * 
 * @arr: Array of integer
 * @key: Key to search for
 * @size: SIze of the array
 * return: If found return (1) otherwise (0) 
 */

int linearSearch(int arr[], int key, int size)
{
    int i;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return (1);
    }
    return (0);
}


int main(void)
{
    int bookPage[SIZE] = {20, 30, 50, 70, 50};
    
    int key = 1;
    
    if (linearSearch(bookPage, key, SIZE))
        printf("Key found\n");
    else
        printf("Key not found\n");
    
    return (0);
}