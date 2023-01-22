#include "BST.h"


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
    

    // MAXDEPTH
    printf("%d\n", maxDepth(root));

    return (0);
}