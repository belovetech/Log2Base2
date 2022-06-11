#include "lists.h"
/**
 * print_lists - print circular singly linked list data
 *
 * @head: pointer to the head
 */
void print_lists(s_lists *head)
{
    if (head == NULL)
        return;

    s_lists *tmp = head;

    do
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;

    } while (tmp != head);
    printf("\n");
}

/**
 * print_listd - print circular doubly linked list data
 *
 * @head: pointer to the head
 */
void print_listd(d_lists *head)
{
    if (head == NULL)
        return;

    d_lists *tmp = head;

    do
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;

    } while (tmp != head);
    printf("\n");
}

