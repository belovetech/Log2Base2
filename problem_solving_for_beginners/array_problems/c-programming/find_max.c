#include<stdio.h>
/**
 * main - Find max elements in array
 *
 * Return: 0 Always (success)
 */
int main(void)
{
    int arr[10], n, i, max, cur, next;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the number of element: ");
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    
    printf("Max = %d\n", max);
    return 0;
}