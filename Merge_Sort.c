// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Assignment 3 (set A)
// Q.1 Merge Sort
#include<stdio.h>
#define max 10
void merge(int[],int,int,int);
void m_s(int[],int,int);
int main()
{   
    int a[20],i,n;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    printf("\nEnter %d integers : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);    
    m_s(a,0,n-1);
    printf("\nArray in Ascending Order : ");
    for (i=0;i<n;i++)
        printf(" %d ",a[i]);    
    printf("\n");
}
void m_s(int a[],int l,int h)
{    int mid;
     if (l<h)
     {
        mid=(l+h)/2;
        m_s(a,l,mid);
        m_s(a,mid+1,h);
        merge(a,l,mid,h);
     }
}
void merge(int a[],int l,int mid,int h)
{   
    int i=l,j=mid+1,k=l,b[20];
    while (i<=mid && j<=h)
          if (a[i]<=a[j])
          {  
             b[k]=a[i];
             i++;
             k++;
          }    
          else
          {  
             b[k]=a[j];
             j++;
             k++; 
          }
    while (j<=h)
    {     
          b[k]=a[j];
          j++;
          k++;
    }

    while (i<=mid)
    {    
          b[k]=a[i];
          i++;
          k++; 
    }
    for (k=l;k<=h;k++)
         a[k]=b[k];
}
      
/*
OUTPUT :
  Enter Size Of Array : 8

Enter 8 integers : 3 2 1 4 5 6 0 1

Array in Ascending Order :  0  1  1  2  3  4  5  6 

*/    
    
    
    
    
    
    
    

     
