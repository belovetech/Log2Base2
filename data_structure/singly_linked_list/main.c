#include "lists.h"

int main(void)
{
    struct node *head = NULL;
    int res;

    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 20);
    insert_at_beginning(&head, 30);
    insert_at_beginning(&head, 40);
    insert_at_beginning(&head, 50);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_end(&head, 40);
    delete_node(&head, 10);
    delete_node(&head, 20);
    delete_node(&head, 20);
    delete_node(&head, 50);
    print_node(head);

    res = search_node(head, 40);

    if (res)
        printf("Found\n");
    else
        printf("Not found\n");
    return (0);
}