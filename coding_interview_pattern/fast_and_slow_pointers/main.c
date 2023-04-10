#include "fast_slow.h"

int main(void)
{
    struct node *h1 = malloc(sizeof(struct node));
    struct node *h2 = malloc(sizeof(struct node));
    struct node *h3 = malloc(sizeof(struct node));
    struct node *h4 = malloc(sizeof(struct node));
    struct node *h5 = malloc(sizeof(struct node));

    h1->data = 10;
    h2->data = 20;
    h3->data = 30;
    h4->data = 40;
    h5->data = 50;

    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h5;
    h5->next = h4;

    // printNode(h1);
    // printf("%d\n", getMiddleNode(h1));

    // int res = hasLoop(h1);
    // if (res == 1)
    //     printf("Linked list has a loop\n");
    // else
    //     printf("Linked list does not has a loop\n");

    // printf("%d\n", loopLength(h1));
    lNode *res = findLoopStart(h1);
    printf("%d\n", res->data);

    return (0);
}
