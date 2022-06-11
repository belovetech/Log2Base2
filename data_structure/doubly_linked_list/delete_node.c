#include "lists.h"

int delete_node(struct node **head, int key)
{
    if (*head == NULL)
        return (-1);

    struct node *tmp = *head;
    // Find node with the key
    while (tmp != NULL && tmp->data != key)
    {
        tmp = tmp->next;
    }

    // Key is not found
    if (tmp == NULL)
        printf("Key not found\n");
    // Key is first node
    else if (tmp == *head)
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(tmp);
    }
    //  Key is last node
    else if (tmp->next == NULL)
    {
        tmp->prev->next = NULL;
        free(tmp);
    }
    else
    {
        //  Key is anywhwere in the middle
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
        free(tmp);
    }
}