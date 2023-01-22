#include "BST.h"

struct node *getNewNode(int data)
{
    struct node *newNode;
    
    newNode = malloc(sizeof(struct node));
    
    if (newNode)
    {
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
    }    
    return newNode;
}

struct node *insertNode(struct node *root, int value)
{
    if(root == NULL)
        root = getNewNode(value);
    
    if (root->data < value)
        root->right = insertNode(root->right, value);
    else if (root->data > value)
        root->left = insertNode(root->left, value);
    return root;
}

void preOrder(struct node *root)
{
    if (root == NULL) return;
    
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
