#ifndef BTS_H_
#define BTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node -  binary search tree
 * @key: value of binary search tree
 * @left: left children/nodes of bts
 * @right: right children/nodes of bts
 */
struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *getNewNode(int val);
struct node *insertNode(struct node *root, int val);
void inorder(struct node *root);
int searchNode(struct node *root, int key);
struct node *deleteNode(struct node *root, int key);
int getRightMin(struct node *root);
#endif /*BTS_H_*/