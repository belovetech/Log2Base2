#include <stdio.h>

/**
 * swap - Swap two integers 
 * 
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * printArray - Print array 
 * 
 *  @arr: Array to sort
 * @size: Size of the array
 */
void printArray(int *arr, int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d", arr[i]);
    }
    printf("}\n");
}

/**
 * selectionSort - Sort element in the array using selection sort
 * 
 * @arr: Array to sort
 * @size: Size of the array
 * Return: Sorted array
 */

void *selectionSort(int *arr, int size)
{
     
    for (int i = 0; i < size - 1; i++)
    {
        printf("\nOuter loop[%d] => ", i);
        printArray(arr, size);
        printf("\n");
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
            printf("Inner loop[%d] => ", i);
            printArray(arr, size);
        }
    }
    return (arr);
 }


int main(void)
{
    
    int arr[] = {90, 50, 90, 20, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("<<<<<<<Print array BEFORE sorted>>>>>>>\n");
    printArray(arr, size);
    
    printf("\n<<<<<<<Sorting in process...>>>>>>>");
    int *res = selectionSort(arr, size);
    
    printf("\n<<<<<<<Print array AFTER sorted>>>>>>>>\n");
    printArray(res, size);
    
    
    return (0);
}