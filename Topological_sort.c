// Name : Ganesh R Mali (+91-9021817579)
// Topological Sort
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int q[MAX],front=-1,rear=-1,vis[MAX]={0};
void degree(int [MAX][MAX],int);
void add(int);
int delt();
void main()
{
     int n,i,j,G[MAX][MAX]={0},v1,v2,max_edge,in[MAX]={0};
     printf("\nHOW MANTY VERTICES IN A ACYCLIC DIAGRAPH : ");
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
            G[v1-1][v2-1]=1;
     }
     printf("\nADJACENCY MATRIX OF A ACYCLIC DIAGRAPH : \n");
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
     for (i=0;i<n;i++)
     {
          for (j=0;j<n;j++)
          {
              if(G[j][i]==1)
                in[i]++;
          }
     }
     printf("\nVertex   Indgree \n");
     for (i=0;i<n;i++)
     { 
         printf("  %d\t",i+1);
         printf("    %d\t",in[i]);
         printf("\n");
     }
     printf("\nTopological Sort : ");
     for (i=0;i<n;i++)
         if (in[i]==0)
         {
            add(i);
            vis[i]=1;  
         }
     while (front!=rear)
     {
           int r=delt();
           printf("%d ",r+1);
           for (i=0;i<n;i++)
               if (G[r][i]==1 && vis[i]==0)
               {
                  in[i]--;
                  add(i);
                  vis[i]=1;
               }
     }
}
void add(int v)
{
     rear++;
     q[rear]=v; 
}
int delt()
{
    front++;
    return (q[front]);
}

/*
OUTPUT :
HOW MANTY VERTICES IN A ACYCLIC DIAGRAPH : 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 4 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 4 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 4 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

ADJACENCY MATRIX OF A ACYCLIC DIAGRAPH : 

    1   2   3   4   5

1   0   1   1   0   1

2   0   0   0   0   0

3   0   0   0   0   0

4   0   1   1   0   1

5   0   0   0   0   0

Vertex   Indgree 
  1	    0	
  2	    2	
  3	    2	
  4	    0	
  5	    2	

Topological Sort : 1 4 2 3 5


*/

























/*void degree(int G[][MAX] , int n)
{
     int i,j,in[MAX]={0},out[MAX]={0};
     for (i=0;i<n;i++)
     {
         for (j=0;i<n;j++)
         {
             if(G[i][j]==1)
               out[i]++;
             if(G[j][i]==1)
               in[i]++;
         }
         printf("\n Indegree Of %d  is : %d ",i+1,in[i]);
         printf("\n Outdegree of %d is : %d ",i+1,out[i]);
         printf("\n Total Degree of %d is : %d ",i+1,in[i]+out[i]);
     }
}*/





