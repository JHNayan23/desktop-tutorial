#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,d,x,y;
    cin>>n;
    while(n--)
    {
        cin>>s>>d;
        if(d>s)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            y=(s-d)/2;
            x=d+y;
            if(x+y==s && abs(x-y)==d)
                cout<<x<<" "<<y<<endl;
            else
                cout<<"impossible"<<endl;
        }
    }
    return 0;
}
