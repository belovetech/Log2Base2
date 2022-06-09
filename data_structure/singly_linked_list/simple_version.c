#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val)
{
    //Write your code here
    struct node *newNode;
    newNode = malloc(sizeof(struct node));

    newNode->data = val;
    newNode->next = head;

    head = newNode;

}

void addLast(int val)
{
    //Write your code here
    struct node *newNode;

    newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
        head = newNode;
    else
    {
        struct node *lastNode = head;
        while (lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}


void printList()
{
    struct node *temp = head;

    while(temp != NULL)
    {
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main(void)
{
     addLast(10);
     addLast(20);
     addLast(30);
     addFirst(5);

     printList();
     printf("\n");

     return 0;
}