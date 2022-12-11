#include <stdlib.h>
#include <stdio.h>

#define V 5

struct node {
  int data;
  struct node *next;  
};
struct node *adjList[V];

/**
 * init - Initialize all nodes of vertices to NULL
 */

void init()
{
    for (int i = 0; i < V; i++)
        adjList[i] = NULL;
}

/**
 *  addEdge - Add edge to graph -  O(n)
 * 
 * @src: source of edge
 * @dest destination of edge
 */
void addEdge(int src, int dest)
{
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    if (newNode == NULL) return;
    
    newNode->data = dest;
    newNode->next = NULL;
        
    if (adjList[src] == NULL)
        adjList[src] = newNode;
    else {
        struct node *last = adjList[src];
        
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = newNode;      
    }   
}

/**
 *  addEdge - Add edge to graph -  O(1)
 * 
 * @src: source of edge
 * @dest: destination of edge
 */
void addEdge2(int src, int dest)
{
    struct node *newNode;
    if ((newNode = malloc(sizeof(struct node))) != NULL )
    {
        newNode->data = dest;
        newNode->next = adjList[src];
        adjList[src] = newNode;
    }
}

/**
 *  addEdgeToUndirectedGraph - Add edge to undirected graph
 * 
 * @src: source of edge
 * @dest: destination of edge
 */
void addEdgeToUndirectedGraph(int src, int dest)
{
    struct node *newNode;
    if ((newNode = malloc(sizeof(struct node))) != NULL )
    {
        newNode->data = dest;
        newNode->next = adjList[src];
        adjList[src] = newNode;
    }

    if ((newNode = malloc(sizeof(struct node))) != NULL )
    {
        newNode->data = src;
        newNode->next = adjList[dest];
        adjList[dest] = newNode;
    }
    
}

/**
 * printGraph - Print adjacency List
 */
void printGraph()
{
    for (int i = 0; i < V; i++) {
        struct node *temp = adjList[i];
        
        printf("adjList[%d]->", i);
        while (temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

/**
 * hashEdge - Check edges in adjacency List
 * 
 * @src: source of edge
 * @dest: destination of edge
 */
int hasEdge(int src, int dest)
{
    if (adjList[src] == NULL) return (0);
    
    struct node *temp = adjList[src];
    
    while (temp->next != NULL)
    {
        if (temp->data == dest) return (1);
        else temp = temp->next;
    }
}

/**
 * removeEdge - Remove edges in adjacency List
 * 
 * @src: source of edge
 * @dest: destination of edge
 */
void removeEdge(int src, int dest)
{
    struct node *temp;
    if (adjList[src] == NULL) return;
    
    if (adjList[src]->data == dest)
    {
        temp = adjList[src];
        adjList[src] = temp->next;
        free(temp);
    }
    else
    {
        struct node *current = adjList[src];
        
        while (current->next != NULL)
        {
            if (current->next->data == dest)
            {
                temp = current->next;
                current->next = temp->next;
                free(temp);
                break;
            }
            current = current->next;
        }
        
    }
    
}

int main(void)
{
    init();
    addEdgeToUndirectedGraph(0, 1);
    addEdgeToUndirectedGraph(0, 2);
    addEdgeToUndirectedGraph(0, 3);
    addEdgeToUndirectedGraph(1, 3);
    addEdgeToUndirectedGraph(1, 4);
    addEdgeToUndirectedGraph(2, 3);
    addEdgeToUndirectedGraph(3, 4);
    
    // addEdge2(0, 1);
    // addEdge2(0, 2);
    // addEdge2(0, 3);
    // addEdge2(1, 3);
    // addEdge2(1, 4);
    // addEdge2(2, 3);
    // addEdge2(3, 4);
    
    printf("(Removing Edge (0, 2)...........\n");
    // removeEdge(0, 2);

    printf("Adjacency List Representation of the Graph\n");
    printGraph();
    
    printf("(0,1) has Edge?\n");
    if(hasEdge(0, 1) == 1)
        printf("Edge Found\n");
    else
        printf("Edge Not Found\n");

    printf("(0,4) has Edge?\n");
    if(hasEdge(0, 4) == 1)
        printf("Edge Found\n");
    else
        printf("Edge Not Found\n");
    
    return (0);
}