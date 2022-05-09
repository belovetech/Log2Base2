#include <stdio.h>

#define ROW 3
#define COL 3


/**
 * main - creates and prints element of 2D array using for loop 
 * 
 * Return: 0 always (success)
 */

int main(void)
{
    int arr[ROW][COL], row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("Enter the element of arr[%d][%d]: ", ROW, COL);
            scanf("%d", &arr[row][col]);
        }
    }
       
    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("arr[%d][%d] = %d\n",  row, col, arr[row][col]);
        }
    }

    printf("\n");
    return (0);
}