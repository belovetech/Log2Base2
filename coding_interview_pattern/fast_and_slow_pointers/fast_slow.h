#ifndef _FAST_SLOW_H_
#define _FAST_SLOW_H_
#include <stdio.h>
#include <stdlib.h>
/*
** Definition for a linked list node.
*/
typedef struct node
{
   int data;
   struct node *next;
}lNode;

void printNode(lNode *head);
int hasLoop(lNode *head);
int getMiddleNode(lNode *head);
int loopLength(lNode *head);
int calculateLoopLength(lNode *slow);
lNode *findLoopStart(lNode *head);
lNode *getLoopStart(lNode *head, lNode *slow, lNode *fast);

#endif /*_FAST_SLOW_H_*/
