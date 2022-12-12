#include <stdio.h>

void buildHeap(int arr[], int size);
void swap(int *a, int *b);
void heapify(int arr[], int index, int size);

/**
 * buildHeap - Build heap from array element
 * 
 * @arr: Array element to construct to heap
 * @size: Size of the array
 */
void buildHeap(int arr[], int size)
{
    int i;
    
    for (i = size/2; i >= 0; i--)
        heapify(arr, i, size);
}

/**
 * swap - swap two integers 
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
 * heapify - Construct heap from array element 
 * 
 * @arr: Array element to construct to heap
 * @index: Index of the element
 * @size: Size of the array
 */
void heapify(int arr[], int index, int size)
{
    int left, right, max;
    
    // find left and right node
    left = 2 * index + 1;
    right =  2 * index + 2;
    
    // Assume the index is max
    max = index;
    
    // Update max if arr[left] > arr[max]
    if (left <= size && arr[left] > arr[max])
        max = left;
        
    // Update max if arr[right] > arr[max]
    if (right <= size && arr[right] > arr[max])
        max= right;
        
    // check if max was updated
    if (index != max)
    {
        swap(&arr[max], &arr[index]);
        heapify(arr, max, size);
    }
}

/**
 * printArray: Print array element 
 * 
 * @arr: Array element
 * @size: Size of array element 
 */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    putchar('\n');
}


int main(void)
{
    int arr[] = {10, 20, 40, 30, 80, 60, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("The Array Elements Are:\n");
    printArray(arr, size);
    
    printf("Constructing Heap...\n");
    buildHeap(arr, size-1);
    
    printf("The Array Elements Are:\n");
    printArray(arr, size);
    
    return (0);
}