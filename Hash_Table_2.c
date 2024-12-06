// Name : Ganesh R Mali (+91-9021817579)
// Operations on Hash Table
#include<stdio.h>
#include<stdlib.h>
#define HS 10
int hash[HS]={0},n,ind,v,i,r;
void insert(int);
int hashfunction(int);
void search(int);
void display();
void dlt(int);
void main()
{   
     int op;
     while (1)
     {     
           printf("\n\n***Operations on Hash Table***");
           printf("\n1 : Insert an Item in the HASH TABLE.");
           printf("\n2 : Delete an Item from the HASH TABLE.");
           printf("\n3 : Search an Item from the HASH TABLE.");
           printf("\n4 : Display the HASH TABLE.");
           printf("\n5 : EXIT.");
           printf("\nChoose the Operation to be Performed on HASH TABLE : ");
           scanf("%d",&op);
           switch (op)
           { 
                 
                  case 1 : printf("\nEnter The Value : ");
                           scanf("%d",&v);
                           insert(v);
                           display();
                           break;
                  case 2 : printf("\nEnter The Value to be Deleted : ");
                           scanf("%d",&v);
                           dlt(v);
                           display();
                           break;
                  case 3 : printf("\nEnter The Value to be Searched : ");
                           scanf("%d",&v);
                           search(v);
                           break;
                  case 4 : display();
                           break;
                  case 5 : exit(0);
                           break;
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
     }
}
void insert(int x)
{
         ind=hashfunction(x);
         if (hash[ind]==0)
         {
            hash[ind]=v;
            printf("Data Inserted Successfully at %d index of HASH TABLE.",ind);
         }
         else
         {
            printf("Collision has occured.");
            for (i=1;i<HS;i++)
            {
                 r=(ind+(i*i))%HS;
                 if (hash[r]==0)
                 {
                    hash[r]=v;
                    printf("\nData Inserted Successfully at %d index of HASH TABLE using Quadratic Probing Methode.",r);
                    break;
                 }
            
            }
         }
}
int hashfunction(int x)
{
    return(x%HS);    
}
void display()
{
     printf("\nElements in the Hash Table.");
     printf("\n Index : Element");
     for (i=0;i<HS;i++)
     {
         if (hash[i]==0)
            printf("\n%4d   :   --",i);
         else
            printf("\n%4d   :   %d",i,hash[i]);
     }
}
void dlt(int x)
{
     for (i=0;i<HS;i++)
         if (hash[i]==x)
         {
            hash[i]=0;
            printf("\n%d is Deleted Successfully from %d Index.",x,i);
            return;
         }
     printf("%d is NOT in the Hash Table.",x);
}
void search(int x)
{
     for (i=0;i<HS;i++)
         if (hash[i]==x)
         {
            printf("\n%d is  from %d Index.",x,i);
            return;
         }
     printf("%d is NOT in the Hash Table.",x);
}




