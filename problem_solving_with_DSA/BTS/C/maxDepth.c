#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};


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


/**
 * maxDepth - Find a maximum depth of a node
 * 
 * @root: Root of a BTS
 * Return: Maximum depth of BTS
 */
int maxDepth(struct node *root)
{
    if (root == NULL)
        return (0);
        
    int leftDepth  = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    
    return (leftDepth > rightDepth? leftDepth + 1 : rightDepth + 1);
    
}

int main(void)
{
    struct node *root = NULL;
    
    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 200);
    root = insertNode(root, 10);
    root = insertNode(root, 60);
    root = insertNode(root, 55);
    root = insertNode(root, 150);
    root = insertNode(root, 300);
    
        
    preOrder(root);
    printf("\n");
    
    printf("Size of node: %d\n", size(root));
    
    printf("%d\n", maxDepth(root));

    return (0);
}