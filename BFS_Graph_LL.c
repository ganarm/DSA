// Name : Ganesh R Mali (+91-9021817579)
// BFS OF Graph Implemented using Linked List
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
void BFS (struct node*[]);
void DFS (struct node*[],int);
void add(int);
int delt();
struct node *last=NULL,*temp=NULL;
int n,i,j,front=-1,rear=-1,q[10],visited[MAX]={0};
void main()
{
     int start;
     printf("\nHOW MANTY VERTICES IN A DIAGRAPH : ");
     scanf("%d",&n);
     struct node * adj[n];
     for (i=0;i<n;i++)
     {
         adj[i]=NULL;
         visited[i]=0;
     }
     readgraph(adj);
     printgraph(adj);
     printf("\n");
     BFS(adj);
     printf("\nEnter start vertex for DFS Traversal : ");
     scanf("%d",&start);    
     DFS(adj,start-1);
}
void readgraph (struct node *adj[])
{
     int v1,v2;
     for (i=0;;i++)
     {
         printf("\nENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : ");
         scanf("%d%d",&v1,&v2);
         if (v1<=0 || v2<=0 || v1>n || v2>n)
         {
             printf("\nPLZ ENTER VALID EDGE!!");
             i--;
         }
         if (v1==0 && v2==0) 
             break;
         for (j=0;j<n;j++)
             if (j==v1-1)
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
void BFS (struct node *adj[])
{
     int vis[20]={0},p,r;
     printf("\nEnter start vertex for BFS Traversal of Directed Graph : ");
     scanf("%d",&p);
     printf("\nThe BFS Travesal : ");
     vis[p-1]=1;
     add(p);
     while (front!=rear)
     { 
           p=delt();
           printf(" %d",p);
           for (temp=adj[p-1];temp!=NULL;temp=temp->next)
           {
               r=temp->v;
               if (vis[r-1]==0)
               {
                   add(r);
                   vis[r-1]=1;
               }
 
           }
      }
      printf("\n");
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
void DFS (struct node*adj[],int start)
{
     visited[start-1]=1;
     printf("%d ",start);
     last=adj[start];
     while (last!=NULL)
     {
           i=last->v;
           if (visited[i-1]==0)
              DFS(adj,last->v);
           last=last->next;
     }
}
     
/*
OUTPUT :
HOW MANTY VERTICES IN A DIAGRAPH : 6

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 1 2

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 3

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 2 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 3 6

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 3 4

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 6 5

ENTER AN EDGE FROM VERTEX V1 TO VERTEX V2,ENTER (0,0) FOR EXIT : 0 0

PLZ ENTER VALID EDGE!!
Adjacency List of a Graph : 
1 : 2 --> NULL
2 : 3 --> 5 --> NULL
3 : 6 --> 4 --> NULL
4 : NULL
5 : NULL
6 : 5 --> NULL

Enter start vertex for BFS Traversal of Directed Graph : 2

The BFS Travesal :  2 3 5 6 4 
*/








 
