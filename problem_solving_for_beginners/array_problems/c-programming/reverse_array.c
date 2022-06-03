#include<stdio.h>
/**
 * main - Reverse elements of array
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int arr[10], n, i;
	printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the size of array: ");
        scanf("%d", &arr[i]);
    }

    //Write your code here
    int tmp, lastindex, half;

    lastindex = n - 1;
    half = n / 2;
    for (i = 0; i < half; i++)
    {
        tmp = arr[i];
        arr[i] = arr[lastindex - i];
        arr[lastindex - i] = tmp;
    }

    for (i = 0; i < n; i++)
        printf("%d", arr[i]);

    printf("\n");

    return 0;
}