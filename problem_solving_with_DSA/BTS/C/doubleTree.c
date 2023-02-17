#include "BST.h"


/**
 * doubleTree - double the BTS
 * Double tree means duplicating BTS data to the left side of the Tree
 *     20           20
 *     /\           /\
 *    /  \         /  \
 *   10  30       20  30
 *                /   /
 *               /   /
 *              10  30
 *              /
 *             /
 *            10
 *
 *
 * @root: The root of te BTS
 */
void doubleTree(struct node *root)
{
    if (root == NULL)
        return;
    else
    {
        doubleTree(root->left);
        doubleTree(root->right);

        struct node *backup = root->left;
        root->left = getNewNode(root->data);
        root->left->left = backup;
    }
}


/**
 * main -Entry point
 *
 * Return: 1 (success) otherwise 0
 */
int main(void)
{
	struct node *root = NULL;

	root = insertNode(root, 100);
	root = insertNode(root, 50);
	root = insertNode(root, 200);

    // Print BTS before doubling the tree
    preOrder(root);
    printf("\n");

    printf("Doubling tree processing...\n");
    doubleTree(root);

    // Print BTS after doubling the tree
    preOrder(root);
    printf("\n");

	return (0);
}
