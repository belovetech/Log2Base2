#include "lists.h"

int main(void)
{
    struct node *head = NULL;

    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 20);
    insert_at_beginning(&head, 30);
    insert_at_beginning(&head, 40);
    insert_at_beginning(&head, 50);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_end(&head, 40);
    delete_node(&head, 10)
    print_node(head);
    return (0);
}