#include "lists.h"

d_lists *insert_at_end2(d_lists **head, int val)
{
    d_lists *newNode;

    newNode = malloc(sizeof(d_lists));
    if (newNode == NULL)
        return (NULL);

    newNode->data =  val;

    if (*head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    }
    else
    {
        d_lists *tmp = *head;
        while (tmp->next != *head)
        {
            tmp = tmp->next;
        }
        tmp->next =  newNode;
        newNode->prev = tmp;
        newNode->next = *head;
    }
    return (newNode);
}