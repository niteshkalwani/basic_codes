#include<stdio.h>
#define N 5
void push(int a[],int *top,int x)       // push operation in stack
{
    if(*top==N-1)
        printf("overflow");
    else
    {
        *top=*top+1;
        a[*top]=x;
        printf("TOP OF STACK %d \n",a[*top]);

    }
}
void undo(int a[],int *top,int b[],int *top1)    // POP OPERATION IN STACK
{
    if(*top==-1)
    printf("underflow");
    else
    {   int x;
        x=a[*top];
        *top=*top-1;
        *top1=*top1+1;
        b[*top1]=x;
        printf("TOP OF STACK %d \n",a[*top]);

    }
}
 void redo(int a[],int *top,int b[],int *top1)     // PUSH OPERATION IN STACK
 {
     int x;
     x=b[*top1];
     *top1=*top1-1;
     *top=*top+1;
        a[*top]=x;
        printf(" TOP OF STACK %d \n",a[*top]);

 }

void main()

{
    int a[5],i,top=-1,c,r,d,e,top1=-1;
    int b[5];
    A:
    printf("enter 1 to push,2 to undo,3 to redo  \n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("enter no. to be added\n");
        scanf("%d",&r);
        push(a,&top,r);
        goto A;
    case 2:
        undo(a,&top,b,&top1);
        goto A;
    case 3:
        redo(a,&top,b,&top1);
        goto A;


    }
}

