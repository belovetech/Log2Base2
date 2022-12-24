#include <stdio.h>

#define SIZE 8

/**
 * iterativeBinarySearch - Search for a key in array element (Binary search)
 * 
 * @arr: Array of integer
 * @key: Key to search for
 * @size: SIze of the array 
 * return: If found return (1) otherwise (0)
 */

int iterativeBinarySearch(int arr[], int size, int key)
{
    int i, mid, start, end;
    
    start = 0;
    end = size;
   
   while (start <= end)
   {
        mid = (start + end) / 2;
        
        if (arr[mid] == key)
            return (1);
        else if(arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
   }
   return (0);
}

/**
 * recursiveBinarySearch - Search for a key in array element (Binary search)
 * 
 * @arr: Array of integer
 * @key: Key to search for
 * @size: SIze of the array 
 * return: If found return (1) otherwise (0)
 */

int recursiveBinarySearch(int arr[], int key, int start, int end)
{ 
    if (start > end)
        return (0);
        
    int mid  = (start + end) / 2;
    if (arr[mid] == key)
        return (1);
    else if (arr[mid] > key)
        return recursiveBinarySearch(arr, key, start, mid - 1);
    else
        return recursiveBinarySearch(arr, key, mid + 1, end);
}


int main(void)
{
    int bookPage[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80};
    int key = 10;
    
    printf("<<<<<<Iterative Binary search>>>>>>\n");
    if (iterativeBinarySearch(bookPage, SIZE, key))
        printf("Key found\n");
    else
        printf("Key not found\n");
    
    printf("<<<<<<Recursive Binary search>>>>>>\n");
    if (recursiveBinarySearch(bookPage, key, 0, SIZE))
        printf("Key found\n");
    else
        printf("Key not found\n");
    
    return (0);
}