#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a{4,6,2,7,8};
    sort(a.begin(),a.end());
    for(int x:a)
    {
        cout<<x<<' ';

    }
    cout<<'\n';
    reverse(a.begin(),a.end());
    for(int x:a)
    {
        cout<<x<<' ';
    }
    return 0;
}
