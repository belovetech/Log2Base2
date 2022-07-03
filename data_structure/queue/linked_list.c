#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;

/**
 * enqueue - Adds element to the queue
 * @val: Value to add
 */

void enqueue(int val)
{
	struct node *newNode, *temp;

	newNode = malloc(sizeof(struct node));
	if (newNode == NULL)
		return;

	newNode->data = val;
	newNode->next = NULL;

	if (head == NULL)
		head = newNode;
	else
	{
		temp = head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
	}
}

/**
 * dequeue - Removes element from the queue
 *
 * Return: -1 if list is empty otherwise the popped element
 */

int dequeue()
{
	int data;

	if (head ==  NULL)
	{
		printf("Stack Underflow: ");
		return (-1);
	}
	else
	{
		data =  head->data;
		struct node *temp = head;
		head = head->next;
		free(temp);
	}
	return (data);
}



/**
 * main -  enqueue and dequeue some element from the queue
 *
 * Return: 0 always
 */

int main(void)
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());

	return (0);
}