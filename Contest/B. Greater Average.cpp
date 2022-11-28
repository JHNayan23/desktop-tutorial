#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float avg;
        float a,b,c;
        cin>>a>>b>>c;
        avg=(a+b)/2;
        if(avg<=c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
