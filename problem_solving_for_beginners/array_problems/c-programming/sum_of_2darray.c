#include<stdio.h>
/**
 * main - Sum of elements of 2D array
 *
 * Return: 0 Always (success)
 */

int main(void)
{
    int n, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter the element of array: ");
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            sum += arr[i][j];
    }
    
    printf("%d\n", sum);
    return 0;
}