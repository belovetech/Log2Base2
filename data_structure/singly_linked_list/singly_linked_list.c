#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

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
    struct node *head, *middle, *last;
    int len;

    head   = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last   = malloc(sizeof(struct node));

    head->data   = 10;
    middle->data = 20;
    last->data   = 30;

    head->next   = middle;
    middle->next = last;
    last->next   = NULL;


    len = print_node(head);
    printf("Length of node = %d\n", len);
    return (0);
}