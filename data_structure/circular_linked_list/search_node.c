#include "lists.h"

/**
 * search_node - search node in doubly linked list
 * @key: key to find
 *
 * Return: Found otherwise Not found
 */
void search_node(d_lists *head, int key)
{
    d_lists *temp = head;
    int flag = 0, idx = 0;

    do
    {
        if (temp->data == key)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
        idx++;

    } while (temp != head);

    if (flag)
        printf("Found at index %d\n", idx);
    else
        printf("Not Found\n");
}