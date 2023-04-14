#include "cyclic_sort.h"

int main(void)
{
    int size = 5;
    // int arr[] = {0, 1, 5, 3, 4};
    int arr[] = {1,3,5,4,2,6};

    printf("Before Cyclic Sort\n");
    printArray(arr, size);

    int res = missingNumber(arr, size);
    printf("\nRESULT: %d\n", res);

    int res2 = missingNumber2(arr, size);
    printf("\nRESULT: %d\n", res2);

    return (1);
}
