#include <stdio.h>

/**
 * merge - divide, sort and merge together 
 * 
 * @arr: Array to sort
 * @start: Index of the first element in the array
 * @mid: Index of the middle element in the array
 * @end: Index of the last element in the array
 */
void merge(int arr[], int start, int mid, int end)
{
    int temp[end-start+1];
    int i, j, k;
    
    i = start;
    j = mid+1;
    k = 0;
    
    // Compare the two halves and copy them accordingly into temp array
    while (i<=mid && j<=end)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    
    // Copy the remaining first half
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    
    // Copy the remaining second half
    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    // copy sorted temp array back to original array
    k = 0;
    for (i = start; i <= end; i++)
        arr[i] = temp[k++];
}


/**
 * mergeSort - divide and conquer merge sort 
 * 
 * @arr: Array to sort
 * @start: Index of the first element in the array
 * @end: Index of the last element in the array
 */
void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        // find mid
        int mid = (start + end) / 2;
        // Sort first and second halves
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
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
    mergeSort(arr, 0, end-1);
    printArray(arr, end);
    
    
    return (0);
}