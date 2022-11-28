#include<bits/stdc++.h>
using namespace std;
int fibonacci(int a,int b,int n);
{
    int i=2,int sum=0;
    while(i!=0)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    cout<<fibonacci(a,b,n);
    return 0;
}

