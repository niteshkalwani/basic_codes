#include<iostream>
using namespace std;
int main()
{
    int r[4];
    int a=3,i,j;
    for(i=0; a>0; i++)
    {
        r[i]=a%2;
        a=a/2;
    }
    for(j=i-1;j>=0;j--)
        cout<<r[j];

    return 0;
}
