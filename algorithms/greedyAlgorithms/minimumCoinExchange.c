#include <stdio.h>

int ans[100];

/**
 * findMinimumCoin - Find minimum coin 
 * 
 * @coins: Available coins
 * @size: Size of the coins
 * @value: Value to find its minimum coin
 * Return:  Number of the minimum coin
 */
int findMinimumCoin(int coins[], int size, int value)
{
    int count = 0;
    
    for (int i = 0; i < size; i++)
    {
        while (value >= coins[i])
        {
            value -= coins[i];
            ans[count] = coins[i];      
            count++;
        }
        if (value == 0)
            break;
    }
    return count;
}

/**
 * printArray -  print array 
 * 
 * @arr: Array to print
 * @size: Size of the array 
 */
void printArray(int arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i < size -1)
            printf("%d, ", arr[i]);
        else
            printf("%d}\n", arr[i]);
    }
}

int main(void)
{
    int value, size, minCoins;
    int coins[] = {25, 20, 15, 10, 5};
    
    value = 115;
    size = sizeof(coins) / sizeof(coins[0]);
    minCoins = findMinimumCoin(coins, size, value);

    printf("%d\n", minCoins);
    printArray(ans, minCoins);
    
    return (0);
}