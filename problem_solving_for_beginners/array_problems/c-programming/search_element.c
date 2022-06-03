#include<stdio.h>
/**
 * main - search key in element of array. Print "Key found" otherwise "Key not found"
 *
 * Return: 0 Always (success)
 */
int main(void)
{
    int arr[10], n, i, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the element of array: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);
    
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1)
        printf("Key found\n");
    else
        printf("Key not found\n");

    return 0;
}