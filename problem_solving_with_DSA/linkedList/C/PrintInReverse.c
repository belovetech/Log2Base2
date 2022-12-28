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

void print_in_reverse(struct node *head)
{
    if (head == NULL)
        return
    print_in_reverse(head->next);
    printf("%d ", head->data);    
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

int main(void)
{
    lNode *head = NULL;
    
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    
    print_in_reverse(head);

    
    return (0);
}