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
 * addEdge - Add edges to adjacency matrix (undirected graph)
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to add edges
 * @dest: Column in adjacency matrix add edges
 */
void addEdge(int adjMatrix[][V], int src, int dest)
{
    adjMatrix[src][dest] = 1;
    adjMatrix[dest][src] = 1;
}

/**
 * hasEdge - Check edges in adjacency matrix
 * 
 * @adjMatrix: Two dimensional array representing vectics and edges
 * @src: Row in adjacency matrix to check
 * @dest: Column in adjacency matrix to check
 */
int hasEdge(int adjMatrix[][V], int src, int dest)
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
    adjMatrix[dest][src] = 0;
}

int main(void)
{
    int adjMatrix[V][V];
    
    initAdjMatrix(adjMatrix);
    printf("Adding Edge From 0 to 1\n");
    addEdge(adjMatrix, 0, 1);
    printf("Adding Edge From 0 to 2\n");
    addEdge(adjMatrix, 0, 2);
    printf("Adding Edge From 0 to 3\n");
    addEdge(adjMatrix, 0, 3);
    printf("Adding Edge From 1 to 3\n");
    addEdge(adjMatrix, 1, 3);
    printf("Adding Edge From 1 to 4\n");
    addEdge(adjMatrix, 1, 4);
    printf("Adding Edge From 2 to 3\n");
    addEdge(adjMatrix, 2, 3);
    printf("Adding Edge From 3 to 4\n");
    addEdge(adjMatrix, 3, 4);
    // removeEdges(adjMatrix, 3, 4);
    
    printf("Adjacency Matrix Representation of the Graph\n");
    printAdjMatrix(adjMatrix);
    
    printf("Removing Edge(0, 2)..\n");
    removeEdge(adjMatrix,0,2);

    printf("Adjacency Matrix Representation of the Graph\n");
    printAdjMatrix(adjMatrix);

    printf("(0,1) has Edge?\n");
    if(hasEdge(adjMatrix,0, 1) == 1)
        printf("Edge Found\n");
    else
        printf("Edge Not Found\n");

    printf("(0,2) has Edge?\n");
    if(hasEdge(adjMatrix,0, 2) == 1)
        printf("Edge Found\n");
    else
        printf("Edge Not Found\n");
    
    return (0);
}