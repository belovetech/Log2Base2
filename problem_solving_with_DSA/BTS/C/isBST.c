#include "BST.h"
#include <limits.h>

int min = INT_MIN;
int max = INT_MAX;

/**
 * isBSTUtil - utility function for isBST function
 * 
 * @root: Root of the BST
 * @min: Minimum value
 * @max: maximum value 
 * Return: 1 if it's BST otherwise 0 
 */
int isBSTUtil(struct node *root, int min, int max)
{
    if (root == NULL)
        return (1);
    
    if (root->data < min || root->data > max)
        return (0);
        
    return (isBSTUtil(root->left, min, root->data+1) &&
            isBSTUtil(root->right, root->data-1, max));
}

/**
 * isBST - Check if binary tree is BST or Not
 * 
 * @root: The root of Binary tree 
 * Return: 1 if it's BST otherwise 0
 */
int isBST(struct node *root)
{
    return (isBSTUtil(root, min, max));    
}

/**
 * minValue - Find the minimum value in left subtree 
 * 
 * @root:  The root of Binary tree
 * Return: The minimum value 
 */
int minValue(struct node *root)
{
    if (root == NULL)
        return (INT_MAX);
    
    int leftMin  = minValue(root->left);
    int rightMin = minValue(root->right);
    
    int min = leftMin < rightMin? leftMin : rightMin;
    
    min  = min < root->data? min : root->data;
    
    return (min);
}

**
 * maxValue - Find the maximum value in right subtree 
 * 
 * @root:  The root of Binary tree
 * Return: The maximum value 
 */
int maxValue(struct node *root)
{
    if (root == NULL)
        return (INT_MIN);
    
    int leftMax  = maxValue(root->left);
    int rightMax = maxValue(root->right);
    
    int max = leftMax > rightMax? leftMax : rightMax;
    
    max  = max > root->data? max : root->data;
    
    return (max);
}

/**
 * isBST2 - Check if binary tree is BST or Not
 * 
 * @root: The root of Binary tree 
 * Return: 1 if it's BST otherwise 0
 */
int isBST2(struct node *root)
{
    if (root == NULL)
        return (1);
    
    // false, if min of left subtree > root
    if (root->left && minValue(root->left) > root->data)
        return (0);
        
    // false, if max of right subtree < root
    if (root->right && maxValue(root->right) < root->data)
        return (0); 
    
    // false, if left or right is not BST
    if (!isBST2(root->left) || !isBST2(root->right))
        return (0);
    
    // true,  it's BST
    return (1);     
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
    
    printf("%d\n", isBST(root));
    printf("%d\n", isBST2(root));
    
    return (0);
}