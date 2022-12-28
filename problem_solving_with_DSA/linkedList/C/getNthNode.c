#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for a linked list node.
 */
typedef struct node
{
   int data;
   struct node *next;
}lNode ;


/**
 * getNthNode - Get the Nth Node data in a linked list
 * 
 * @head: Head pointer
 * @index: Index of the node to get
 * Return: Data of the node at the index
 */
int getNthNode(lNode *head, int index)
{
    lNode *temp = head;
    
    if (head != NULL)
    {
        while (temp && index)
        {
            temp = temp->next;
            index--;
        }
        if (temp == NULL)
            return (-1);
        return temp->data;
    }
    return (-1);
}

/**
 * insertAtEnd - Insert a new node to the back of a linked list
 * 
 * @head: Head pointer 
 * @value: Value to insert
 * Return: Pointer to the newNode
 */
lNode *insertAtEnd(lNode **head, int value)
{
    lNode *newNode;
    
    newNode = malloc(sizeof(lNode));
    
    if (newNode)
    {
        newNode->data = value;
        newNode->next = NULL;
        
        if (*(head) == NULL)
        {
            *(head) = newNode;
            return newNode;
        }
        else
        {
            lNode *last = *(head);
            while (last->next)
            {
                last = last->next;
            }
            last->next = newNode;        
        }
    }
    return newNode;
    
}

/**
 * printNode - Print Node data
 * 
 * @head: Head pointer 
 */
void printNode(lNode *head)
{
    lNode *temp = head;
    
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main(void)
{
    lNode *head = NULL;
    
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    
    printNode(head);
    
    printf("%d\n",getNthNode(head, 9));
    
    return (0);
}