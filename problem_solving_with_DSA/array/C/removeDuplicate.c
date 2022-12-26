#include <stdio.h>

/**
 * rmDuplicates - Remove duplicate from a sorted array
 * 
 * @arr: Sorted array
 * @n: Size of the array 
 * Return: Size of the new array 
 */
int rmDuplicates(int arr[], int n)
{
    int len = 0;
    
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] != arr[i+1])
        {
            arr[len++] = arr[i];
        }
    }
    arr[len++] = arr[n-1];
    
    return (len);
}

/**
 * printArray - Print array 
 * 
 * @arr: Array to print
 * @n: Size of the array
 */
void printArray(int arr[], int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        if (i < n-1)
            printf("%d, ", arr[i]);
        else
            printf("%d}\n", arr[i]);
    }
}



int main(void)
{
    int arr[] = {1,1,1,3,3,5,5};
    int n = 7;
    
    printArray(arr, n);
    int newN = rmDuplicates(arr, n);
    printf("%d\n", newN);
    printArray(arr, newN);
    
    return (0);
}