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
 * countNode - Count nodes in a linked list
 * 
 * @head: Head pointer 
 * Return: Length of a linked list 
 */
int countNode(lNode *head)
{
    struct node *temp = head;
    int count = 0;
    
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

/**
 * getMiddleNode- Get the Middle Node object using Loop
 * 
 * @head: Head pointer of the Linked list 
 * Return: The data of the node in the middle 
 */
int getMiddleNode(lNode *head)
{
    int len = countNode(head);
    lNode *temp = head;
   
   if (temp != NULL)
   {
        for (int i = 0; i < len/2; i++)
            temp = temp->next;
        
        return temp->data;
   } 
   return (-1);
}

/**
 * getMiddleNode2 - Get the Middle Node object using slow and fast pointer
 * 
 * @head: Head pointer of the Linked list 
 * Return: The data of the node in the middle
 */
int getMiddleNode2(struct node *head)
{
    struct node *slow, *fast;
    
    slow = fast = head;
    
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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
    
    printf("%d\n",getMiddleNode2(head));
    
    return (0);
}