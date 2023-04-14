#include "cyclic_sort.h"

int duplicateNumber(int arr[], int size)
{
    int i = 0;

    while (i < size)
    {
        if (arr[i] != i + 1)
        {
            int index = arr[i] - 1;
            if (arr[i] == arr[index])
                return arr[i];
            else
                swap(&arr[i], &arr[index]);
        }
        else
            i++;

    }
    return -1;
}


