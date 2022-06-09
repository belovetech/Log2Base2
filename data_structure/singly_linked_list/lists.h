#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int print_node(struct node *head);
struct node *insert_at_beginning(struct node **head, int val);
struct node *insert_at_end(struct node **head, int val);
void delete_node(struct node **head, int key);

#endif /* LISTS_H_ */