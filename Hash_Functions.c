// Name : Ganesh R Mali (+91-9021817579)
// Hash Functions
#include<stdio.h>
#include<stdlib.h>
int n,ind,v,i,HS,key,j,sqr,p,sum,rem;
void dv();
void ms();
void fm();
void display(int[]);
void main()
{   
     int op;
     while (1)
     {     
           printf("\n\n***Hash Functions***");
           printf("\n1 : Division Method.");
           printf("\n2 : Mid Square Method.");
           printf("\n3 : Digit Folding Methode.");
           printf("\n4 : Exit.");
           printf("\nChoose the Function For Inserting Values in Hash Table : ");
           scanf("%d",&op);
           switch (op)
           { 
                 
                  case 1 : dv();
                           break;
                  case 2 : ms();
                           break;
                  case 3 : fm();
                           break;
                  case 4 : exit(0);
                           break;
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
     }
}
void dv()
{
    
     printf("\nEnter Size of HASH TABLE : ");
     scanf("%d",&HS);
     int hash[HS];
     printf("\nEnter Key Element for Division Function : ");
     scanf("%d",&key);
     printf("\nHow Many Elements You Want to Insert : ");
     scanf("%d",&n);
     
     for (i=0;i<HS;i++)
         hash[i]=-1;
     display(hash);
     for (i=0;i<n;i++)
     {
         printf("\n\nEnter The Value : ");
         scanf("%d",&v);
         ind=v%key;
         if (hash[ind]==-1)
         {
            hash[ind]=v;
            printf("Data Inserted Successfully at %d index of HASH TABLE.",ind);
         }
         else
            printf("Collision has occured at index %d. hence Data NOT Inserted in HASH TABLE.",ind);
         display(hash);
     }
}
void ms()
{
     printf("\nEnter Size of HASH TABLE : ");
     scanf("%d",&HS);
     int hash[HS];
     printf("\nHow Many Elements You Want to Insert : ");
     scanf("%d",&n);
     for (i=0;i<HS;i++)
         hash[i]=-1;
     display(hash);
     for (i=0;i<n;i++)
     {
         printf("\n\nEnter The Value : ");
         scanf("%d",&v);
         sqr=v*v;
         if (sqr<100)
            sqr=sqr%10;
         else 
            if (sqr<1000)
            {
               sqr=sqr/10;
               sqr=sqr%10;
            }
          else
             if (sqr<10000)
             {
                 sqr=sqr/10;
                 sqr=sqr%100;
             }
                 
        if (hash[sqr]==-1)
         {
            hash[sqr]=v;
            printf("Data Inserted Successfully at %d index of HASH TABLE.",sqr);
         }
         else
            printf("Collision has occured at index %d. hence Data NOT Inserted in HASH TABLE.",sqr);
         display(hash);
     }
}
void display(int hash[])
{
     printf("\n\n**Elements in the Hash Table**");
     printf("\n Index : Element");
     for (j=0;j<HS;j++)
     {
         if (hash[j]==-1)
            printf("\n%4d   :   --",j);
         else
            printf("\n%4d   :   %d",j,hash[j]);
     }
}
void fm()
{
    
     printf("\nEnter Size of HASH TABLE : ");
     scanf("%d",&HS);
     int hash[HS];
     printf("\nHow Many Elements You Want to Insert : ");
     scanf("%d",&n);
     for (i=0;i<HS;i++)
         hash[i]=-1;
     display(hash);
     for (i=0;i<n;i++)
     {
         printf("\n\nEnter The Value : ");
         scanf("%d",&v);
         p=v;
         sum=0;
         while (p!=0)
         {
               rem=p%1000;
               sum=sum+rem;
               p=p/1000;
         }
         sum=sum%10;
         if (hash[sum]==-1)
         {
            hash[sum]=v;
            printf("Data Inserted Successfully at %d index of HASH TABLE.",sum);
         }
         else
            printf("Collision has occured at index %d. hence Data NOT Inserted in HASH TABLE.",sum);
         display(hash);
     }
}



