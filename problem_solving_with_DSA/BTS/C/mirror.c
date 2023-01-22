#include "BST.h"

/**
 * mirror - mirror the BTS node
 * 
 * @root: root of the BTS 
 */
void mirror(struct node *root)
{
    if (root == NULL)
        return;
    else
    {
        // do subtree 
        mirror(root->left);
        mirror(root->right);
        
        // swap left and right pointer
        struct node *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
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
    // printf("Size of node: %d\n", size(root));

    printf("<<<<<<<<<<<<<<<<<<<Before mirror>>>>>>>>>>>>>\n");
    preOrder(root);
    printf("\n");
    
    printf("<<<<<<<<<<<<<<<<<<<After mirror>>>>>>>>>>>>>\n");
    mirror(root);
    preOrder(root);
    printf("\n");
    
    
    // MAXDEPTH
    // printf("%d\n", maxDepth(root));

    return (0);
}