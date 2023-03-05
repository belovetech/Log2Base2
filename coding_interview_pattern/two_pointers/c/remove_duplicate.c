#include <stdio.h>

/**
 * rmDuplicates - remove duplicate in an array
 *
 * @arr: array of sorted duplicate element
 * @n: size of array
 * Return: new length
 */
int rmDuplicates(int arr[], int n)
{
    if (n <= 1) return n;

    int i, newlen = 0;

    for (i = 0; i < n-1; i++)
    {
        if (arr[i] != arr[i+1])
        {
            arr[newlen++] = arr[i];
        }
    }
    arr[newlen++] = arr[n-1];

    return newlen;
}



int main(void)
{
    int arr[] = {1,1,1,3,3,5,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newLen = rmDuplicates(arr, size);

    printf("%d\n", newLen);

    for (int i = 0; i < newLen; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return (0);
}
