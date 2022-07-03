#include<stdio.h>
/***
 * main - Find odd occuring of a number in a given array using bitwise
 */
int main(void)
{
    int size =  8, i, res;

    int arr[10] = {7, 1, 1, 1, 1, 6, 4, 4};

    res = arr[0];
    for (i = 0; i < size; i++)
        res = res ^ arr[i];

	printf("%d\n", res);

	return 0;
}