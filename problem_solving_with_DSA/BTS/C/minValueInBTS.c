#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

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


int main(void)
{
    struct node *root = NULL;
    
    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 150);
    root = insertNode(root, 125);
    root = insertNode(root, 10);
    
    preOrder(root);
    printf("\n");
    
    int min  = minVal(root);
    int max = maxVal(root);
    
    printf("min => %d max => %d\n", min, max);
    
    return (0);
}