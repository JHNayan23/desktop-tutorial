#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;
        int res = (z*(x+(x-y)))/(x+y);
        if(res>0)
            cout<<res<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
