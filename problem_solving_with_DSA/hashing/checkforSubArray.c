#include "hash.h"

/**
 * checkforSubArray - Check if an array is a subset of another array (BRUTE FORCE)
 *
 * @size1: Size of the first array
 * @arr1: Length of the first array
 * @size2: Size of the second array
 * @arr2: Length of the second array
 * Return: 1 if it's a subset otherwise 0
 */

int checkforSubArray(int size1, int arr1[], int size2, int arr2[])
{
    for (int i = 0; i < size2; i++)
    {
        int flag = 0;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return (0);
        }
    }
    return (1);
}

/**
 * checkforSubArray2 - Check if an array is a subset of another array (HASH TABLE)
 *
 * @size1: Size of the first array
 * @arr1: Length of the first array
 * @size2: Size of the second array
 * @arr2: Length of the second array
 * Return: 1 if it's a subset otherwise 0
 */
int checkforSubArray2(int size1, int arr1[], int size2, int arr2[])
{
    for (int i = 0; i < size1; i++)
        insert(arr1[i]);

    for (int j = 0; j < size2; j++)
    {
        if (search(arr2[j]) == 0)
            return (0);
    }
    return (1);
}

int main(void)
{

    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = 5;

    int arr2[] = {10, 40, 50};
    int size2 = 4;

    int res = checkforSubArray2(size1, arr1, size2, arr2);
    printf("%d\n", res);

    return (0);
}
