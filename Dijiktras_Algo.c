// Name : Ganesh R Mali (+91-9021817579)
// Dijikstras Algorithm : Single Source Shortest Path Algorithm 
#include<stdio.h>
#define MAX 10
#define INF 99999
int vis[MAX]={0},pred[MAX]={0},distance[MAX]={0},visited[MAX],count,mindistance,nextnode;
int n,i,j,G[MAX][MAX]={0},cost[MAX][MAX],v1,v2,wt,s;
void dis();
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
     printf("\nEnter start Vertex :");
     scanf("%d",&s);
     dis();
}
void dis()
{
     for (i=0;i<n;i++)
         for (j=0;j < n;j++)
              if (G[i][j]==0)
                 cost[i][j]=INF;
              else
                 cost[i][j]=G[i][j];
     for (i=0;i<n;i++)
     {
         distance[i]=cost[s-1][i];
         pred[i]=s-1;
         visited[i]=0;
     }  
     distance[s-1]=0;
     visited[s-1]=1;
     count=1;   
     while ( count < n-1 )
     {
           mindistance=INF;
           for (i=0;i<n;i++)
               if (distance[i] < mindistance && !visited[i])
               {
                  mindistance=distance[i];
                  nextnode=i;      
               }
           visited[nextnode]=1;
           for (i=0;i<n;i++)
               if (!visited[i])
                  if ( mindistance+cost[nextnode][i] < distance[i] )
                  {
                     distance[i]=mindistance+cost[nextnode][i];
                     pred[i]=nextnode;
                  
                  }
           count++;
     }
     for (i=0;i<n;i++)
          printf("\nShortest Path from %d TO %d : %d",s,i+1,distance[i]);
     printf("\n\n");
}
/*
HOW MANTY VERTICES IN A GRAPH : 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT :  1 2

ENTER WEIGHT BET 1 and 2 : 10

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 5

ENTER WEIGHT BET 2 and 5 : 1

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 3

ENTER WEIGHT BET 1 and 3 : 6

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 3 4

ENTER WEIGHT BET 3 and 4 : 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 4 5

ENTER WEIGHT BET 4 and 5 : 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 4

ENTER WEIGHT BET 2 and 4 : 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 4 1

ENTER WEIGHT BET 4 and 1 : 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

ADJACENCY MATRIX OF A GRAPH : 

    1   2   3   4   5

1   0  10   6   0   0

2   0   0   0   3   1

3   0   0   0   5   0

4   4   0   0   0   2

5   0   0   0   0   0

Enter start Vertex :1

Shortest Path from 1 TO 1 : 0
Shortest Path from 1 TO 2 : 10
Shortest Path from 1 TO 3 : 6
Shortest Path from 1 TO 4 : 11
Shortest Path from 1 TO 5 : 11

sy4@pc39:~/DC_SEM_IV_35/ASS_6$ ./a.out

HOW MANTY VERTICES IN A GRAPH : 1 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 10

PLZ ENTER VALID EDGE : 
ENTER WEIGHT BET 2 and 10 : 1 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 6

PLZ ENTER VALID EDGE : 
ENTER WEIGHT BET 3 and 6 : ^Z 
[1]+  Stopped                 ./a.out
sy4@pc39:~/DC_SEM_IV_35/ASS_6$ cc a1.c
sy4@pc39:~/DC_SEM_IV_35/ASS_6$ ./a.out

HOW MANTY VERTICES IN A GRAPH : 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 2

ENTER WEIGHT BET 1 and 2 : 10

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 3

ENTER WEIGHT BET 1 and 3 : 6

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 4

ENTER WEIGHT BET 2 and 4 : 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 5

ENTER WEIGHT BET 2 and 5 : 1

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 3 4

ENTER WEIGHT BET 3 and 4 : 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 4 1

ENTER WEIGHT BET 4 and 1 : 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 4 5

ENTER WEIGHT BET 4 and 5 : 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

ADJACENCY MATRIX OF A GRAPH : 

    1   2   3   4   5

1   0  10   6   0   0

2   0   0   0   3   1

3   0   0   0   5   0

4   4   0   0   0   2

5   0   0   0   0   0

Enter start Vertex :2

Shortest Path from 2 TO 1 : 7
Shortest Path from 2 TO 2 : 0
Shortest Path from 2 TO 3 : 13
Shortest Path from 2 TO 4 : 3
Shortest Path from 2 TO 5 : 1
*/
