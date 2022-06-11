#include "lists.h"


int main(void)
{
    struct node *head = NULL;
    int res;

    add_node_front(&head, 10);
    add_node_front(&head, 20);
    add_node_front(&head, 30);

    add_node_end(&head, 50);
    add_node_end(&head, 10);
    add_node_end(&head, 50);
    add_node_end(&head, 550);

    print_node(head);

    search_node(head, 5590);

    return (0);
}