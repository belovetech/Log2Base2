#include "fast_slow.h"

/**
 * loopLength - find the length of a loop in th linked list
 *
 * @head: Pointer to the head of the linked list
 * Return: Length of the loop or zero
 */
int loopLength(struct node *head)
{
    struct node *slow, *fast;
    slow = fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
           return calculateLoopLength(slow);
        }
    }
    return 0;
}

/**
 * calculateLoopLength - Calculate the length of the loop in Linked list
 *
 * @slow: Pointer to where the loop was caught
 * Return Length of the loop or zero
 */
int calculateLoopLength(struct node *slow)
{
    struct node *current = slow;
    int length = 0;

    do
    {
        current = current->next;
        length++;
    } while (current != slow);
    return length;
}

