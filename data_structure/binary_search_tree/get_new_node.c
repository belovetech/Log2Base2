#include "bts.h"

/**
 * getNewNode - create new node of bts
 * @val: Value of the node created
 * Return: pointer to the newNode
 */
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
