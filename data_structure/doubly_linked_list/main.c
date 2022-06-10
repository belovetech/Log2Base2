#include "lists.h"


int main(void)
{
    struct node *head = NULL;
    
    add_node_front(&head, 10);
    add_node_front(&head, 20);
    add_node_front(&head, 30);
    
    print_node(head);
    return (0);
}