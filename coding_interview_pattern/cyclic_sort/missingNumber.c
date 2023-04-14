#include "cyclic_sort.h"
/**
 * missingNumber - find a missing number in an array containing a range of integers
 *
 * @arr: array of range
 * @size: size of the array
 */
int missingNumber(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        int index = arr[i] - 1;
        if (index != -1 && arr[i] != arr[index] )
            swap(&arr[i], &arr[index]);
        else
            i++;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
            return i+1;
    }
    return (0);
}

/**
 * missingNumber - find a missing number in an array containing a range of integers
 *
 * @arr: array of range
 * @size: size of the array
 */
int missingNumber2(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] < size && i != arr[i])
            swap(&arr[i], &arr[arr[i]]);
        else
            i++;
    }
    for (int i = 0; i < size; i++)
        if (arr[i] != i)
            return i;
    return size;
}
