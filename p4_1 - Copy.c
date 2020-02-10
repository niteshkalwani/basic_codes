#include<stdio.h>
# define max 10
int a[10];
int front,rear;
front=-1,rear=-1;
void add(int item)
{
         if(rear==max-1)
        printf("queue full");
         else
       {      if(rear==-1)
               front=rear=0;
              else
                rear++;
              a[rear]=item;

    }
}
void del()
{
    int data;
    if((front==-1)&&(rear==-1))
        printf("queue empty\n");
   else
    data=a[front];
    if(front==rear)
        front=rear=-1;
    else
    front++;
    printf("element deleted %d\n",data);
}
void display()
{   int i;
       if((front==-1)&&(rear==-1))
        printf("queue empty\n");
    else
    {
    for(i=front;i<=rear;i++)
        printf("%d\n",a[i]);
}}

void main()
{ int c,item;
void add(int);
void del();
void display();
 while(1)
 {
printf("enter ur choice\n"); //1 for enqueue 2 for deleting 3 for status of queue
  scanf("%d",&c);
         if(c==1)
          {printf("enter element to be added \n");
      scanf("%d",&item);
      add(item);

  }
  if(c==2)
    del();
     if(c==3)
     {
         printf("status of queue\n");
      display();
}}}
