#include<stdio.h>
/**
 * main - Find min and maxelements in array
 *
 * Return: 0 Always (success)
 */
int main(void)
{
    int arr[10], n, i, max, min;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the size of array: ");
        scanf("%d", &arr[i]);
    }

    //Write your code here
    max = arr[0];
    min = arr[0];
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    
    printf("Max = %d\nMin = %d\n", max, min);
  
    return 0;
}