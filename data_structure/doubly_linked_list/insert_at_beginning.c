#include "lists.h"
/**
 * insert_at_beginning - insert data to singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
struct node *add_node_front(struct node **head, int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return (NULL);

    newNode->data = val;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        newNode->next = NULL;
        *head = newNode;
    }
    else
    {
        newNode->prev = NULL;
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }

    return (newNode);
}