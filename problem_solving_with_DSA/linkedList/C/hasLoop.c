#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for a linked list node.
 */
typedef struct node
{
   char data;
   struct node *next;
}lNode ;

/**
 * hasLoop  - Check if there's a loop in linkedList
 * 
 * @head: Pointer to the head node
 * Return: (1) otherwise (0)
 */
int hasLoop(lNode *head)
{
    lNode *slow, *fast;
    slow = fast = head;
    
    if (head == NULL) return (0);
    
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast)
            return (1);
    }
    return (0);
}

/**
 * push - Insert a new node to the beginning of a linked list
 * 
 * @head: Head pointer 
 * @value: Value to insert
 */
void *push(lNode **head, int value)
{
    lNode *newNode;
    
    newNode = malloc(sizeof(lNode));
    
    if (newNode)
    {
        newNode->data = value;
        
        newNode->next = *(head);
        *(head) = newNode;    
    }
}

int main(void)
{
    lNode *head = NULL;
    
    push(&head, 'B');
    push(&head, 'C');
    push(&head, 'D');
    push(&head, 'A');
    
    // Create a loop
    head->next->next->next->next = head;
    
    printf("%d\n", hasLoop(head));
    
    return (0);
}