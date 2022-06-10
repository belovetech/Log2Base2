#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};

int main()
{
   
    struct node *head, *mid, *last;

    head = malloc(sizeof(struct node));
    mid  = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head->data = 10;
    mid->data = 20;
    last->data = 30;

    //Implement task 1 here
    head->prev = NULL;
    head->next = mid;
    mid->prev = head;
    mid->next = last;
    last->prev = mid;
    last->next = NULL;

    //Implement task 2 here
    struct node *temp;
    
    temp = last;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    
    return 0;
}