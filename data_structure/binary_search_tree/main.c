#include "bts.h"
int main(void)
{
    struct node *root = NULL;
    
    root = getNewNode(10);
    
    if (root && root->left == NULL && root->right == NULL)
        printf("%d\n", root->key);
    
    
    return (0);
}