#include <stdio.h>
int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;

void bsf(int v)
{
    for (i = 0; i < n; i++)
    {
        if (a[v][i] && !visited[i])
        {

            q[++r] = i;
        }
        if (f <= r)
        {
            visited[q[f]] = 1;
            bsf(q[++f]);
        }
    }
}

int main()
{
    int v;
    printf("Enter the number of verticies:\n");
    scanf("%d", &n);
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

    for (i = 0; i < n; i++)
    {

        q[i] = 0;
        visited[i] = 0; // make all visited is 0
    }
    bsf(v);
 
    printf("The reachebal node are:\n");
    for (i = 0; i < n; i++)
    {
        if (visited[i])
        {
            printf("%d\t", i);
        }
    }
}

