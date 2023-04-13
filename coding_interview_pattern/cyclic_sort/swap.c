#include "cyclic_sort.h"

/**
 * swap -  swap two integers
 *
 * @a: address of the first integer
 * @b: address of the second integer
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
