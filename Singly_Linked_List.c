// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Singly Linked List Operations : Create, Display, Insert, Delete, Search, Reverse
// Make Sure Run this code you must need to download singly.h file

#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
// Make Sure Run this code you must need to download singly.h file
void main()
{   
     int c=1;
     while ( c > 0 && c < 9)
     {     
           printf("\n\n\n\n OPERATIONS ON SSL : ");
           printf("\n1 : Create a Singly Linked List.");
           printf("\n2 : Display a SLL.");
           printf("\n3 : Insert a SLL.");
           printf("\n4 : Delete by Position.");
           printf("\n5 : Delete by Value.");
           printf("\n6 : Search NODE by value.");
           printf("\n7 : Reverse SLL.");
           printf("\n8 : Exit.");
           printf("\nEnter Operation You Want To Perform : ");
           scanf("%d",&c);
           switch (c)
           { 
                  case 1 : create();
                           break;
                  case 2 : if ( head==NULL)
                              printf("SLL Is Empty.");
                           else
                           display();
                           break;
                  case 3 : if ( head==NULL)
                              printf("SLL Is Empty.");
                           else
                           {
                              printf("\nEnter The Position : ");
                              scanf("%d",&pos);
                              if ( pos < 1 || pos >n+1 )
                              printf("\nINVALID POSITION.");
                              else
                              insert(pos);
                           }
                           break;
                  case 4 : if ( head==NULL)
                              printf("SLL Is Empty.");
                           else
                           {
                               printf("\nEnter The Position : ");
                               scanf("%d",&pos);
                               if ( pos < 1 || pos > n)
                               printf("\nINVALID POSITION.");
                               else
                               dltp(pos);
                           }
                           break;
                  case 5 : if ( head==NULL)
                               printf("\nERROR......SLL Is Empty.");
                           else
                           {
                               printf("\nEnter The Value : ");
                               scanf("%d",&val);
                               dltv(val);
                           }
                          break;
                 case 6 : if ( head==NULL)
                               printf("\nERROR......SLL Is Empty You Not Search Any node.");
                           else
                           {
                               printf("\nEnter The Value : ");
                               scanf("%d",&val);
                               search(val);
                           }
                          break;
                 case 7 : if ( head==NULL)
                              printf("\nERROR......SLL Is Empty.");
                          else
                              reverse();
                          break;
                        
                 case 8 :
                          return;
                         
                 default :
                          printf("\nERROR.....INVALID OPERATION.\n");
                          break;
                               
                   
           }
           display();
     }
}



/* OUTPUT : 

    OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 1

How Many Nodes You Want to Enter : 3

Enter Integer Data For NODE 1 : 11

Enter Integer Data for NODE 2 : 22

Enter Integer Data for NODE 3 : 33

SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 1

SLL is Already Created.
SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 2

SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3
SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 1

Enter Integer Data : 10

SLL is Given Below : 
head-->10-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 4



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 0

INVALID POSITION.
SLL is Given Below : 
head-->10-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 4



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 6

INVALID POSITION.
SLL is Given Below : 
head-->10-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 4



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 5

Enter Integer Data : 50

SLL is Given Below : 
head-->10-->11-->22-->33-->50-->NULL
NO. OF NODES IN SLL : 5



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 3

Enter The Position : 4

Enter Integer Data : 40

SLL is Given Below : 
head-->10-->11-->22-->40-->33-->50-->NULL
NO. OF NODES IN SLL : 6



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 0

INVALID POSITION.
SLL is Given Below : 
head-->10-->11-->22-->40-->33-->50-->NULL
NO. OF NODES IN SLL : 6



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 7

INVALID POSITION.
SLL is Given Below : 
head-->10-->11-->22-->40-->33-->50-->NULL
NO. OF NODES IN SLL : 6



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 1

SLL is Given Below : 
head-->11-->22-->40-->33-->50-->NULL
NO. OF NODES IN SLL : 5



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 5

SLL is Given Below : 
head-->11-->22-->40-->33-->NULL
NO. OF NODES IN SLL : 4



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 4

Enter The Position : 3

SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 6

Enter The Value : 22

22 present at 2 position.
SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 6

Enter The Value : 77

77 NOT present in Given List.
SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 7

SLL is Given Below : 
head-->33-->22-->11-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 7

SLL is Given Below : 
head-->11-->22-->33-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 5

Enter The Value : 33

SLL is Given Below : 
head-->11-->22-->NULL
NO. OF NODES IN SLL : 3



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 5

Enter The Value : 55

Error.....55 is NOT Present In Given SLL.
SLL is Given Below : 
head-->11-->22-->NULL
NO. OF NODES IN SLL : 2



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 5

Enter The Value : 11

SLL is Given Below : 
head-->22-->NULL
NO. OF NODES IN SLL : 2



 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 5

Enter The Value : 22

SLL Is Empty.




 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 2
SLL Is Empty.
SLL Is Empty.




 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 5

ERROR......SLL Is Empty.
SLL Is Empty.




 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 4
SLL Is Empty.
SLL Is Empty.




 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 6

ERROR......SLL Is Empty You Not Search Any node.
SLL Is Empty.




 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 7

ERROR......SLL Is Empty.
SLL Is Empty.




 OPERATIONS ON SSL : 
1 : Create a Singly Linked List.
2 : Display a SLL.
3 : Insert a SLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse SLL.
8 : Exit.
Enter Operation You Want To Perform : 8
sy4@pc34:~/DS_SEM_III_4/Assignment 4$ 

*/



























