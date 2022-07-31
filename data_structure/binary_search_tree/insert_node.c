#include "bts.h"

/**
 * insertNode -  insert node to binary search tree
 * @node: pointer to the struct node
 * @val: node value
 * Return: pointer to the root
 */
struct node *insertNode(struct node *root, int val)
{
    if (root == NULL)
        return getNewNode(val);

    if (root->key < val)
        root->right = insertNode(root->right, val);
    else if (root->key > val)
        root->left = insertNode(root->left, val);
    return (root);
}