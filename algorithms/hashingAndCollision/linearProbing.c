#include <stdio.h>

#define SIZE 5
int arr[SIZE];

/**
 * init -  Initialize hash table with (-1) 
 */
void init()
{
    for (int i = 0; i < SIZE; i++)
        arr[i] = -1;
}

/**
 * printArray - Print hash table
 */
void printArray()
{
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/**
 * insertLinearProbing - Insert into hash table using linear probing
 * 
 * @value: Value to be inserted
 * @size: Size of the hash table
 * Return: (1) for succesful insertion otherwise (0) 
 */

int insertLinearProbing(int value, int size)
{
    int key = value % size;
    int index = key;
    
    while (arr[index] != -1)
    {
        // Go to the available space
        index = (index + 1) % size;
        
        if (key == index)
        {
            printf("Hash table is full\n");
            return (0);
        }
    }
    arr[index] = value;
    return (1);    
}



int main(void)
{
    // Initialize all element in the array to (-1)
    init();
    
    // Linear probing
    insertLinearProbing(4, SIZE);
    insertLinearProbing(5, SIZE);
    insertLinearProbing(10, SIZE);
    insertLinearProbing(12, SIZE);
    insertLinearProbing(25, SIZE);
    
    // Print array elements
    printArray();
    
    return (0);
}