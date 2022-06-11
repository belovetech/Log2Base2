#include "lists.h"

int main(void)
{
    d_lists *head = NULL;

    // insert_at_beginning2(&head, 50);
    // insert_at_beginning2(&head, 40);
    // insert_at_beginning2(&head, 30);
    // insert_at_beginning2(&head, 20);
    // insert_at_beginning2(&head, 10);

    insert_at_end2(&head, 100);
    insert_at_end2(&head, 200);
    insert_at_end2(&head, 300);
    insert_at_end2(&head, 400);
    insert_at_end2(&head, 500);

    search_node(head, 500);
    search_node(head, 600);
    print_listd(head);

    return (0);
}