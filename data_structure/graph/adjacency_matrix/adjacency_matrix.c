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
    if (arr[src][des] == 1)
        return (1);

    return (0);
}

/**
 * printHasEdge - Prints the result of hasEdge function
 */

void printHasEdge(int value)
{
    if (value)
        printf("Edge found\n");
    else
        printf("No edge found\n");
}

void removeEdge(int arr[][v], int src, int des)
{
    arr[src][des] = 0;
}

/**
 * main: Implentation of direct adjacency matrix
 *
 * @Return: 0 always (success)
 */
int main(void)
{
    int adjMatrix[v][v];

    init(adjMatrix);

    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 2);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 4);

    printHasEdge(hasEdge(adjMatrix, 0, 1));
    printAdjMatrix(adjMatrix);

    removeEdge(adjMatrix, 0, 1);
    printHasEdge(hasEdge(adjMatrix, 0, 1));
    return (0);
}