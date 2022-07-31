#include "bts.h"
/**
 * deleteNode - delete node in the the BTS nodes
 * @root: Pointer to the root
 * @key: Value to delete
 */
struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->key < key)
        root->right =  deleteNode(root->right, key);
    else if (root->key > key)
        root->left =  deleteNode(root->left, key);
    else
    {
        if (root->right == NULL && root->left == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return (temp);
        }
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return (temp);
        }
        else
        {
            int rightMin = getRightMin(root->right);
            root->key = rightMin;
            root->right = deleteNode(root->right, rightMin);
        }
    }
    return root;
}

int getRightMin(struct node *root)
{
    struct node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->key;
}