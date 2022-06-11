#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

int print_node(struct node *head);
struct node *add_node_front(struct node **head, int val);
struct node *add_node_end(struct node **head, int val);
int search_node(struct node *head, int key);
int delete_node(struct node **head, int key);
#endif /*LISTS_H*/