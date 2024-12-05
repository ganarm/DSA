// Name : Ganesh Rajendra Mali 
// Assignment 2 (set A) 
// Q.1 Bubble Sort
#include<stdio.h>
#define max 10
int main()
{ 
    void bubble_sort(int[],int);
    int a[max],n,i;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        a[i]=rand()%100;
    printf("\n%d Random Elements of Array  : ",n);
    for (i=0;i<n;i++)
        printf("\t%d",a[i]);
    bubble_sort(a,n);
    printf("\nArray in Ascending Order : ");
    for (i=0;i<n;i++)
        printf("\t%d",a[i]);
    printf("\n");    
}
void bubble_sort(int a[max],int n)
{    int i,j,temp;
     for (i=0;i<n-1;i++)
         for (j=0;j<n-1-i;j++)
             if (a[j]>a[j+1])
             {  
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
             }   
        
     
}
  /* OUTPUT : 
  sy4@pc46:~/DS_SEM_III_4/Assign2$ ./a.out

Enter Size Of Array : 5

5 Random Elements of Array  : 	83	86	77	15	93
Array in Ascending Order : 	15	77	83	86	93
sy4@pc46:~/DS_SEM_III_4/Assign2$ 
*/
  
     
     
     
     
     
     
     
     

