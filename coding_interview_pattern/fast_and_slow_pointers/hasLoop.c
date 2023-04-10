#include "fast_slow.h"

/**
 * hasLoop - Check if a linked list has a loop or not
 *
 * @head: head of the pointer
 * Return: return (1) if has a loop otherwise return (0)
 */
int hasLoop(struct node *head)
{
    struct node *slow, *fast;
    slow = fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        // If slow and fast point to the same pointer
        // Then linked list has a loop
        if (slow == fast)
        {
            return (1);
        }
    }
    return (0);
}


void printNode(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
