#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *front = NULL, *rear = NULL;

/**
 * enqueue - Adds element to the queue
 * @val: Value to add
 */
void enqueue(int val)
{
	struct node *newNode;

	newNode =  malloc(sizeof(struct node));
	if (newNode == NULL)
		return;

	newNode->data = val;
	newNode->next = NULL;

	if (front == NULL && rear == NULL)
		front = rear = newNode;
	else
		rear->next = newNode;
		rear = newNode;
}


/**
 * dequeue - Removes element from the queue
 *
 * Return: -1 if list is empty otherwise the popped element
 */
void dequeue()
{
	struct node *temp;

	if (front == NULL)
		printf("Queue is empty. Unable to perform dequeue\n");
	else
	{
	    printf("Dequeue element = %d\n", front->data);

		temp = front;
		front = front->next;

		if (front == NULL)
		    rear = NULL;

		free(temp);
	}
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
    dequeue();
    dequeue();
    dequeue();
    dequeue();

	return (0);
}