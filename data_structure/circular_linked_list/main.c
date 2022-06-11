#include "lists.h"

int main(void)
{
    d_lists *head = NULL;

    insert_at_beginning2(&head, 50);
    insert_at_beginning2(&head, 40);
    insert_at_beginning2(&head, 30);
    insert_at_beginning2(&head, 20);
    insert_at_beginning2(&head, 10);
    print_listd(head);

    return (0);
}