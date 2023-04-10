#ifndef _FAST_SLOW_H_
#define _FAST_SLOW_H_
#include <stdio.h>
#include <stdlib.h>
/*
** Definition for a linked list node.
*/
struct node
{
   int data;
   struct node *next;
};

void printNode(struct node *head);
int hasLoop(struct node *head);
int getMiddleNode(struct node *head);
int loopLength(struct node *head);
int calculateLoopLength(struct node *slow);

#endif /*_FAST_SLOW_H_*/
