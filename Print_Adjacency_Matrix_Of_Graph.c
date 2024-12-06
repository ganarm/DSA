// Name : Ganesh R Mali (+91-9021817579)
// Print ADJACENCY MATRIX OF GRAPH
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n,i,j,G[10][10]={0},v1,v2,max_edge;
     printf("\nHOW MANTY VERTICES IN A GRAPH : ");
     scanf("%d",&n);
     max_edge=n*(n-1);
     for (i=0;i<max_edge;i++)
     {
         printf("\nENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER(0,0) FOR EXIT : ");
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
    printf("\nADJACENCY MATRIX OF GRAPH : \n");
    for (i=0;i<n;i++)
    {
         for (j=0;j<n;j++)
         {
             printf("%d ",G[i][j]);
         }   
         printf("\n");
    }
}