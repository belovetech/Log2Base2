#include "bts.h"
/**
 * search - Search for the key in BTS nodes
 * @root: Pointer to the root
 * @key: Value to find
 * Return: 1 if found otherwise 0
 */

int search(struct node *root, int key)
{
    if (root == NULL)
        return (0);
    if (root->key == key)
        return (1);
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}
