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
 * insert - Insert into hash table using linear probing
 * 
 * @value: Value to be inserted
 * @size: Size of the hash table
 * Return: (1) for succesful insertion otherwise (0) 
 */

int insert(int value, int size)
{
    int key = value % size;
    int index = key;
    
    while (arr[index] != -1)
    {
        // Go to the next available space
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


int delete(int value, int size)
{
    int key = value % size;
    int index = key;
    
    while (arr[index] != value)
    {
        // Go to the next available space
        index = (index + 1) % size;
        
        if (key == index)
        {
            printf("Ops! %d not found in the hash table.\n", value);
            return (0);
        }
    }
    arr[index] = -1;

    return (1);
}


int main(void)
{
    // Initialize all element in the array to (-1)
    init();
    
    // Insert into hash table using Linear probing
    insert(4, SIZE);
    insert(5, SIZE);
    insert(10, SIZE);
    insert(12, SIZE);
    insert(25, SIZE);
    
    // Print array elements
    printArray();
    
    // Delete value from hash table using Linear probing
    int key = 4;
    printf("Deleting %d..........\n", key);
    delete(key, SIZE);
    
    // Print array elements
    printArray();
    
    return (0);
}