#include "hash.h"

/**
 * checkForSubArrayWithSumZero - Check for sub array with sum of Zero(0)
 * (BRUTE FORCE APPROACH)
 * @arr: Array to check
 * @size: Size of the array
 * Return: 1 if it has a sum of zero otherwise 0
 */
int checkForSubArrayWithSumZero(int arr[], int size)
{
    int sum, sum2;
    for (int i = 0; i < size; i++)
    {
        sum = sum2 = arr[i];
        if (sum == 0) return (1);

        for (int j = i + 1; j < size; j++)
        {
            sum = arr[i] + arr[j];
            sum2 += arr[j];

            if (sum == 0 || sum2 == 0) return (1);
        }
    }

    return (0);
}


/**
 * checkForSubArrayWithSumZero - Check for sub array with sum of Zero(0)
 * (HASH TABLE)
 * @arr: Array to check
 * @size: Size of the array
 * Return: 1 if it has a sum of zero otherwise 0
 */
int checkForSubArrayWithSumZero2(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];

        if (sum == 0 || search(sum) == 1)
            return (1);
        else
            insert(sum);
    }
    return (0);
}

int main(void)
{

    int arr[] = {6, 7, -5, 4, 2};
    int size = 5;

    int res = checkForSubArrayWithSumZero2(arr,size);
    printf("%d\n", res);
    return (0);
}
