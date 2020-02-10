#include<iostream>

using namespace std;
int main()
{   int n;
    int num,s,r;
    s=0;
    r=0;
    cin>>n;
    num=n;
    while(num!=0)
    {
        r=num%10;
        s=s*10+r;
        num=num/10;
    }
    if(n == s)
    cout<<"palindrome";
    else
    cout<<"not palindrome";

    return 0;
}
