#include "cyclic_sort.h"

int main(void)
{
    int size = 5;
    int arr[] = {5, 3, 1, 4, 2};

    printf("Before Cyclic Sort\n");
    printArray(arr, size);
    cyclicSort2(arr, size);
    printf("After Cyclic Sort\n");
    printArray(arr, size);

    return (1);
}
