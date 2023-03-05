#include <stdio.h>

/**
 * removeDuplicates - remove duplicate at most twice in a sorted array
 *
 * @arr: array of sorted duplicate element
 * @n: size of array
 * Return: new length
 */
int removeDuplicates(int arr[], int n)
{
    if (n <= 2) return n;

    int i, len = 0;
    arr[len++] = arr[0];
    for (i = 1; i < n-1; i++)
    {
       if (arr[i-1] != arr[i+1])
       {
           arr[len++] = arr[i];
       }
    }
    arr[len++] = arr[n-1];

    return len;
}

int main(void)
{
    int arr[] = {5,5,5,6,6,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newLen = removeDuplicates(arr, size);

    printf("%d\n", newLen);

    for (int i = 0; i < newLen; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return (0);
}
