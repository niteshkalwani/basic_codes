#include<stdio.h>
main()
{
    int a[3][3],i,j,m,n;
    int *l;
    int *c=&a[0][0];
    printf("%s,\n","enter array elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("%s,\n","enter value of m and n");
    scanf("%d",&m);
    scanf("%d",&n);
    l=c+(3*m+n);
    printf("%d",*l);

}
