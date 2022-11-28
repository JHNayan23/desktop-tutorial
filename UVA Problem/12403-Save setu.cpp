#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,t,count=0;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>a;
            count+=a;
        }
        else if(s=="report")
        {
            cout<<count<<endl;
        }
    }
    return 0;
}
