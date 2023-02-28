#include <stdio.h>

/**
 * removeElement - remove occurence of val in array
 *
 * @arr: array
 * @n: size of the array
 * @val: occurrence of value
 * Return - the new length
 */
int removeElement(int arr[], int n, int val)
{
    int i, newLen = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != val)
        {
            arr[newLen++] = arr[i];
        }
    }
    return newLen;
}


int main(void)
{
    int arr[] = {4,7,6,7,8,7,7};
    int val = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    int newLen = removeElement(arr, size, val);

    printf("%d\n", newLen);

    for (int i = 0; i < newLen; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return (0);
}
