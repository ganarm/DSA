// Name : Ganesh R Mali (+91-9021817579)
// Floyd-Warshall Algorithm : All Pair Shortest Path Algorithm 

#include<stdio.h>
#define MAX 10
#define INF 9999
int vis[MAX]={0},pred[MAX]={0},distance[MAX]={0},visited[MAX],count,mindistance,nextnode;
int n,i,j,k,G[MAX][MAX]={0},cost[MAX][MAX],v1,v2,wt,s;
void warshall();
void main()
{
     
     printf("\nHOW MANY VERTICES IN A GRAPH : ");
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
          if (G[i][j]==0 && i!=j)
             printf("%4s","I");
          else 
             printf("%4d",G[i][j]);   
          printf("\n");
     }
     warshall();
}
void warshall()
{
     for (i=0;i<n;i++)
         for (j=0;j<n;j++)
         {
             if (G[i][j]==0)
                cost[i][j]=INF;
             else
                cost[i][j]=G[i][j];
         }
     for (k=0;k<n;k++)
         for (i=0;i<n;i++)
             for (j=0;j<n;j++)
                 if (i!=j && cost[i][k]+cost[k][j] < cost[i][j])
                     cost[i][j]=cost[i][k]+cost[k][j]; 
     printf("\nMatrix to for Shortest Path : \n");
     printf("\n ");
     for (i=0;i<n;i++)
         printf("%4d",i+1);
     printf("\n");
     for (i=0;i<n;i++)
     {
         printf("\n%d",i+1);
         for (j=0;j < n;j++)
         {
             if (cost[i][j]==INF)
                printf("%4s","0");
             else
                printf("%4d",cost[i][j]);
         }
         printf("\n");
     }
     for (i=0;i<n;i++)
     {
         for (j=0;j<n;j++)
             if (i!=j)
                if (cost[i][j]!=INF)
                   printf("\nShortest Path from %d TO %d : %d",i+1,j+1,cost[i][j]);
                else
                   printf("\nShortest Path from %d TO %d : I",i+1,j+1);
         printf("\n");
     }
}

