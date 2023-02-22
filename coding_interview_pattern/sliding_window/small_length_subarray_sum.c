#include <stdio.h>
#include <limits.h>

/**
 * smallLengthSubarraySum - Find the small length subarray sum
 *
 * @arr: Array of integers
 * @n: Size of the array
 * @S: Sum to find in the sub array
 * @return: The smallest length of the subarray sum
 */
int smallLengthSubarraySum(int arr[], int n, int S)
{
    int i;
    int wstart = 0;
    int subSum = 0;
    int len = INT_MAX;

    for (i = 0; i < n; i++)
    {
        subSum += arr[i];

        while (subSum >= S)
        {
            int currentWindowSize = i - wstart + 1;
            len = len < currentWindowSize? len : currentWindowSize;

            subSum -= arr[wstart];
            wstart++;
        }
    }
    return  len == INT_MAX? 0 : len;
}


int main(void)
{
    int arr[6] = {4, 1, 5, 2, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int S = 7;

    int min = smallLengthSubarraySum(arr, size, S);
    printf("%d\n", min);

    return (0);
}
