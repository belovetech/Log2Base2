#include "queue.h"

#define V 5 // Define size of vertices

/**
 * BFS - Breadth first search graph traversal 
 * 
 * @arr: Adajcency matrix representation of graph
 * @source: First vertice in the graph
 */
void BFS(int arr[][V], int source)
{
    // Initialize isVisited array to 0
    int isVisited[V] = {0};
    int index;
    
    // Enqueue the first node into queue and mark it as visited
    enqueue(source);
    isVisited[source] = 1;
    
    while (!isQueueEmpty())
    {
        // Dequeue the first node in the queue and print
        int node = dequeue();
        printf("Visited Node: %d\n", node);
        
        // Check its neigbhors and mark them as visited
        for (index = 0; index < V; index++)
        {
            if (arr[node][index] == 1 && isVisited[index] == 0)
            {
                // Enqueue its neigbhors into queue and mark it as visited
                enqueue(index);
                isVisited[index] = 1;
            }
        }
    }    
}


int main(void)
{
    int arr[V][V] = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 1, 0},
        {1, 1, 1, 0, 1},
        {0, 1, 0, 1, 0}
    };
    
    BFS(arr, 0);
    
    return (0);
}