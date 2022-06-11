#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val)
{
    //Write your code here
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;

    if(head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    }
    else
    {
        struct node *temp = head;
        while (temp != head)
        {
            temp =  temp->next;
        }
        temp->next = newNode;
        temp->prev = newNode;
        newNode->next = head;
        newNode->prev = head;
        head = newNode;
    }
}

void printList()
{
    struct node *temp = head;
    
    if (head == NULL)
        return;

    struct node *tmp = head;

    do
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;

    } while (tmp != head);
    printf("\n");
}

int main()
{
    addFirst(10);
    // addFirst(20);
    addFirst(300);
    
    printList();
}