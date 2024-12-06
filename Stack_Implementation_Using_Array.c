// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Stack Implementation using Array
// Make Sure to run this code Stack_Func_Arr.h also need to download along with this

#include<stdio.h>
#include<stdlib.h>
#include"Stack_Func_Arr.h"
#define MAX 5
void main()
{   
     int op=1,x;
     printf("\n***STACK IMPLEMENTATION USING ARRAY***");
     init();
     while ( op!=6 )
     {     
           printf("\nCHOOSE ONE FROM THE BELOW OPTIONS.");
           printf("\n1 : PUSH.");
           printf("\n2 : POP.");
           printf("\n3 : PEEK.");
           printf("\n4 : ISEMPTY.");
           printf("\n5 : STACK DISPLAY");
           printf("\n6 : EXIT.");
           printf("\nEnter Operation You Want To Perform : ");
           scanf("%d",&op);
           switch (op)
           { 
                  
                  case 1 : if (isFull())
                              printf("\nSTACK IS FULL.");
                           else
                           {
                              printf("\nENTER DATA : ");
                              scanf("%d",&x);
                              push(x);
                           }
                           break;
                  case 2 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                           else
                              pop();
                           break;
                  case 3 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                           else
                              peek();
                           break;
                  case 4 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                           else
                               printf("\nSTACK IS NOT EMPTY.");
                          break;
                  case 5 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                          else
                              display();
                          break;
                  case 6 : exit(0); 
                           break;
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
           if (isEmpty())
               printf("\nSTACK IS Empty.");
           else
              display();
     }
}


/*
OUTPUT :
***STACK IMPLEMENTATION USING ARRAY***
CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 1

ENTER THE NO. OF ELEMENTS IN STACK :2

CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 2

ENTER DATA :11

CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 2

ENTER DATA :22

CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 2

STACK IS FULL.
CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 3

THE POPED ELEMENT IS :22
CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 4

THE TOPMOST ELEMENT IS : 11
CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 5

STACK IS NOT EMPTY.
CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 6

STACK IS NOT FULL.
CHOOSE ONE FROM THE BELOW OPTIONS.
1 : INITIALIZE.
2 : PUSH.
3 : POP.
4 : PEEK.
5 : ISEMPTY.
6 : ISFULL.
7 : EXIT.
Enter Operation You Want To Perform : 7
sy4@pc49:~/DS_SEM_III_4/Assignment 7$ 

*/


















