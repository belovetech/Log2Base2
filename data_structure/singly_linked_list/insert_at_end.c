#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_at_end(struct node **head, int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return (NULL);

    newNode->data = val;
    newNode->next = NULL;

    if (*(head) == NULL)
    {
        *(head) = newNode;
        return (newNode);
    }

    struct node *lastNode = *head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;

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
    
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_end(&head, 40);

    print_node(head);
    return (0);
}