#include "BST.h"
/**
 * minVal - FInd the minimum value in BTS  using binary Recursion
 * 
 * @root: Root of the BTS
 * Return: minimum value in BTS
 */
int minVal(struct node *root)
{
   if (root == NULL) return (-1);
   if (!root->left)
        return (root->data);
    minVal(root->left);
}

/**
 * maxVal - FInd the maximum value in BTS  using binary Recursion
 * 
 * @root: Root of the BTS
 * Return: maximum value in BTS
 */
int maxVal(struct node *root)
{
    if (root == NULL)
        return (-1);
    
    if (!root->right)
        return (root->data);
    maxVal(root->right);
}


/**
 * maxVal2 - FInd the maximum value in BTS  using loop
 * 
 * @root: Root of the BTS
 * Return: maximum value in BTS
 */
int maxVal2(struct node *root)
{
   struct node *current = root;
   
   while(current->right != NULL)
   {
        current = current->right;
   }
   return (current->data);
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
    
    printf("%d\n", minVal(root));
    printf("%d\n", maxVal2(root));
  
    return (0);
}