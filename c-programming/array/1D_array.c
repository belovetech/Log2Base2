#include <stdio.h>

/**
 * main - creates and prints element of 1D array using for loop 
 * 
 * Return: 0 always (success)
 */

int main(void)
{
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter Element of array of size %d: ", size);
        scanf("%d", &arr[i]);
    }
       
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return (0);
}