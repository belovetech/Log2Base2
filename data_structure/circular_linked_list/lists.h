#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct snode
{
    int data;
    struct snode *next;
}s_lists;

typedef struct dnode
{
    int data;
    struct dnode *prev;
    struct dnode *next;
}d_lists;

void print_lists(s_lists *head);
s_lists *insert_at_beginning1(s_lists **head, int val);
s_lists *insert_at_end1(s_lists **head, int val);

void print_listd(d_lists *head);
d_lists *insert_at_beginning2(d_lists **head, int val);
d_lists *insert_at_end2(d_lists **head, int val);
void search_node(d_lists *head, int key);
void delete_node(d_lists **head, int key);

#endif  /*LISTS_H*/