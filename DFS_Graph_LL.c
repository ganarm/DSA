// Name : Ganesh R Mali (+91-9021817579)
// DFS OF Graph Implemented using Linked List

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
void DFS (struct node*[],int);
struct node *last=NULL,*temp=NULL;
int n,i,j,visited[MAX]={0};
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
     printf("\nEnter start vertex for DFS Traversal : ");
     scanf("%d",&start); 
     printf("\nDFS Traversal : ");   
     DFS(adj,start);
     printf("\n");
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
void DFS (struct node *adj[],int s)
{
     visited[s-1]=1;
     printf("%d ",s);
     struct node * ptr;
     ptr=adj[s-1];
     while (ptr!=NULL)
     {
           i=ptr->v;
           if (visited[i-1]==0)
              DFS(adj,ptr->v);
           ptr=ptr->next;
     }
}



