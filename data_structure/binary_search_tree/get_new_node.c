#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *getNewNode(int val)
{
    struct node *newNode;
    
    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return (NULL);
        
    newNode->key = val;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return (newNode);
}

int main(void)
{
    struct node *root = NULL;
    
    root = getNewNode(10);
    
    if (root && root->left == NULL && root->right == NULL)
        printf("%d\n", root->key);
    
    
    return (0);
}