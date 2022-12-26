#include <stdio.h>

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
 * rotateArray - Rotate array by K position using normal method
 * 
 * @arr: Array to rotate
 * @n: Size of the array
 * @k: Number of times the array needs to be rotated
 */
void rotateArray(int arr[], int n, int k)
{
    if (n <= 1) return;
    
    while (k > 0)
    {
        for (int i = 0; i < n-1; i++)
        {
            swap(&arr[i], &arr[n-1]);
        }
        k--;
    }
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


/**
 * reverse - Reverse array elements 
 * 
 * @arr: Array to reverse
 * @start: First index of the array
 * @end: Last index of the array
 */
void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
       int temp = arr[start];
       arr[start++] = arr[end];
       arr[end--] = temp;
    }
}

/**
 * rotateArray - Rotate array by K position using reverse method
 * 
 * @arr: Array to rotate
 * @n: Size of the array
 * @k: Number of times the array needs to be rotated
 */
void arrayRotate(int arr[], int n, int k)
{
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1); 
}


int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    printf("Enter rotation number\n");
    scanf("%d", &k);
    
    printf("Before Rotation...\n");
    printArray(arr, size);
    
    // rotateArray(arr, size, k);
    arrayRotate(arr, size, k);
    
    printf("After Rotation...\n");
    printArray(arr, size);
}