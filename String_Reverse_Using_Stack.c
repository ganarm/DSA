// Name : Ganesh R Mali (Contact : +91-9021817579)
// Reverse the given string using stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
char stack[MAX];
int top=-1;
char pop();
void push(char);
int main(void)
{
    char str[MAX],ch;
    int i,l;
    printf("\nENTER A STRING : ");
    scanf("%s",&str);
    l=strlen(str);
    for (i=0;i<l;i++)
        push(str[i]);
    printf("\nREVERSED STRING : ");
    for (i=0;i<l;i++)
    {
         ch=pop();
         printf("%c",ch);
    }
    printf("\n\n");
}

void push(char c)
{
     top++;
     stack[top]=c;
}

char pop()
{    char c;
     c=stack[top];
     top--;
     return c;
 }

 
