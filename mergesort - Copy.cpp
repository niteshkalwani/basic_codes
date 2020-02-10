#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r)
{
    int i,j,k;
    int n1= m-l+1;
    int n2=r-m;
    int b[n1],c[n2];
    for(i=0;i<n1;i++)
    {
        b[i]=a[l+i];
    }
    for(j=0;j<n2;j++)
    {
        c[j]=b[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=b[i];
        i++;
        k++;

    }
    while(j<n2)
    {
        a[k]=c[j];
        j++;
        k++;
    }
}

void mergeSort(int a[],int l,int r)
{
    while(l<r)
    {
        int m= l+(r-1)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);

        merge(a,l,m,r);
    }


}
void print(int a[],int n)
{

    for(int i=0;i<n;i++)
      {

       cout<<a[i]<<" ";}
    cout<<"\n" ;

}

int main()
{
    int a[]={12,11,13,5,6,7};
     int n= (sizeof(a))/(sizeof(a[0]));
    mergeSort(a,0,n-1);
    print(a,n);

    return 0;

}
