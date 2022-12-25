#include "stack.h"

#define V 5 /*Define the number of vertices*/

/**
 * DFS - Depth first search graph traversal 
 * 
 * @arr: Adajcency matrix representation of graph
 * @source: First vertice in the graph
 */
void DFS(int arr[][V], int source)
{
    int isVisited[V] = {0}; // Initialize isVisited array to 0
    int index;
    
    // Push the first node into stack and mark it as visited
    push(source);
    isVisited[source] = 1;
    
    while (!isStackEmpty())
    {
        // Pop the first node in the stack and print
        int node = pop(); 
        printf("Visited Node: %d\n", node);
        
        // Check its neigbhors and mark them as visited
        for (index = 0; index < V; index++)
        {
            if (arr[node][index] == 1 && isVisited[index] == 0)
            {
                // Push its neigbhors into stack and mark it as visited
                push(index);
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
    
    DFS(arr, 0);
    
    return (0);
}