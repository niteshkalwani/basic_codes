#include<stdio.h>
# define max 3
int a[max][max];
int f[3],r[3];
f[3]={-1,-1,-1};
r[3]={-1,-1,-1};
void add(int item,int p)
{
 if((p==0||p==1||p==2))
 {
      if((f[p]==0&&r[p]==max-1)||(r[p]+1==f))
          printf("OVERFLOW\n ");
else{
    if(r[p]==-1)
            {f[p]=0;
            r[p]=0;}
        else if(r[p]==max-1)
            r[p]=0;
        else
          r[p]=r[p]+1;
       a[p][r[p]]=item;
 }
}
}
   void del()
{  if(f[0]==-1 && f[1]==-1 && f[2]==-1)
     {
         printf("QUEUE IS EMPTY \n");
        return;
     }
        else
            {

     if(f[0]==-1 && f[1]==-1)
        {   if(f[2] == r[2])
            f[2]=r[2]=-1;
            else
            {
             if(f[2]==max-1)
            f[2]=0;
            else
            f[2]++;
            }
            }
    else if (f[0]==-1)
    {
            if(f[1]==r[1])
            f[1]=r[1]=-1;
            else{
                if(f[1]==max-1)
                f[1]=0;
                else f[1]++;
                }
    }
    else
    {    if(f[0]==r[0])
          f[0]=r[0]=-1;

    else
    {if(f[0]==max-1)
         f[0]=0;
     else f[0]++;
    }
    }
    return;
}}
   void display()
  {
     int i,j,fp,rp,k;
     for(i=0;i<3;i++)
     {   printf("Elements of priority %d\n ",i);
         fp=f[i]; rp=r[i];
    if(fp==-1)
        printf("queue empty \n");
    else if(fp>rp)
    {

        for(j=fp;j<3;j++)
         printf("%d\t",a[i][j]);
        for(k=0;k<=rp;k++)
         printf("%d\t",a[i][k]);
    }
    else
     {

        for(j=fp;j<=rp;j++)
            printf("%d\t",a[i][j]);

    }
    printf("\n");
     }
}
void main()
{
    void add(int,int);

    void del(int);
    void display();
    int c,item,p;
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
            printf("enter priority of ur element\n");
            scanf("%d",&p);
            add(item,p);
            break;
           }
        case 2:
           {
            del();
            break;
           }
       case 3:
            {printf("the status of queue\n");
            display();
            break; }
    }}
    }

