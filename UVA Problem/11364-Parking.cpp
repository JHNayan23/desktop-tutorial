#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,n,p,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int max=0,min=99;
        for(i=1; i<=n; i++)
        {
            cin>>p;
            if(p>max)
                max=p;
            if(p<min)
                min=p;

        }
        d=(max-min)*2;
        cout<<d<<endl;
    }
    return 0;
}
