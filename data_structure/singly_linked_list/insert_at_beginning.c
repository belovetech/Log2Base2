#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

/**
 * insert_at_beginning - insert data to singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
struct node *insert_at_beginning(struct node **head, int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return (NULL);

    newNode->data = val;
    newNode->next = *(head);

     *(head) = newNode;

     return (newNode);
}

/**
 * print_node - print singly linked list data
 *
 * @head: pointer to the head
 */
int print_node(struct node *head)
{
    struct node *tmp = head;
    int counter = 0;

    while (tmp != NULL)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
        counter++;
    }
    return (counter);
}

int main(void)
{
    struct node *head = NULL;

    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 20);
    insert_at_beginning(&head, 30);
    insert_at_beginning(&head, 40);
    insert_at_beginning(&head, 50);

    print_node(head);
    return (0);
}