// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Doubly Linked List Operations 
// This file contain all functions that are used in Doubly_Linked_List.c file 
// This is program with .h file

#include<stdio.h>
#include<stdlib.h>
struct node 
{  
      int data;
      struct node *next,*prev;
}*startl=NULL,*startr=NULL,*temp,*newnode,*t,*t1,*t2;
void create();
void display();
void insert(int);
void dltp(int);
void dltv(int);
void search(int);
void reverse();
int n,pos,val;
   
void create()
{
     int i;
     printf("\nHow Many Nodes You Want to Enter IN DLL : ");
     scanf("%d",&n);
     if (n<1)
        printf("\nLINKED LIST MUST HAVE ATLEAST ONE NODE.");
     else
        for (i=1;i<=n;i++)
        {
            newnode=malloc(sizeof(struct node));
            printf("\nEnter Integer Data For NODE %d: ",i);
            scanf("%d",&newnode->data);
            if (i==1)
               startl=startr=temp=newnode;
            else
            {   
                temp->next=newnode;
                newnode->prev=temp;
                temp=temp->next;
            }
            startr=temp;
            startl->prev=NULL;
            startr->next=NULL;
        }
}
 
void display()
{       
     printf("\nDoubly Linked List From Left To Right :");
     temp=startl;
     printf("\nSTARTL-->");
     while ( temp!= NULL )
     {
           printf("%d-->",temp->data);
           temp=temp->next;
     }
     printf("NULL");
     printf("\nDoubly Linked List From Right To Left :");
     temp=startr;
     printf("\nSTARTR-->");
     while ( temp!= NULL )
     {
           printf("%d-->",temp->data);
           temp=temp->prev;
     }
      printf("NULL");
      printf("\nNO. OF NODES IN DLL : %d",n);
    
}

void insert(int p)
{  
     int i;
     newnode=malloc(sizeof(struct node));
     printf("\nEnter Integer Data : ");
     scanf("%d",&newnode->data);
     if (p==1)
     {  
        newnode->prev=NULL;    
        if (startl==startr)
        {
           startl=startr=newnode;
           startl->next=NULL;
        }   
        else
        {   
            newnode->next=startl;
            startl->prev=newnode;
            startl=newnode;
        }   
     }
     else
     { 
        for(i=1,temp=startl;i<pos-1;temp=temp->next,i++);
           newnode->next=temp->next;
           temp->next=newnode;
           newnode->prev=temp;
           if (temp==startr)
              startr=newnode;
           else
              newnode->next->prev=newnode;
     }
     n++;
}

void dltp(int p)
{
     int i;
     if (p==1)
     {  
         
         if (startl==startr)
         {  
            startl=startr=NULL;
         }
         else
         {
            temp=startl;
            startl=temp->next;
            startl->prev=NULL;
         }
     }
     else
     {
        for (i=1,temp=startl;i<pos-1;i++,temp=temp->next);
        t=temp->next;
        temp->next=t->next;
        if (t==startr)
           startr=temp;
        else
           t->next->prev=temp;
     }
   
     n--;
}

void search(int val)
{    int i;
     for (i=1,temp=startl;temp!=NULL;temp=temp->next,i++)
         if (temp->data==val)
         {    
            printf("\n%d present at %d position from Left to Right.",val,i);
            printf("\n%d present at %d position from Right to Left.",val, n-i+1);
            return;
         }
    printf("\n%d Is NOT present in Doubly Linked List.",val);
}

void dltv(int val)
{    
     for (temp=startl;temp!= NULL;temp=temp->next)
     {
         if (temp->data==val)           
            break;
         t=temp;
     }    
     if (temp==NULL)
     {  
         printf("\n%d NOT Present In Doubly Linked List",val);
         return;
     } 
     if ( temp==startl && startr==startl )
     {
        startr=startl=NULL;
     }
     else
     {
        if (temp==startl)
        {
            startl=temp->next;
            startl->prev=NULL;
        }
        else 
           if (temp==startr) 
           {
              t->next=NULL;
              startr=t;
           }
           else
           {
              t->next=temp->next;
              temp->next->prev=t;
           }
     }
     n--; 
}
       
void reverse()
{    
     
     temp=startl;
     t1=temp->next;
     t2=t1->next;
     while ( t1->next!=NULL)
     {
           t1->next=temp;
           temp=t1;
           t1=t2;
           t2=t2->next;
     }
     t1->next=temp;
     startl->next=NULL;
     startl=t1;
     
     
     temp=startr;
     t1=temp->prev;
     t2=t1->prev;
     while ( t1->prev!=NULL)
     {
           t1->prev=temp;
           temp=t1;
           t1=t2;
           t2=t2->prev;
     }
     t1->prev=temp;
     startr->prev=NULL;
     startr=t1;
}

/* DELETE BY VALUE USING WHILE LOOP : 
void dltv(int val)
{    
     t=NULL;
     temp=startl;
     while ( temp!= NULL )
     {
           if (temp->data==val)
           {  
              
              if(temp==startl && startr==startl)
                 startr=startl=NULL;
              else
              {
                 if (temp==startl)
                 {
                    startl=temp->next;
                    startl->prev=NULL;
                 }
                 else if (temp=startr) 
                 {
                         t->next=NULL;
                         startr=t;
                 }
                 else
                 {
                    t->next=temp->next;
                    temp->next->prev=t;
                 }
               }
               n--;
               return;
           }
           t=temp;
           temp=temp->next;
      }
      printf("\nError.....%d is NOT Present In Given SLL.",val); 
}   
*/

