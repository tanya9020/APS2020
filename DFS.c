#include <stdio.h>
#include <stdlib.h>

/*int m[10][10]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,0,1},{0,1,0,0,0},{0,1,1,0,0}};*/
//int v=5;
//int source=4;
int visited[10];

void dfs(int v,int m[v][v] ,int source)
{
   int i;

   visited[source]=1;

   for(i=0;i<v;i++)
   {
       if(m[source][i]==1&&visited[i]==0)
       {
           printf("%d\t",i);
           dfs(v,m,i);
       }
   }
}

int main()
{   int v,source;
    /*
    int i;
    for(i=0;i<v;i++)
        visited[i]=0;

    printf("the dfs traversal is ");
    printf("%d\t",source);
    dfs(m,v,source);
    return 0;*/
    printf("enter number of vertices\n");
    scanf("%d",&v);
    int m[v][v];
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            scanf("%d",&m[i][j]);
    }
    printf("enter source\n");
    scanf("%d",&source);
    //int source=4;
    printf("th dfs traversal is \n");
    printf("%d\t", source);
    dfs(v,m,source);
    return 0;
}
