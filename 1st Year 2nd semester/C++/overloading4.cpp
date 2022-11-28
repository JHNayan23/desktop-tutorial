#include<bits/stdc++.h>
using namespace std;

void sp(int a,int b)
{
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}

void sp(int a,int b,int c)
{
    cout<<a+b+c<<endl;
}


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    sp(a,b);
    sp(a,b,c);
    return 0;
}


