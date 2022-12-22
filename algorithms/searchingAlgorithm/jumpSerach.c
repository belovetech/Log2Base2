#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * jump_search - Jump search algorithm 
 * 
 * @array: Pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: first index where value is located Otherwise (-1)
 */

int jump_search(int *array, size_t size, int value)
{
    int m = sqrt(size);
    size_t index = 0;
    int temp = m;
    
    if (array[0] == value) return (index);
    
    for (index; index < size; index++)
    {
        printf("Value checked array[%ld] = [%d]\n", index, array[index]);
        if (array[m] == value) return (m);
        else if (array[m] < value) m += m;
        else if (array[m] > value) 
        {
            for (int i = (m - temp); i < m; i++)
                if (array[i] == value) return (i);
        }
    }

    return (-1);
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
    return (EXIT_SUCCESS);
}