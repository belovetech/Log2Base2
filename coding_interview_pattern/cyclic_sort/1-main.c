#include "cyclic_sort.h"

int main(void)
{
    int size = 5;
    int arr[] = {2, 4, 1, 3, 5};

    printf("Before Cyclic Sort\n");
    printArray(arr, size);

    int res = duplicateNumber(arr, size);

    printf("%d\n", res);

    return (1);
}
