#include "hash.h"

#define SIZE 10
int hash[SIZE] = {[0 ... SIZE-1] = -1}; // Initialize all hash to -1


/**
 * insert - Insert value into hash table
 *
 * @value: Data/value to be inserted
 * Return: 1 if successfully inserted otherwise 0
 */
int insert(int value)
{
    int key, index;

    key = value % SIZE;
    index = key;

    while (hash[index] != -1)
    {
        // Check the next available space
        index = (index + 1) % SIZE;
        if (key == index)
        {
            printf("Hash is full\n");
            return (0);
        }
    }
    hash[index] = value;
    return (1);
}

/**
 * search - Search for a value in hash table
 *
 * @value: Value to search for
 * Return: 1 if found otherwise 0
 */
int search(int value)
{
    int key, index;

    key = value % SIZE;
    index = key;

    while(hash[index] != value)
    {
        index = (index + 1) % SIZE;

        if (index == key)
            return (0);
    }

    return (1);
}

/*
int main(void)
{
    insert(10);
    insert(12);
    insert(15);
    insert(20);
    insert(25);
    insert(27);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", hash[i]);
    printf("\n");


    printf("%d\n", search(27));
    return (0);
}*/
