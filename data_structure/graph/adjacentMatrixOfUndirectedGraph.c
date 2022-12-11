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
 * addEdges - Add edges to adjacency matrix (undirected graph)
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to add edges
 * @dest: Column in adjacency matrix add edges
 */
void addEdges(int adjMatrix[][V], int src, int dest)
{
    adjMatrix[src][dest] = 1;
    adjMatrix[dest][src] = 1;
}

/**
 * hashEdges - Check edges in adjacency matrix
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to check
 * @dest: Column in adjacency matrix to check
 */
int hashEdges(int adjMatrix[][V], int src, int dest)
{
    if (adjMatrix[src][dest] == 1) return (1);
    return (0);
}


/**
 * removeEdges - Remove edges from adjacency matrix
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to check
 * @dest: Column in adjacency matrix to check
 */
void removeEdges(int adjMatrix[][V], int src, int dest)
{
    adjMatrix[src][dest] = 0;
    adjMatrix[dest][src] = 0;
}

int main(void)
{
    int adjMatrix[V][V];
    
    initAdjMatrix(adjMatrix);
    addEdges(adjMatrix, 0, 1);
    addEdges(adjMatrix, 0, 2);
    addEdges(adjMatrix, 0, 3);
    addEdges(adjMatrix, 1, 3);
    addEdges(adjMatrix, 1, 4);
    addEdges(adjMatrix, 2, 3);
    addEdges(adjMatrix, 3, 4);
    // removeEdges(adjMatrix, 3, 4);
    printAdjMatrix(adjMatrix);
    
    return (0);
}