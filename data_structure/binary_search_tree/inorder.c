#include "bts.h"
/**
 * inorder -  print bts node value in ascending order
 * @root: pointer to the root
 */

void inorder(struct node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}
