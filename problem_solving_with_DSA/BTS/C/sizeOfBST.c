#include "BST.h"

int size(struct node *root)
{
    if (root == NULL)
        return (0);
        
    return 1 + (size(root->left) + size(root->right));
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
    
    // SIZE
    printf("Size of node: %d\n", size(root));
    
    return (0);
}