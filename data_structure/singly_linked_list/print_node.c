#include "lists.h"
/**
 * print_node - print singly linked list data
 *
 * @head: pointer to the head
 */

int print_node(struct node *head)
{
    struct node *tmp = head;
    int counter = 0;

    while (tmp != NULL)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
        counter++;
    }
    return (counter);
}
