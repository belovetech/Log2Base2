#include "hash.h"

/**
 * checkForDisjointArrays - Check if an array is a disjoint or not
 * Two arrays are said to be disjoint if they dont have any element in common
 *
 * @size1: Size of the first array
 * @arr1: Length of the first array
 * @size2: Size of the second array
 * @arr2: Length of the second array
 * Return: 1 if it's a disjoint otherwise 0
 */
int checkForDisjointArrays(int size1, int arr1[], int size2, int arr2[])
{
    for (int i = 0; i < size1; i++)
        insert(arr1[i]);

    for (int j = 0; j < size2; j++)
    {
        if (search(arr2[j]) == 1)
            return (0);
    }
    return (1);
}



int main(void)
{
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = 5;

    int arr2[] = {5, 15, 25};
    int size2 = 3;

    int res = checkForDisjointArrays(size1, arr1, size2, arr2);
    printf("%d\n", res);

    return (0);
}
