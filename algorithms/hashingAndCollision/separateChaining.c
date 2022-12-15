#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

struct node
{
    int data;
    struct node *next;
};
struct node *chain[SIZE];


void init()
{
    for (int i = 0; i < SIZE; i++)
        chain[i] = NULL;
}


/**
 * insert - Insert into hash table using separate chainning
 * 
 * @value: Value to be inserted
 */
void insert(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    
    if (newNode != NULL)
    {
        newNode->data = value;
        newNode->next = NULL;
    }
    int key = value % SIZE;
    
    if (chain[key] == NULL)
        chain[key] = newNode;
    else
    {
        struct node *temp = chain[key];
        
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

/**
 * delete - delete from hash table using separate chainning
 * 
 * @value: Value to be deleted
 * Return: (1) for succesful deletion otherwise (0) 
 */
int delete(int value)
{
    int key = value % SIZE;
    struct node *dealloc, *temp = chain[key];
    
    if (temp != NULL)
    {
        if (temp->data == value)
        {
            dealloc = temp;
            temp = temp->next;
            free(dealloc);
            return (1);
        }
        else
        {
            while (temp->next)
            {
                if(temp->next->data == value)
                {
                    dealloc = temp->next;
                    temp->next =  temp->next->next;
                    free(dealloc);
                    return (1);
                }
                temp = temp->next;
            }
        }
    }
    return (0);
}

/**
 * search - Search for value in hash table using separate chainning
 * 
 * @value: Value to be searched
 * Return: (1) if found otherwise (0) 
 */
int search(int value)
{
    int key = value % SIZE;
    struct node *temp = chain[key];
    
    while (temp)
    {
        if (temp->data == value)
            return (1);
        temp = temp->next;
    }
    return (0);
}

/**
 * print - Print hash table
 */
void print()
{
    for (int i = 0; i < SIZE; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->", i);
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    
}


int main(void)
{
    // Initialize hash table
    init();
    
    // Insert value into hash table
    insert(5);
    insert(10);
    insert(15);
    insert(20);
    insert(25);
    insert(30);
    insert(35);
    insert(40);
    insert(45);
    insert(50);
    insert(55);
    insert(60);
    insert(65);
    
    
    // print hash table
    printf("<<<<<<<Print>>>>>>>\n");
    print();
    
    // delete value from hash table
    int value = 60;
    printf("<<<<<<<Deleting (%d)>>>>>>>\n", value);
    delete(value);
    delete(25);
    printf("<<<<<<<Print>>>>>>>\n");
    print();
    
    int key = 60;
    printf("<<<<<<<Searching for (%d)>>>>>>>\n", key);
    if (search(key))
        printf("Key found\n");
    else
        printf("Key not found\n");
    
    return(0);
}