#include<stdio.h>
#include<conio.h>
void bsearch(int a[10],int n,int x)
{  int mid;
   int beg=a[0];
   int end=a[n-1];
   while(beg<=end)
   {
       mid=(beg+end)/2;
       if(a[mid]==x)
       {
           printf("element found");
           break;
       }
       else if(a[mid]>x)
        end=mid-1;
       else if(a[mid]<x)
       beg=mid+1;

   }
   printf("element not found");
}

void main()
{
    int a[10];
    int x,i;
    printf("enter ur array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter element to search");
    scanf("%d",&x);

    bsearch(a,5,x);
}
