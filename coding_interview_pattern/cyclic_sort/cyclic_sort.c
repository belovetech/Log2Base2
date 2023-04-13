#include "cyclic_sort.h"
/**
 * cyclicSort - sorting array of a range of ineteger
 *
 * @arr: array of range
 * @size: size of the array
 */
void cyclicSort(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
            swap(&arr[i], &arr[index]);
        else
            i++;
    }
}

/**
 * cyclicSort - sorting array of a range of ineteger
 *
 * @arr: array of range
 * @size: size of the array
 */
void cyclicSort2(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] != i + 1)
        {
            int index = arr[i] - 1;
            swap(&arr[i], &arr[index]);
        }
        else
            i++;
    }
}
