#include "lists.h"
/**
 * delete_node - Delete a node of circular singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
void delete_node(d_lists **head, int key)
{
    if (*head == NULL)
        return;

    if ((*head)->data == key && (*head)->next == *head)
    {
        free(*head);
        *head = NULL;
    }
    else if ((*head)->data == key)
    {
        d_lists *last = *head, *tmp;
        while (last->next != *head)
        {
            last = last->next;
        }
        tmp = *head;
        last->next = (*head)->next;
        (*head)->prev = last;
        *head = (*head)->next;
        free(tmp);
    }
    else
    {
        d_lists *current = *head, *tmp;
        while (current->next != *head)
        {
            if (current->next->data == key)
            {
                tmp = current->next;
                current->next = tmp->next;
                tmp->prev = current;
                free(tmp);
                break;
            }
            current = current->next;
        }
        if (current->next == *head)
            printf("Key not found\n");
    }
}
