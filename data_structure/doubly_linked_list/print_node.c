#include "lists.h"

int print_node(struct node *head)
{
    int counter = 0;

    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
        counter++;
    }
    printf("\n");
    return (counter);
}