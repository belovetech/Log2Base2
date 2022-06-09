#include <stdio.h>
#include <stdlib.h>

// Array size
#define SIZE 100

/**
 * inserting_array_element - Inserting array element at any given index
 * @arr: Array
 * @size: Size of array
 * @pos: position or index to insert element
 *
 * Return: pointer to the array
 */
void inserting_array_element(int *arr, int size, int pos, int element)
{
    int i;

    // increment size by 1
    size += 1;
    
    // shift element of array forward
    for (i = size; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = element;
}

/**
 * print_array - Prints element of array
 * @arr: Array
 * @size: Size of array
 */

void print_array(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

/**
 * create_array_element - Creates array element
 * @arr: Array
 * @size: Size of array
 */

void create_array_element(int arr[], int size)
{
    int i;

    printf("Enter element of array of %d\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

/**
 * main - Entry point
 * Return: 0 always (success)
 */

int main(void)
{
    int size, arr[size], pos, value;

    printf("Enter size of array: ");
    scanf("%d", &size);

    // Create array
    create_array_element(arr, size);

    // print before inserting new element
    print_array(arr, size);

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &value);

    inserting_array_element(arr, size, pos, value);

     // update size and print after inserting new element
    size += 1;
    print_array(arr, size);

    return (0);
}