/* OUTPUT :
sy4@pc36:~/DS_SEM_III_4/Assignment 5$ 
sy4@pc36:~/DS_SEM_III_4/Assignment 5$ ./a.out




 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 1

How Many Nodes You Want to Enter IN DLL : 0

LINKED LIST MUST HAVE ATLEAST ONE NODE.
Doubly Linked List is Empty



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 1

How Many Nodes You Want to Enter IN DLL : 3

Enter Integer Data For NODE 1: 11

Enter Integer Data For NODE 2: 22

Enter Integer Data For NODE 3: 33

Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 1

Doubly Linked List is Already Created.
Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 2

Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3
Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 0

ERROR......INVALID POSITION.
Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 5

ERROR......INVALID POSITION.
Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 1

Enter Integer Data : 10

Doubly Linked List From Left To Right :
STARTL-->10-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->10-->NULL
NO. OF NODES IN DLL : 4



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 3

Enter Integer Data : 30

Doubly Linked List From Left To Right :
STARTL-->10-->11-->30-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->30-->11-->10-->NULL
NO. OF NODES IN DLL : 5



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 6

Enter Integer Data : 60

Doubly Linked List From Left To Right :
STARTL-->10-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->10-->NULL
NO. OF NODES IN DLL : 6



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 6

Enter The Value To Be Search In List : 33

33 present at 5 position.
Doubly Linked List From Left To Right :
STARTL-->10-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->10-->NULL
NO. OF NODES IN DLL : 6



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 6

Enter The Value To Be Search In List : 70

70 Is NOT present in Doubly Linked List.
Doubly Linked List From Left To Right :
STARTL-->10-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->10-->NULL
NO. OF NODES IN DLL : 6



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 6

Enter The Value To Be Search In List : 10

10 present at 1 position.
Doubly Linked List From Left To Right :
STARTL-->10-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->10-->NULL
NO. OF NODES IN DLL : 6



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 7

Doubly Linked List From Left To Right :
STARTL-->60-->33-->22-->30-->11-->10-->NULL
Doubly Linked List From Right To Left :
STARTR-->10-->11-->30-->22-->33-->60-->NULL
NO. OF NODES IN DLL : 6



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 7

Doubly Linked List From Left To Right :
STARTL-->10-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->10-->NULL
NO. OF NODES IN DLL : 6



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 1

Doubly Linked List From Left To Right :
STARTL-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->NULL
NO. OF NODES IN DLL : 5



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 0

ERROR....INVALID POSITION.
Doubly Linked List From Left To Right :
STARTL-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->NULL
NO. OF NODES IN DLL : 5



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 6

ERROR....INVALID POSITION.
Doubly Linked List From Left To Right :
STARTL-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->NULL
NO. OF NODES IN DLL : 5



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 
6

Enter The Value To Be Search In List : 33

33 present at 4 position.
Doubly Linked List From Left To Right :
STARTL-->11-->30-->22-->33-->60-->NULL
Doubly Linked List From Right To Left :
STARTR-->60-->33-->22-->30-->11-->NULL
NO. OF NODES IN DLL : 5



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 5

Doubly Linked List From Left To Right :
STARTL-->11-->30-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->30-->11-->NULL
NO. OF NODES IN DLL : 4



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 2

Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 2

Doubly Linked List From Left To Right :
STARTL-->11-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->11-->NULL
NO. OF NODES IN DLL : 2



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 2

Doubly Linked List From Left To Right :
STARTL-->11-->NULL
Doubly Linked List From Right To Left :
STARTR-->11-->NULL
NO. OF NODES IN DLL : 1



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 1

Doubly Linked List is Empty



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 4
Doubly Linked List Is Empty.
Doubly Linked List is Empty



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 1

How Many Nodes You Want to Enter IN DLL : 3

Enter Integer Data For NODE 1: 11

Enter Integer Data For NODE 2: 22

Enter Integer Data For NODE 3: 33

Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 3



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 5

Enter The Value : 22

 4
Doubly Linked List From Left To Right :
STARTL-->11-->33-->NULL
Doubly Linked List From Right To Left :
STARTR-->33-->11-->NULL
NO. OF NODES IN DLL : 2



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 5

Enter The Value : 33

 3
Doubly Linked List From Left To Right :
STARTL-->11-->NULL
Doubly Linked List From Right To Left :
STARTR-->11-->NULL
NO. OF NODES IN DLL : 1



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 
5

Enter The Value : 11

 1
Doubly Linked List is Empty



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 5
Doubly Linked List Is Empty.
Doubly Linked List is Empty



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 8
sy4@pc36:~/DS_SEM_III_4/Assignment 5$ cc ass5a1.c
sy4@pc36:~/DS_SEM_III_4/Assignment 5$ ./a.out




 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 1

How Many Nodes You Want to Enter IN DLL : 5

Enter Integer Data For NODE 1: 11

Enter Integer Data For NODE 2: 22

Enter Integer Data For NODE 3: 33

Enter Integer Data For NODE 4: 44

Enter Integer Data For NODE 5: 55

Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->44-->55-->NULL
Doubly Linked List From Right To Left :
STARTR-->55-->44-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 5



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 5

Enter The Value : 77

77 NOT Present In Doubly Linked List
Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->44-->55-->NULL
Doubly Linked List From Right To Left :
STARTR-->55-->44-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 5



 OPERATIONS ON SSL : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 6

Enter The Value To Be Search In List : 44

44 present at 4 position from Left to Right.
44 present at 2 position from Right to Left.
Doubly Linked List From Left To Right :
STARTL-->11-->22-->33-->44-->55-->NULL
Doubly Linked List From Right To Left :
STARTR-->55-->44-->33-->22-->11-->NULL
NO. OF NODES IN DLL : 5
*/





















