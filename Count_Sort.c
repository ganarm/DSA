// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Assignment 3 (set A)
// Q.3 Count Sort
#include<stdio.h>
void c_s(int[],int);
int main()
{
    int a[20],n,i;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    printf("\nEnter %d integers : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    c_s(a,n);
    printf("\nArray in Ascending Order : ");
    for (i=0;i<n;i++)
        printf(" %d ",a[i]);
    printf("\n");    
}
void c_s(int a[],int n)
{    
     int count[20],max,i,j;
     max=a[0];
     for (i=0;i<n;i++)
         if (a[i]>max)
            max=a[i];
     for (j=0;j<=max;j++)
         count[j]=0;
     for (j=0;j<n;j++)
         ++count[a[j]];
     for (j=1;j<=max;j++)
         count[j]=count[j]+count[j-1];
     for (i=n-1,j=max;i>=0 && j>=0;)
         if (count[j]!=count[j-1])
         {  
            a[i]=j;
            count[j]--;
            i--;
         }
         else
             j--;
 }

     
/*
OUTPUT :
Enter Size Of Array : 8

Enter 8 integers : 3 2 1 4 5 6 0 1

Array in Ascending Order :  0  1  1  2  3  4  5  6 
*/  
     
