#include "BST.h"

/**
 * identicalTree - Check if the two BTS are equal
 *
 * @a: BTS 1
 * @b: BTS 2
 * Return: 1 if equal otherwise 0
 */

int identicalTree(struct node *a, struct node *b)
{
	if (a == NULL && b == NULL)
		return (1);
	else if (a != NULL && b != NULL)
	{
		return (a->data == b->data &&
				identicalTree(a->left, b->left) &&
				identicalTree(a->right, b->right));
	}
	else
		return (0);
}

/**
 * main -Entry point
 *
 * Return: 1 (success) otherwise 0
 */
int main(void)
{
	struct node *a = NULL;
	struct node *b = NULL;

	a = insertNode(a, 100);
	a = insertNode(a, 50);
	a = insertNode(a, 200);
	a = insertNode(a, 10);

	b = insertNode(b, 100);
	b = insertNode(b, 50);
	b = insertNode(b, 200);
	b = insertNode(b, 10);


	printf("%d\n", identicalTree(a, b));

	return (0);
}
