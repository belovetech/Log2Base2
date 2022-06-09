#include <stdio.h>

int search_element(int arr[], int size, int key)
{
    int i, flag = -1;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return (i);
    }
    return (flag);
}


int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, res, key;

    printf("Enter a key: ");
    scanf("%d", &key);

    res = search_element(arr, size, key);

    if (res >= 0)
        printf("Found at index %d\n", res);
    else
        printf("Not Found\n");

    return (0);
}