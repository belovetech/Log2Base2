#include "lists.h"

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