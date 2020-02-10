#include<stdio.h>
#define max 10
int a[max],f,r;
f=-1,r=-1;
void add()
{   int item;
    if((f==0&&r==max-1)||(r+1==f))
    printf("circular queue full\n ");
    else
    {
        printf("enter the element to be added \n");
        scanf("%d",&item);
        if(r==-1)
            f=r=0;
        else if(r==max-1)
            r=0;
        else
        r++;
       a[r]=item;

    }
}
void del()
{   int x;
    if((f==-1)&&(r==-1))
      {
        printf("queue empty\n");
        return;
      }
    else
    {
        x=a[f];
        if(f==r)
            f=r=-1;
        else if(f==max-1)
            f=0;
        else
            f++;

        printf("element deleted %d\n",x);
    }
}
void display()
{
    int i,j;
    if(f==-1&&r==-1)
        printf("queue empty \n");
    else if(f>r)
    {

        for(i=f;i<max;i++)
         printf("%d\t",a[i]);
        for(j=0;j<=r;j++)
         printf("%d\t",a[i]);
    }
    else
    {
        for(i=f;i<=r;i++)
            printf("%d\t",a[i]);

    }
    printf("\n");
}
 void main()
 {
     int c;
     void add();
     void del();
     void display();


         while(1)
         { printf("enter ur choice \n"); //1 for enqueue 2 for deleting 3 for status of queue
           scanf("%d",&c);
           switch(c)
           {
         case 1:
         add();
         break;
         case 2:
          del();
          break;
         case 3:
            {
         printf("status of circular queue\n");
        display();
        break;
             }
         default:
            printf("wrong choice\n");
         }
 }
 }
