#include<stdio.h>
void main()
{
    int a[3];
    int b[3][3];
    int i=0;
    int j=0;
    printf("enter elements of 1-d array");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter elements of 2-d array");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",*(*(b+i)+j));
        }
    }

}

