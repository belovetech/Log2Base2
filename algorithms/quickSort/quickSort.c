#include <stdio.h>

/**
 * swap - swap two integers 
 * 
 * @a: first  integer 
 * @b: second integer 
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * partition - divide and array into sub array  
 * 
 * @arr: Array to divide
 * @start: Index of the first element in the array
 * @end: Index of the last element in the array
 * Return: Pivot index 
 */

int partition(int arr[], int start, int end)
{
    int pIndex, pivot, i;
    
    pIndex = start;
    end = end - 1;
    pivot = arr[end];
    i;
    
    for (i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            swap(&arr[i], &arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[pIndex], &arr[end]);
    
    return pIndex;
}

/**
 * quickSort - divide and conquer sorting 
 * 
 * @arr: Array to divide
 * @start: Index of the first element in the array
 * @end: Index of the last element in the array 
 */

void quickSort(int arr[], int start, int end)
{
    int pIndex;
    
    if (start < end)
    {
        pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}


/**
 * printArray -  print array 
 * 
 * @arr: Array to print
 * @size: Size of the array 
 */
void printArray(int arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i < size -1)
            printf("%d, ", arr[i]);
        else
            printf("%d}\n", arr[i]);
    }
}


int main(void)
{
    
    int arr[] = {10, 25, 5, 50, 20};
    int end = sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr, end);
    quickSort(arr, 0, end);
    printArray(arr, end);
    
    return (0);
}