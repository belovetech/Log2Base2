#include "fast_slow.h"

/**
 * findLoopStart - find the loop start in the linked list
 *
 * @head: Pointer to the head of the linked list
 * Return: pointer to the start of the loop
 */
lNode *findLoopStart(lNode *head)
{
    lNode *slow, *fast;
    slow = fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return getLoopStart(head, slow, fast);
        }
    }
}

/**
 * getLoopStart - find the start of a linked list loop
 * @head: Head pointer
 * @slow: Pointer to where the loop was caught
 * @fast: Pointer to where the loop was detected
 * Return: pointer to the start of the loop
 */
lNode *getLoopStart(lNode *head, lNode *slow, lNode *fast)
{
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

