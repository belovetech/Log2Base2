#include "lists.h"

/**
 * insert_at_beginning1 - Inserts a node in a beginning of circular doubly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */

s_lists *insert_at_beginning1(s_lists **head, int val)
{
    s_lists *newNode;

    newNode = malloc(sizeof(s_lists));
    newNode->data =  val;

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
        *head =  newNode;
    }

    return (newNode);
}

/**
 * insert_at_beginning - Inserting a node in a beginning of circular singly linked list
 * @head: pointer to pointer
 * @val: data to add.
 *
 * Return: pointer to new node
 */
d_lists *insert_at_beginning2(d_lists **head, int val)
{
    d_lists *newNode;

    newNode = malloc(sizeof(d_lists));
    newNode->data =  val;

    if (*head == NULL)
    {
        newNode->prev = newNode;
        newNode->next = newNode;
        *head = newNode;
    }
    else
    {
        d_lists *tmp = *head;
        while (tmp->next != *head)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
        newNode->next = *head;
        newNode->prev = tmp;
        *head =  newNode;
    }

    return (newNode);
}