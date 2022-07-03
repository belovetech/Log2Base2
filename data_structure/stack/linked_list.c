#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

/**
 * push - Pushes element into the stack
 * @val: Value to push
 */

void push(int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));
    if (newNode == NULL)
        return;

    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

/**
 * pop - Removes element from the stack
 *
 * Return: -1 if list is empty otherwise the popped element
 */

int pop()
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
 * print_stack - Prints elements of the stack
 * @val: Value to push
 */

void print_stack(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

/**
 * main -  Pushes and Pop some element from the stack
 *
 * Return: 0 always
 */

int main(void)
{
    push(10);
    push(20);
    push(30);
    print_stack(head);
    printf("\n");
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());

    return (0);
}