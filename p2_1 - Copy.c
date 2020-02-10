#include<stdio.h>
#define N 5
void push(int a[],int *top,int x)
{
    if(*top==N-1)
        printf("overflow");
    else
    {
        *top=*top+1;
        a[*top]=x;
        printf("%d \n",a[*top]);
    }
}
void pop(int a[],int *top)
{
    if(*top==-1)
    printf("underflow");
    else
    {   int x;
        x=a[*top];
        printf("%d \n",x);
    }
}
void peep(int a[],int top,int i)
{
    int t;
    t=top-i;
    printf("%d\n",a[t]);
}

int change(int a[],int top,int i,int x)
{
    int t;
    t=top-i;
    a[t]=x;
    printf("%d\n",a[t]);

}
void main()

{
    int a[5],i,top=-1,c,r,d,e;
    A:
    printf("enter 1 to push,2 to pop,3 to peep,4 to change \n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("enter no. to be pushed\n");
        scanf("%d",&r);
        push(a,&top,r);
        goto A;
case 2:
        pop(a,&top);
        goto A;
    case 3:
        peep(a,top,3);
        goto A;
    case 4:
    printf("enter new no. to replace and index at which to replace\n");
    scanf("%d %d",&d,&e);
        change(a,top,e,d);
           goto A;
    }

}
