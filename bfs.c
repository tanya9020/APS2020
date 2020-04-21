#include <stdio.h>
#include <stdlib.h>

void bfs(int m[][10], int source, int v)
{
    int queue[v],u,rear=0,front=0,i;
    int visited[v];

    for(i=0;i<v;i++)
    {
      visited[i]=0;
        }

    queue[rear]=source;
    visited[source]=1;
    printf("bfs traversal is\n");

    while(front<=rear)
    {
      u=queue[front];
      printf("%d",u);
      front++;
      for(i=0;i<v;i++)
      {

         if(m[u][i] && !visited[i])
        {

            visited[i]=1;
            rear++;
            queue[rear]=i;
        }
      }

    }
}

int main()
{
    int i,j,v;
    printf("enter the number of vertices\n");
    scanf("%d",&v);


    int m[v][v];
    int source=0;

    printf("enter the adjacency matrix\n");
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
           scanf("%d",&m[i][j]);

        }
    }

    printf("enter source\n");
    scanf("%d",&source);

    bfs(m,source,v);
    return 0;
}
