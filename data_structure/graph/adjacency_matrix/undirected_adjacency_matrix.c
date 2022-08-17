#include <stdio.h>

#define v 5

/**
 * init - Initializes adjacency matrix to zero (0)
 *
 * @arr: Adjacency matrix array
 */

void init(int arr[][v])
{
    int i, j;

    for (i = 0; i < v; i++)
        for (j = 0; j < v; j++)
            arr[i][j] = 0;
}

/**
 * addEdge - Adds edge of adjacency matrix
 *
 * @arr: Adjacency matrix array
 * @src: source of edge in adjacency matrix
 * @des: destination edge in adjacency matrix
 */

void addEdge(int arr[][v], int src, int des)
{
    arr[src][des] = 1;
    arr[des][src] = 1;
}

/**
 * printAdjMatrix - Prints adjacency matrix
 *
 * @arr: Adjacency matrix array
 */

void printAdjMatrix(int arr[][v])
{
    int i, j;

    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

/**
 * hasEdge - Checks if edge available in adjacency matrix
 *
 * @arr: Adjacency matrix array
 * @src: source of edge in adjacency matrix
 * @des: destination edge in adjacency matrix
 *
 * @Return: 1 if found otherwise 0
 */
int hasEdge(int arr[][v], int src, int des)
{
    if ((arr[src][des] == 1) || (arr[des][src] == 1))
        return (1);

    return (0);
}

/**
 * printHasEdge - Prints the result of hasEdge function
 */

void printHasEdge(int value)
{
    if (value)
        printf("Edge Found\n");
    else
        printf("Edge Not Found\n");
}

void removeEdge(int arr[][v], int src, int des)
{
    arr[src][des] = 0;
    arr[des][src] = 0;
}

/**
 * main: Implentation of undireced adjacency matrix
 *
 * @Return: 0 always (success)
 */
int main(void)
{
    int adjMatrix[v][v];

    init(adjMatrix);

    printf("Adding Edge From 0 to 1\n");
    addEdge(adjMatrix,0,1);
    printf("Adding Edge From 0 to 2\n");
    addEdge(adjMatrix,0,2);
    printf("Adding Edge From 0 to 3\n");
    addEdge(adjMatrix,0,3);
    printf("Adding Edge From 1 to 3\n");
    addEdge(adjMatrix,1,3);
    printf("Adding Edge From 1 to 4\n");
    addEdge(adjMatrix,1,4);
    printf("Adding Edge From 2 to 3\n");
    addEdge(adjMatrix,2,3);
    printf("Adding Edge From 3 to 4\n");
    addEdge(adjMatrix,3,4);

    printf("Adjacency Matrix Representation of the Graph\n");
    printAdjMatrix(adjMatrix);

    printf("Removing Edge(0, 2)..\n");
    removeEdge(adjMatrix,0,2);

    printf("Adjacency Matrix Representation of the Graph\n");
    printAdjMatrix(adjMatrix);

    printf("(0,1) has Edge?\n");
    printHasEdge(hasEdge(adjMatrix,0, 1));
    
    printf("(0,2) has Edge?\n");
    printHasEdge(hasEdge(adjMatrix,0, 2));
 
    return (0);
}