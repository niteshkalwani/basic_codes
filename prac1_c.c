#include<stdio.h>
main()
{
    int a[3][3],b[3][3],i,j,m,n,k,s=0;
    int c[3][3];
    printf("%s,\n","enter 1st array elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("%s,\n","enter 2nd array elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

        s=0;
            for(k=0;k<3;k++)
            {
                s=s+a[i][k]*b[k][j];
                c[i][j]=s;
          }  }}

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,\n",c[i][j]);
        }
    }
}
