#include <stdio.h>
#include <stdlib.h>

void bfs(int v, int m[v][v], int source)
{
    int queue[10],front=0,rear=0,u,i;
    int visited[10];
    for(i=0;i<v;i++)
        visited[i]=0;
    queue[rear]=source;
    visited[source]=1;

    while(front<=rear)
    {
        u=queue[front];
        printf("%d\t",u);
        front++;

        for(i=0;i<v;i++)
        {
            if(m[u][i]==1&&visited[i]==0)
            {
                rear++;
                queue[rear]=i;
                visited[i]=1;
            }
        }
    }
}

int main()
{
    int v,i,j;
    printf("enter number of vertices\n");
    scanf("%d",&v);
    int m[v][v];
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            scanf("%d",&m[i][j]);
    }
    int source=4;
    bfs(v,m,source);
    return 0;
}
