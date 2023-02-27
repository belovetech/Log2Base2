#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k)
{
    int i;
    int wstart = 0;
    int subsum = 0;
    int max = 0;

    for (i = 0; i < n; i++)
    {
        subsum += arr[i];

        if (i >= k-1)
        {
            max = max > subsum? max : subsum;
            subsum -= arr[wstart];
            wstart++;
        }
    }
    return max;
}


int main(void)
{
    int arr[6] = {1, 5, -1, 6, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int K = 3;

    int max = maxSubarraySum(arr, size, K);
    printf("%d\n", max);

    return (0);
}
