#include <stdio.h>

int hasPairWithTarget(int arr[], int n, int target)
{
    int start, end, sum = 0;

    start = 0;
    end = n - 1;

    while (start < end)
    {
        sum = arr[start] + arr[end];

        if (sum == target)
            return 1;
        else if (sum < target)
            start++;
        else
            end--;
    }

    return 0;
}


int main(void)
{
    int arr[] = {1,5,10,20,80};
    int target = 30;
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = hasPairWithTarget(arr, size, target);

    printf("%d\n", res);
    return (0);
}
