#include "lists.h"
/**
 * add_node_end - insert data to the end of singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
struct node *add_node_end(struct node **head, int val)
{
    struct node *newNode, *last;

    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return (NULL);

    newNode->data = val;

    if (*head == NULL)
    {
        newNode->prev  = NULL;
        newNode->next  = NULL;
        *head = newNode;
    }
    else
    {
        last = *head;
        while (last->next != NULL)
            last = last->next;

        newNode->prev = last;
        newNode->next = NULL;
        last->next = newNode;
    }
    return (newNode);
}