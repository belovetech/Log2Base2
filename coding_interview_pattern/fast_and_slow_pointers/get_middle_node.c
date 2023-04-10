#include "fast_slow.h"
/**
 * getMiddleNode -  Get the Middle Node object
 *
 * @head: head of the linked list
 * Return: data of the middle node otherwise -1
 */
int getMiddleNode(struct node *head)
{
    if (head == NULL) return -1;

    struct node *slow, *fast;
    slow = fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
