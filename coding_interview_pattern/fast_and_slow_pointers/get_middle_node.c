#include <stdio.h>
#include <stdlib.h>
/*
** Definition for a linked list node.
*/
struct node
{
   int data;
   struct node *next;
};

/**
 * getMiddleNode -  Get the Middle Node object
 *
 * @head: head of the linked list
 * Return: data of the middle node otherwise -1
 */
int getMiddleNode(struct node *head)
{
    if (head == NULL) return -1;

    struct node *slow, *fast;
    slow = fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

void printNode(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
    struct node *h1 = malloc(sizeof(struct node));
    struct node *h2 = malloc(sizeof(struct node));
    struct node *h3 = malloc(sizeof(struct node));
    struct node *h4 = malloc(sizeof(struct node));
    struct node *h5 = malloc(sizeof(struct node));

    h1->data = 10;
    h2->data = 20;
    h3->data = 30;
    h4->data = 40;
    h5->data = 50;

    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h5;
    h5->next = NULL;

    printNode(h1);


    printf("%d\n", getMiddleNode(h1));

    return (0);
}
