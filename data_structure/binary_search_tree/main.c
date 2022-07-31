#include "bts.h"
int main(void)
{
    struct node *root = NULL;

    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 150);
    root = insertNode(root, 125);
    root = insertNode(root, 10);

    inorder(root);
    printf("\n");
    return (0);
}