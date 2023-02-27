#include <stdio.h>

/**
 * subArraySum - Calculate sum of subarray size of K
 * BRUTE FORCE APPROCH O(n * k)
 * @arr: array
 * @n: size of array
 * @k: subarray size
 */
void subArraySum(int *arr, int n, int k)
{

    int i, j;

    for (i = 0; i <= n-k; i++)
    {
        int subSum = 0;
        for (j = i; j < k+i; j++)
            subSum += arr[j];
        printf("%d ", subSum);
    }
}

/**
 * subArraySum - Calculate sum of subarray size of K
 * SLIDING WINDOW APPROCH O(n)
 * @arr: array
 * @n: size of array
 * @k: subarray size
 */
void subArraySum2(int *arr, int n, int k)
{
    int i;
    int wStart = 0;
    int subSum = 0;

    for (i = 0; i < n; i++)
    {
        subSum += arr[i];

        if (i >= k-1)
        {
            printf("%d ", subSum);
            subSum -= arr[wStart];
            wStart++;
        }
    }
}


int main(void)
{
    int arr[6] = {1, 5, -1, 6, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int K = 3;

    subArraySum(arr, size, K);
    printf("\n");

    subArraySum2(arr, size, K);
    printf("\n");

    return (0);
}
