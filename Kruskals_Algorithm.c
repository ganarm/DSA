// Name : Ganesh R Mali (+91-9021817579)
// Kruskal's Algorithm
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define INF 99999
int vis[MAX]={0},selected[MAX]={0},parent[MAX]={0};
int n,i,j,G[MAX][MAX]={0},v1,v2,wt,s;
void krus();
int find(int);
void uni(int,int);
void main()
{
     
     printf("\nHOW MANTY VERTICES IN A GRAPH : ");
     scanf("%d",&n);
     while (1)
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
         printf("\nENTER WEIGHT BET %d and %d : ",v1,v2);
         scanf("%d",&wt);
         G[v1-1][v2-1]=wt;
         G[v2-1][v1-1]=wt;
     }
     printf("\nADJACENCY MATRIX OF A GRAPH : \n");
     printf("\n ");
     for (i=0;i<n;i++)
         printf("%4d",i+1);
     printf("\n");
     for (i=0;i<n;i++)
     {    
          printf("\n%d",i+1);
          for (j=0;j<n;j++)   
              printf("%4d",G[i][j]);   
          printf("\n");
     }
     for (i=0;i < n;i++)
         for (j=0;j < n;j++)
             if (G[i][j]==0)
                G[i][j]=INF;
     printf("\nThe Edges of Minimum Spanning Tree\n");
     krus();
}
void krus()
{
     int no_edge=1,min,a,b,u,v,sum=0;
     selected[s-1]=1;
     printf("\nEdge  :  Weight\n");
     while (no_edge < n)
     {
           for (i=0,min=INF;i<n;i++)
               for (j=0;j < n;j++)
                   if (min > G[i][j])
                   {
                       min=G[i][j];
                       u=a=i;
                       v=b=j;
                   }
          u=find(a);
          v=find(b);
          if (u!=v)
          {
             uni(u,v);
             printf("%d-->%d :    %d\n",a+1,b+1,min);
             no_edge++;
             sum=sum+min;
          }
          G[a][b]=G[b][a]=INF;
      }
      printf("\nMinimum cost of spanning Tree : %d \n",sum);
}
int find (int x)
{
    while (parent[x]>0)
          x=parent[x];
    return x;
}
void uni(int x,int y)
{
     parent[y]=x;
}

