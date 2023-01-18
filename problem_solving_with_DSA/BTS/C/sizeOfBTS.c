#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};


int size(struct node *root)
{
    if (root == NULL)
        return (0);
        
    return 1 + (size(root->left) + size(root->right));
}


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


int main(void)
{
    struct node *root = NULL;
    
    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 150);
    root = insertNode(root, 125);
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    
    
    int count = size(root);
    printf("%d\n", count);
    
    
    return (0);
}
