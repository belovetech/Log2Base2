#include "lists.h"

/**
 * insert_at_beginning - insert data to singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
struct node *insert_at_beginning(struct node **head, int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return (NULL);

    newNode->data = val;
    newNode->next = *(head);

     *(head) = newNode;

     return (newNode);
}
