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
 * nodeLength - Count nodes in a linked list
 * 
 * @head: Head pointer 
 * Return: Length of a linked list 
 */
int nodeLength(struct node *head)
{
    int count = 0;
    struct node *temp = head;
    
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

/**
 * getNthFromLast - Get the Nth data From Last node using loop
 * 
 * @head: Head pointer 
 * @n: Nth data to fetch 
 */
void getNthFromLast(struct node *head, int n)
{
    int len = nodeLength(head);
    
    if (n == 0 || n > len || head == NULL) return;
    
    struct node *temp = head;
    int *arr = malloc(sizeof(int) * len);
    
    int i = 1;
    
    while (temp != NULL && i <= len)
    {
        arr[len-i++] = temp->data;
        temp = temp->next;
    }

    printf("%d\n", arr[n-1]);
}

/**
 * getNthFromLast2 - Get the Nth data From Last node using recursion
 * 
 * @head: Head pointer 
 * @n: Nth data to fetch 
 */
int count = 0;
void getNthFromLast2(struct node *head, int n)
{
    if (head == NULL)
        return;
    
    getNthFromLast2(head->next, n);
    count++;
    
    if (count == n)
        printf("%d\n", head->data);
    
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
    
    getNthFromLast(head, 1);
    getNthFromLast2(head, 1);
    
    return (0);
}