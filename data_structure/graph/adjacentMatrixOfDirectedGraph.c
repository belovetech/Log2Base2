#include <stdio.h>

#define V 5

/**
 * initAdjMatrix - Initialize adjacency matrix to zero (0)
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 */
void initAdjMatrix(int adjMatrix[][V])
{
    for (int i = 0; i < V; i++) 
        for (int j = 0; j < V; j++)
            adjMatrix[i][j] = 0;
}

/**
 * printAdjMatrix - Print adjacency matrix edges
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 */

void printAdjMatrix(int adjMatrix[][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) 
            printf("%d ", adjMatrix[i][j]);
        putchar('\n');
    }
}

/**
 * addEdge - Add edges to adjacency matrix (directed graph)
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to add edges
 * @dest: Column in adjacency matrix add edges
 */
void addEdge(int adjMatrix[][V], int src, int dest)
{
    adjMatrix[src][dest] = 1;
}


/**
 * hashEdge - Check edges in adjacency matrix
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to check
 * @dest: Column in adjacency matrix to check
 */
int hashEdge(int adjMatrix[][V], int src, int dest)
{
    if (adjMatrix[src][dest] == 1) return (1);
    return (0);
}


/**
 * removeEdge - Remove edges from adjacency matrix
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to check
 * @dest: Column in adjacency matrix to check
 */
void removeEdge(int adjMatrix[][V], int src, int dest)
{
    adjMatrix[src][dest] = 0;
}

int main(void)
{
    int adjMatrix[V][V];
    
    initAdjMatrix(adjMatrix);
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 2);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 4);
    // removeEdges(adjMatrix, 3, 4);
    printAdjMatrix(adjMatrix);
    
    return (0);
}