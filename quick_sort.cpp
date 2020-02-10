#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int partition(int a[],int low,int high)
{
    int p=a[high];
    int i=low-1;

    for(int j=low;j<high-1;j++)
    {
        if(a[j]<p)
        {
            i++;
            swap(&a[i],&a[j]);
        } }
        swap(&a[i+1],&a[high]);
        return (i+1);


}

void quicksort(int a[],int low, int high)
{
    if(low<high)
    {
        int p=partition(a,low,high);

        quicksort(a,low,p-1);
        quicksort(a,p,high);
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
    int a[]={10,7,8,9,1,5};
    int n=(sizeof(a))/(sizeof(a[0]));
    quicksort(a,0,n-1);
    print(a,n);
    return 0;
}
