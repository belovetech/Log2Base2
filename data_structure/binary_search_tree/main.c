#include "bts.h"

int main(void)
{
    struct node *root = NULL;
    int res;

    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 150);
    root = insertNode(root, 125);
    root = insertNode(root, 10);

    inorder(root);
    printf("\n");
    
    deleteNode(root, 100);
    
    res = searchNode(root, 150);
    if (res)
        printf("Key found\n");
    else
        printf("Key not found\n");

    inorder(root);
    printf("\n");
    return (0);
}
