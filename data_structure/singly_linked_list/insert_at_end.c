#include "lists.h"

/**
 * insert_at_end - insert data at end of singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */

struct node *insert_at_end(struct node **head, int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return (NULL);

    newNode->data = val;
    newNode->next = NULL;

    if (*(head) == NULL)
    {
        *(head) = newNode;
        return (newNode);
    }

    struct node *lastNode = *head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;

    return (newNode);
}
