// Name : Ganesh Rajendra Mali 
// Assignment 3 (set A)
// Q.2 Quick Sort
#include<stdio.h>
#define max 10
void q_s(int[],int,int);
int part(int[],int,int);
int main()
{
    int a[max],n,i;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    printf("\nEnter %d integers : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    q_s(a,0,n-1);
    printf("\nArray in Ascending Order : ");
    for (i=0;i<n;i++)
        printf("\t%d",a[i]);
    printf("\n");    
}
void q_s(int a[],int lb,int ub)
{    int loc;
     if (lb<ub)
     {
        loc=part(a,lb,ub);
        q_s(a,lb,loc-1);
        q_s(a,loc+1,ub);
     }
}
int part(int a[],int lb,int ub)
{   
    int start=lb,end=ub,pivot=a[lb],temp;
    while (start<end)
    {     while (a[start]<=pivot)
                 start++;
          while (a[end]>pivot)
                 end--;
          if (start<end)
          {  
             temp=a[start];
             a[start]=a[end];
             a[end]=temp;
          }
    }  
    a[lb]=a[end];
    a[end]=pivot;
    return end; 
}    


/*
OUTPUT :
Enter Size Of Array : 8

Enter 8 integers : 3 2 1 4 5 6 0 1

Array in Ascending Order :  0  1  1  2  3  4  5  6 
*/  




    

     
