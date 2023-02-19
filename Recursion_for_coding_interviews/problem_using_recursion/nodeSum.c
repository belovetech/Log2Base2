#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};

/**
 * nodeSum - Sum of a singly linked list
 *
 * @head: Head of the singly linked list
 * Return: Sum
 */
int nodeSum(struct node *head)
{
    if (head == NULL)
        return (0);
    return head->data + nodeSum(head->next);
}


int main(void)
{
    struct node *head = NULL;
    struct node *second;
    struct node *last;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head->data = 10;
    second->data = 20;
    last->data = 30;

    head->next = second;
    second->next = last;
    last->next = NULL;

    int sum = nodeSum(head);
    printf("%d\n", sum);

    return (0);
}
