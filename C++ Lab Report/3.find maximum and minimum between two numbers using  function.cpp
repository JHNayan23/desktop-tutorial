#include<bits/stdc++.h>
using namespace std;
int maxmin(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<maxmin(a,b);
    return 0;
}

