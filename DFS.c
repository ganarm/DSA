// Name : Ganesh R Mali (Contact : +91-9021817579)
// DFS (Depth First Search)
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void DFS();
int pop();
int n,i,j,G[MAX][MAX]={0},v1,v2,max_edge,vis[20]={0};
void main()
{
     int v;
     printf("\nHOW MANTY VERTICES IN A UNDIRECTED GRAPH : ");
     scanf("%d",&n);
     max_edge=n*(n-1);
     for (i=0;i<max_edge;i++)
     {
         printf("\nENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : ");
         scanf("%d%d",&v1,&v2);
         if (v1<0 || v2<0 || v1>n || v2>n)
         {
            printf("\nPLZ ENTER VALID EDGE : ");
            i--;
         }
         if (v1==0 && v2==0)
            break;
         else
         {
            G[v1-1][v2-1]=1;
            G[v2-1][v1-1]=1;
         }
    }
    printf("\nADJACENCY MATRIX OF UNDIRECTED GRAPH : \n ");
    for (i=0;i<n;i++)
        printf("%4d",i+1);
    for (i=0;i<n;i++)
    {    
         printf("\n%d",i+1);
         for (j=0;j<n;j++)   
             printf("%4d",G[i][j]);   
         printf("\n");
    }
    printf("\nEnter start vertex for DFS Traversal : ");
    scanf("%d",&v);
    printf("\nThe DFS Travesal Of undirected graph : ");
    DFS(v-1);
}
void DFS (int x)
{
     vis[x]=1;
     printf(" %d",x+1);
     for (i=0;i<n;i++)
          if (G[x][i]==1 && vis[i]==0)
             DFS(i);
}

