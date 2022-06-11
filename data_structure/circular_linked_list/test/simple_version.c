#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *head)
{
    if (head == NULL)
        return;

    struct node *tmp = head;

    do
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;

    } while (tmp != head);
    printf("\n");
}

int main(void)
{
    struct node *head, *middle, *last;

    head   = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last   = malloc(sizeof(struct node));

    head->data   = 10;
    middle->data = 20;
    last->data   = 30;

    head->next   = middle;
    middle->next = last;
    last->next   = head;

    print_list(head);
    return (0);
}