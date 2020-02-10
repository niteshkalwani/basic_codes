#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && a[l]>a[largest])
        largest=l;

    if(r<n && a[r]>a[largest])
        largest=r;

    if(largest != i)
    {
        swap(&a[largest],&a[i]);
        heapify(a,n,largest);
}
}

void heapsort(int a[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        heapify(a,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]);

        heapify(a,i,0);

    }

}

void print(int a[],int n)
{

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n" ;

}

int main()
{
    int a[]={10,15,100,3,4,12};
    int n= (sizeof(a))/(sizeof(a[0]));

    heapsort(a,n);

    print(a,n);

    return 0;
}
