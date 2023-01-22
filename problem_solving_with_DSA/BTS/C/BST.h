#ifndef _BST_H
#define _BST_H

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *getNewNode(int data);
struct node *insertNode(struct node *root, int value);
void preOrder(struct node *root);


#endif /*_BST_H*/