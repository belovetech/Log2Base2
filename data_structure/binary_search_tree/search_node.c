#include "bts.h"
/**
 * searchNode - Search for the key in BTS nodes
 * @root: Pointer to the root
 * @key: Value to find
 * Return: 1 if found otherwise 0
 */

int searchNode(struct node *root, int key)
{
    if (root == NULL)
        return (0);
    if (root->key == key)
        return (1);
    if (root->key < key)
        return searchNode(root->right, key);
    return searchNode(root->left, key);
}
