// Name : Ganesh R Mali (Contact : +91-9021817579)
// Indegree - Outdegree of Graph
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void degree(int [MAX][MAX],int);
void main()
{
     int n,i,j,G[MAX][MAX]={0},v1,v2,max_edge,in[MAX]={0},out[MAX]={0};
     printf("\nHOW MANY VERTICES IN A GRAPH : ");
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
    printf("\nADJACENCY MATRIX OF GRAPH : \n ");
    for (i=0;i<n;i++)
        printf("%4d",i+1);
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
             if(G[i][j]==1)
               out[i]++;
             if(G[j][i]==1)
               in[i]++;
         }
    }
    printf("\nVertex   Indgree  Outdegree TotalDegree\n");
    for (i=0;i<n;i++)
    { 
        printf("  %d\t",i+1);
        printf("    %d\t",in[i]);
        printf("      %d\t",out[i]);
        printf("         %d\t",in[i]+out[i]);
        printf("\n");
    }
        
}




























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





