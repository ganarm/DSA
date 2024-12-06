// Name : Ganesh R Mali (+91-9021817579)
// Operations on Hash Table
#include<stdio.h>
#include<stdlib.h>
#define HS 10
struct node
{
       int data,next;
};
struct node hash[HS];
int n,ind,v,i,temp,j,p;
void insert(int);
int hashfunction(int);
int search(int);
void display();
void dlt(int);
void main()
{   
     int op;
     for (i=0;i<HS;i++)
          hash[i].data=hash[i].next=-1;
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
               /*   case 2 : printf("\nEnter The Value to be Deleted : ");
                           scanf("%d",&v);
                           dlt(v);
                           display();*/
                           break;
                  case 3 : printf("\nEnter The Value to be Searched : ");
                           scanf("%d",&v);
                           p=search(v);
                           if (p==-1)
                              printf("%d is NOT in the Hash Table.",v);
                           else
                              printf("%d is PRESENT in the Hash Table at index %d.",v,p);
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
         int oind;
         oind=temp=ind=hashfunction(x);
         if (hash[ind].data==-1)
         {
            hash[ind].data=v;
            printf("Data Inserted Successfully at %d index of HASH TABLE.",ind);
         }
         else
         {
            if (hash[ind].next==-1 )
            {
               
               while (hash[ind].data!=-1)
               {
                    temp=ind;
                    ind++;
               }     
               hash[ind].data=v;
               printf("\nData Inserted Successfully at %d index of HASH TABLE using Linear Probing Method.",ind);
               hash[oind].next=ind;
                   
            }
            else
              if (hash[ind].data != -1 && hash[ind].next!=-1 )
              { 
                 temp=ind=hash[ind].next;
                 while (hash[ind].next!=-1)
                       temp=ind;
                 while (hash[ind].data!=-1)
                       ind++;   
                 hash[ind].data=v;
                 printf("\nData Inserted Successfully at %d index of HASH TABLE using Linear Probing Method.",ind);
                 hash[temp].next=ind;
                   
            }
         }
}
int hashfunction(int x)
{
    return(x%HS);    
}
void display()
{
     printf("\nElements in the Hash Table :");
     printf("\n Index : Element : Next");
     for (i=0;i<HS;i++)
     {
         printf("\n %d  :  %d  :  %d ",i,hash[i].data,hash[i].next);
       
     }
}
/*void dlt(int x)
{
     for (i=0;i<HS;i++)
         if (hash[i]==x)
         {
            hash[i]=0;
            printf("\n%d is Deleted Successfully from %d Index.",x,i);
            return;
         }
     printf("%d is NOT in the Hash Table.",x);
}*/
int search(int x)
{
     temp=ind=hashfunction(x);
     if (hash[ind].data==-1)
        return (-1);   
     else 
        if (hash[ind].data==x)
           return (ind);  
     else
     {
        while(1)
        {
            temp=ind=hash[ind].next;
            if (hash[ind].data==x)
                return (ind);
            if(hash[ind].data==-1)
                return (-1);
            }
        }
     }




