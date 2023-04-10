#include <stdio.h>
#include <stdlib.h>
/*
** Definition for a linked list node.
*/
struct node
{
   int data;
   struct node *next;
};

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


int main(void)
{
    struct node *h1 = malloc(sizeof(struct node));
    struct node *h2 = malloc(sizeof(struct node));
    struct node *h3 = malloc(sizeof(struct node));
    struct node *h4 = malloc(sizeof(struct node));
    struct node *h5 = malloc(sizeof(struct node));

    h1->data = 10;
    h2->data = 20;
    h3->data = 30;
    h4->data = 40;
    h5->data = 50;

    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h5;
    h5->next = h3;

    // printNode(h1);

    int res = hasLoop(h1);

    if (res == 1)
        printf("Linked list has a loop\n");
    else
        printf("Linked list does not has a loop\n");


    return (0);
}
