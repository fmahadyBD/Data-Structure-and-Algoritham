#include <stdio.h>
int a[20][20], q[20], visited[20], n;

void dfs(int v)
{
    int i;
    for (i = 0; i < n; i++)
    { // check the vertex in the graph
        if (a[v][i] != 0 && visited[i] == 0)
        {                   // adjacence to v and not visited
            visited[i] = 1; // make the vertex visited
            printf("%d \t", i);
            dfs(i);
        }
    }
}

int main()
{
    int v, i, j;
    printf("Enter the number of vertices:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        visited[i] = 0; // make all visited is 0
    }
    printf("Enter the graph data matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]); // input the graph.
        }
    }
    printf("Enter the starting vertex\n");
    scanf("%d", &v);
    printf("The DFS Traversal is\n");
    visited[v] = 1; // make the vertex is visited

    dfs(v);
}
