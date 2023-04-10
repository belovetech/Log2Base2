#include "fast_slow.h"

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

