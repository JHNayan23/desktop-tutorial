#include<bits/stdc++.h>
using namespace std;

void sum(int a,int b)
{
    cout<<a+b<<endl;
}

void sum(int a,int b,int c)
{
    cout<<a-b-c<<endl;
}


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    sum(a,b,c);
    sum(a,b);
    return 0;
}

