#include<stdio.h>

/**
 * main - Sum of the elements of array
 *
 * Return: 0 Always (success)
 */

int main(void)
{
    int arr[10], n, i, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n ; i++)
    {
        printf("Enter the number of element: ");
        scanf("%d", &arr[i]);
    }

    //Write your code here
    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);
    return 0;
}