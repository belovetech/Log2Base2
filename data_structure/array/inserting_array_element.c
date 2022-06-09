#include <stdio.h>
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
int *inserting_array_element(int *arr, int size, int pos, int val)
{
    int i;

    // increment size by 1
    size += 1;

    // shift element of array forward
    for (i = size; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;

    return (arr);
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
 * main - Entry point
 * Return: 0 always (success)
 */

int main(void)
{
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int pos = 2;
    int size = 5;

    // print before inserting new element
    print_array(arr, size);

    inserting_array_element(arr, size, pos, 15);
    inserting_array_element(arr, size, pos, 20);
    inserting_array_element(arr, size, 67, 25);

     // print after inserting new element
    print_array(arr, 100);

    return (0);
}