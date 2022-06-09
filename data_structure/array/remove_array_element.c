#include <stdio.h>
/**
 * remove_element - Removes element of array
 * @arr: Array
 * @size: Size of array
 * @key: Element to remove
 */

void remove_element(int arr[], int size, int key)
{
    int i, j, idx;

    // find the index of key
    for (i  = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            idx = i;
            break;
        }
    }

    // Shift element backward and reduce size
    for (i = idx; i < size - 1; i++)
        arr[i] = arr[i + 1];

    size--;
}

/**
 * remove_mid - Removes element at the middle of array
 * @arr: Array
 * @size: Size of array
 */

void remove_mid(int arr[], int size)
{
    int mid, i, lastidx;

    mid = (size - 1) / 2;
    lastidx = size - 1;

    for (i = mid; i < lastidx; i++)
        arr[i] = arr[i + 1];

    size--;
}

/**
 * print_array - Prints element of array
 * @arr: Array
 * @size: Size of array
 */

void print_array(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, res, key;

    print_array(arr, size);

    // printf("Enter a key: ");
    // scanf("%d", &key);

    remove_element(arr, size, key);
    // remove_mid(arr, size);

    print_array(arr, size-1);

    return (0);
}