// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Doubly Linked List Operations : Create, Display, Insert, Delete, Search, Reverse
// Make Sure Run this code you must need to download doubly.h file

#include<stdio.h>
#include<stdlib.h>
#include"doubly.h"
void main()
{   
   int c=1;
   while ( c > 0 && c < 8)
   {     
         printf("\n\n\n\n OPERATIONS ON SSL : ");
         printf("\n1 : Create a Doubly Linked List.");
         printf("\n2 : Display a DLL.");
         printf("\n3 : Insert a DLL.");
         printf("\n4 : Delete by Position.");
         printf("\n5 : Delete by Value.");
         printf("\n6 : Search NODE by value.");
         printf("\n7 : Reverse.");
         printf("\n8 : Exit.");
         printf("\nEnter Operation You Want To Perform : ");
         scanf("%d",&c);
         switch (c)
         { 
                  case 1 : if ( startl!=NULL && startr!=NULL )
                           printf("\nDoubly Linked List is Already Created.");
                           else
                              create();
                           break;
                  case 2 : if ( startl==NULL && startr==NULL )
                              printf("\nDoubly Linked List Is Empty.");
                           else 
                              display();
                           break;
                  case 3 : printf("\nEnter The Position : ");
                           scanf("%d",&pos);
                           if ( pos < 1 || pos > n+1 )
                           printf("\nERROR......INVALID POSITION.");
                           else
                              insert(pos);
                           break;
               case 4 : if ( startl==NULL && startr==NULL)
                           printf("Doubly Linked List Is Empty.");
                        else
                        {
                              printf("\nEnter The Position : ");
                              scanf("%d",&pos);
                              if ( pos < 1 || pos > n)
                              printf("\nERROR....INVALID POSITION.");
                              else
                              dltp(pos);
                        }
                        break;
               case 5 : if (startl==NULL && startr==NULL)
                           printf("Doubly Linked List Is Empty.");
                        else
                        {
                              printf("\nEnter The Value : ");
                              scanf("%d",&val);
                              dltv(val);
                        }
                        break;
               case 6 : if (startl==NULL && startr==NULL)
                           printf("Doubly Linked List Is Empty.");
                        else
                        {
                           printf("\nEnter The Value To Be Search In List : ");
                           scanf("%d",&val);
                           search(val);
                        }
                        break;
               case 7 : if ( startl==NULL && startr==NULL )
                           printf("\nDoubly Linked List is Empty.");
                           else
                           reverse();
                           break;
               case 8 :
                        return;
               default :
                        printf("\nERROR.....INVALID OPERATION.\n");
                        break;
                           
                  
         }
         if ( startl==NULL && startr==NULL )
            printf("\nDoubly Linked List is Empty");
         else 
            display();
   }
}
 
 
















