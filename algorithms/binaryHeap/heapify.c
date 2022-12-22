#include <stdio.h>

void heapify(int *arr, int index, int size);

/**
 *  buildHeap - Build heap data
 * 
 * @arr: Array to heapify
 * @size:  Size of the array
 */
void buildHeap(int *arr, int size)
{
    // find the bottom most node
    for (int i = size/2; i >= 0; i--)
        heapify(arr, i, size);
}

/**
 * swap - Swap two integers 
 * 
 * @a: First integer 
 * @b: Second integer 
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * heapify: Heapify array data to satisfy max heap condition 
 * 
 * @arr: Array to heapify
 * @index: Index of the supposed max element
 * @size: Size of the array
 */

void heapify(int arr[], int index, int size)
{
    int left, right, max;
    // find left and right node
    left = 2 * index + 1;
    right = left + 1;
    
    // assume element at index satisfy heap condition
    max = index;
    
    if (left <= size && arr[left] > arr[max])
        max = left;
        
    if (right <= size && arr[right] > arr[max])
        max = right;
        
    // check if max was updated
    if (index != max)
    {
        swap(&arr[index], &arr[max]);
        heapify(arr, max, size);
    }
    
}


/**
 * heapSort - Sort heap
 * 
 * @arr:   Array to heapify
 * @size:  Size of the array
 */

void heapSort(int *arr, int size)
{
    buildHeap(arr, size);
    
    while(size > 0)
    {
        swap(&arr[0], &arr[size]);
        size--;
        heapify(arr, 0, size);
    }
}

/**
 * printHeap - Print heap
 * 
 * @arr:  Array to heapify
 * @size: Size of the array
 */

void printHeap(int *arr, int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i < size -1 )
            printf("%d, ", arr[i]);
        else
             printf("%d", arr[i]);
        
    }
    printf("}\n");
}


int main(void)
{
    int arr[] = {10, 20, 40, 30, 80, 60, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // build heap
    buildHeap(arr, size);
    
    // print heap
    printHeap(arr, size);
    
    // sort heap
    heapSort(arr, size-1);
    
    // print heap
    printHeap(arr, size);
    
    return (0);
}