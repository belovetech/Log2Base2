#include "lists.h"
/**
 * delete_node - Delete key in the linked list node
 * @key: data to delete
 */
void delete_node(struct node **head, int key)
{
    struct node *tmp;

    if ((*head)->data == key)
    {
        tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
    else
    {
        struct node *current = *head;
        while (current->next != NULL)
        {
            if (current->next->data == key)
            {
                tmp = current->next;
                current->next = current->next->next;
                free(tmp);
                break;
            }
            else
            {
                current = current->next;
            }
        }
    }
}
