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
    int arr[ROW][COL], i, j;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Enter the element of arr[%d][%d]: ", ROW, COL);
            scanf("%d", &arr[i][j]);
        }
    }
       
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            printf("arr[%d][%d] = %d\n",  i, j, arr[i][j]);

    printf("\n");
    return (0);
}