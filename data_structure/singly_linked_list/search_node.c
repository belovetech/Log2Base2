#include "lists.h"
/**
 * search_node - search node in singly linked list
 * @key: key to find
 *
 * Return: Found otherwise Not found
 */
int search_node(struct node *head, int key)
{
    struct node *tmp;
    int flag = 0;

    tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == key)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
    }
    return (flag);
}