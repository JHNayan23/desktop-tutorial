#include<bits/stdc++.h>
using namespace std;
void prime(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
            if(i%2==0)
            flag=1;
        if(flag==0)
            cout<<' ';
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    prime(a,b);

    return 0;
}

