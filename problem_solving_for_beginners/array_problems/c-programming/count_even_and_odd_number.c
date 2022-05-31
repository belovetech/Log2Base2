#include<stdio.h>

/**
 * main - Count even and odd number in the array
 * 
 * Return: 0 Always (success)
 */

int main(void)
{
    int arr[10], size, i;
    int even_number_count = 0, odd_number_count = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        printf("Enter Element of array: ");
         scanf("%d", &arr[i]);
    }
       
    //Write your code here
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even_number_count++;
        else
            odd_number_count++;
    }
    printf("Even Number Count = %d\n", even_number_count);
    printf("Odd Number Count = %d\n", odd_number_count);

    return 0;
}