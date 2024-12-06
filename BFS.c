// Name : Ganesh R Mali (Contact : +91-9021817579)
// BFS (Breath First Search) using Queue
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void BFS();
int delt();
void add(int);
int front=-1,rear=-1;
int q[MAX];
int n,i,j,G[MAX][MAX]={0},v1,v2,max_edge;
void main()
{
     printf("\nHOW MANTY VERTICES IN A GRAPH : ");
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
    BFS();
}
void BFS()
{
     int v;
     int vis[20]={0};
     printf("\nEnter start vertex for BFS Traversal : ");
     scanf("%d",&v);
     printf("\nThe BFS Travesal : ");
     vis[v-1]=1;
     add(v);
     while (front!=rear)
     { 
           v=delt();
           printf(" %d",v);
           for (i=0;i<n;i++)
               if (G[v-1][i]!=0 && vis[i]==0)
               {
                   add(i+1);
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
HOW MANTY VERTICES IN A GRAPH : 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 1

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 3 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

ADJACENCY MATRIX OF GRAPH : 
    1   2   3   4
1   0   0   1   0

2   1   0   0   1

3   0   0   0   1

4   0   0   0   0

Enter start vertex for BFS Traversal : 1

The BFS Travesal :  1 3 4sy4@pc39:~/DC_SEM_IV_35/ASS_3$ cc a3.c
sy4@pc39:~/DC_SEM_IV_35/ASS_3$ ./a.out

HOW MANTY VERTICES IN A GRAPH : 4   

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 3 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

ADJACENCY MATRIX OF GRAPH : 
    1   2   3   4
1   0   1   1   0

2   1   0   0   1

3   1   0   0   1

4   0   1   1   0

Enter start vertex for BFS Traversal : 1

The BFS Travesal :  1 2 3 4sy4@pc39:~/DC_SEM_IV_35/ASS_3$ ./a.out

HOW MANTY VERTICES IN A GRAPH : 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 3 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

ADJACENCY MATRIX OF GRAPH : 
    1   2   3   4
1   0   1   1   0

2   1   0   0   0

3   1   0   0   1

4   0   0   1   0

Enter start vertex for BFS Traversal : 2

The BFS Travesal :  2 1 3 4sy4@pc39:~/DC_SEM_IV_35/ASS_3$ ./a.out
*/






