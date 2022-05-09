#include <stdio.h>

#define ROW 2
#define COL 2

/**
 * display_array - displays element of 2D array
 * @arr: 2D array to display
 */

void display_array(int arr[][COL])
{
    int i, j;

    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            printf("%d ", arr[i][j]);
}

int main(void)
{
    int arr[ROW][COL] = {20, 50, 30, 23};

    display_array(arr);
    return (0);
}