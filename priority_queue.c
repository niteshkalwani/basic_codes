#include<stdio.h>
# define max 5
int a[max],f,r;
f=-1,r=-1;
void add(int item)
{
    if(r==max-1)
     {
         printf("queue full \n");
         return;}
    else if((f==-1)&&(r==-1))
        {f++;
         r++;
        a[r]=item;
        return;
         }
     else
        priority(item);
     r++;
}
void priority(int item)
{
    int i,j;
    for(i=0;i<=r;i++)
    {
        if(item>=a[i])
        {
            for(j=r+1;j>i;j--)
            {
                a[j]=a[j-1];
            }
            a[i]=item;
            return;
        }
    }
    a[i]=item;
    return;
}
void del(int item)
{   if((f==-1)&&(r==-1))
       {printf("queue empty\n");
       return;}
    int i,j;
    for(i=0;i<=r;i++)
    {
        if(a[i]==item)
        {
            for(j=i;j<=r;j++)
            {
                a[j]=a[j+1];
            }
            return;
        }

    }
    printf("element not found in the queue\n");
    return;
}
void display()
{
     if((f==-1)&&(r==-1))
       {printf("queue empty\n");
       return;}
     else
     {   int i;
        f=0;
         for(i=f;i<=r;i++)
         {
             printf("%d\t",a[i]);
         }
        printf("\n");
     }
}
void main()
{
    void add(int);
    void priority(int);
    void del(int);
    void display();
    int c,item;
    while(1)
     {
         printf("enter ur choice\n"); // 1 to add 2 to delete 3 to display the priority queue
    scanf("%d",&c);
    switch(c)
    {
        case 1:
           {
printf("enter item to be added\n");
            scanf("%d",&item);
            add(item);
            break;
           }
        case 2:
           {
            printf("enter item to be deleted\n");
            scanf("%d",&item);
            del(item);
            break;
           }
        case 3:
            {printf("the status of queue\n");
            display();
            break;
    }}
    }
}
