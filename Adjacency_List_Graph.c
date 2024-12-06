// Name : Ganesh R Mali (+91-9021817579)
// Adjacency List of a Graph
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct node
{
       int v;
       struct node *next;
}*nw;
void readgraph (struct node*[]);
void printgraph (struct node*[]);
void inout (struct node*[]);
struct node *last=NULL,*temp=NULL;
int n,i,j;
void main()
{
     printf("\nHOW MANTY VERTICES IN A DIAGRAPH : ");
     scanf("%d",&n);
     struct node * adj[n];
     for (i=0;i<n;i++)
         adj[i]=NULL;
     readgraph(adj);
     printgraph(adj);
     printf("\n");
     inout(adj);
     printf("\n");
     
}
void readgraph (struct node *adj[])
{
          int v1,v2;
          for (i=0;;i++)
          {
              printf("\nENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : ");
              scanf("%d%d",&v1,&v2);
              if (v1<0 || v2<0 || v1>n || v2>n)
              {
                 printf("\nPLZ ENTER VALID EDGE!!");
                 i--;
              }
              if (v1==0 && v2==0)
                 break;
              for (j=0;j<n;j++)
                   if (j==v1-1) //1==v1-1
                   {
                      nw=malloc(sizeof(struct node));
                      nw->v=v2;
                      nw->next=NULL;
                      if (adj[j]==NULL)
                         adj[j]=nw;
                      else
                      {
                         last=adj[j];
                         while (last->next!=NULL)
                               last=last->next;
                         last->next=nw;
                      }
                   }
          }
}
void printgraph(struct node *adj[])
{
    printf("\nAdjacency List of a Graph : ");
    for (i=0;i<n;i++)
    {    
        temp=adj[i];
        printf("\n%d : ",i+1);
        while (temp!=NULL)
        {
              printf("%d --> ",temp->v);   
              temp=temp->next;
        }
        printf("NULL");
    }
}
void inout (struct node*adj[])
{
     int in=0,out=0;
     printf("\nVertex  Indegree  Outdegree  TotalDegree");
     for (i=0;i<n;i++)
     {   
        printf("\n  %d ",i+1); 
        in=out=0;
        temp=adj[i];
        while (temp!=NULL)
        {
              out++;
              temp=temp->next;
        }
        for (j=0;j<n;j++)
        { 
            temp=adj[j];
            while (temp!=NULL)
            {
              if (temp->v==i+1)
                 in++;
              temp=temp->next;
            } 
        } 
        printf("       %d",in);
        printf("         %d",out);
        printf("           %d",in+out);
     }       
}

/*
OUTPUT :

HOW MANTY VERTICES IN A DIAGRAPH : 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

Adjacency List of a Graph : 
1 : 2 --> 3 --> 4 --> NULL
2 : NULL
3 : NULL
4 : NULL

Vertex  Indegree  Outdegree  TotalDegree
  1        0         3           3
  2        1         0           1
  3        1         0           1
  4        1         0           1

*/








 
