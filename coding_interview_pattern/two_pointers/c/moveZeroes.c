#include <stdio.h>

/**
 * moveZeroes - move all zeros to the end of the array
 *
 * @arr: array
 * @n: size of array
 */
void moveZeroes(int arr[], int n)
{
    int i, newLen = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[newLen++] = arr[i];
        }
    }

    for (i = newLen; i < n; i++)
        arr[i] = 0;
}


/**
 * moveZeroes - move all zeros to the end of the array
 *
 * @arr: array
 * @n: size of array
 */
void moveZeroes2(int arr[], int n)
{
    int start, end, temp;

    start = 0;
    end = n - 1;

    while (start < end)
    {
        if (arr[start] == 0)
        {
            if (arr[end] == 0)
            {
                end--;
            }
            temp = arr[start];
            arr[start++] = arr[end];
            arr[end--] = temp;
        }
        else
        {
            start++;
        }
    }
}

int main(void)
{
    int arr[] = {1, 0, 1, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZeroes2(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return (0);
}
