#include "lists.h"


int main(void)
{
    struct node *head = NULL;
    int res;


    add_node_front(&head, 10);
    add_node_front(&head, 20);
    add_node_front(&head, 30);
    add_node_end(&head, 40);
    add_node_end(&head, 50);
    add_node_end(&head, 60);
    add_node_end(&head, 70);

    print_node(head);
    delete_node(&head, 30);
    delete_node(&head, 70);
    delete_node(&head, 700);
    delete_node(&head, 60);
    delete_node(&head, 10);
    print_node(head);
    // search_node(head, 5590);

    return (0);
}