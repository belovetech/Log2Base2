#include "lists.h"
/**
 * search_node - search node in circular linked list
 * @key: key to find
 *
 * Return: Found otherwise Not found
 */
int search_node(struct node *head, int key)
{
    struct node *tmp = head;
    int flag = 0, idx = 0;

    while (tmp != NULL)
    {
        if (tmp->data == key)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
        idx++;
    }

    if (flag)
        printf("Found at %d\n", idx);
    else
        printf("Not found\n");

    return (idx);
}
