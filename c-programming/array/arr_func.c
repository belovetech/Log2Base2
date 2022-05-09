#include <stdio.h>
/**
 * display_array - displays element of 1D array
 * @arr: 2D array to display
 */

void display_array(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d \n", arr[i]);

}

int main(void)
{
    int arr[5] = {20, 50, 30, 23, 50};

    display_array(arr, 5);
    return (0);
}