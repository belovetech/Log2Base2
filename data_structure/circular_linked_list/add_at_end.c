#include "lists.h"
/**
 * insert_at_end1 - Insert a node at the end of circular singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
s_lists *insert_at_end1(s_lists **head, int val)
{
    s_lists *newNode;
    
    newNode = malloc(sizeof(s_lists));
    if (newNode == NULL)
        return (NULL);
    
    newNode->data = val;
    
    if (*head == NULL)
    {
        newNode->next = newNode;
        *head = newNode;
    }
    else
    {
        s_lists *tmp = *head;
        while (tmp->next != *head)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
        newNode->next = *head;
    }
    return (newNode);
}
/**
 * insert_at_end1 - Inserting a node at the end of circular doubly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
d_lists *insert_at_end2(d_lists **head, int val)
{
    d_lists *newNode;

    newNode = malloc(sizeof(d_lists));
    if (newNode == NULL)
        return (NULL);

    newNode->data =  val;

    if (*head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    }
    else
    {
        d_lists *tmp = *head;
        while (tmp->next != *head)
        {
            tmp = tmp->next;
        }
        tmp->next =  newNode;
        newNode->prev = tmp;
        newNode->next = *head;
    }
    return (newNode);
}