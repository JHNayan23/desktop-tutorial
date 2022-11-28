#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,p,t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k>>p;
        k=k+p;
        k=k%n;
        if(k==0)
            k=n;
        cout<<"Case "<<i<<": "<<k<<endl;
    }
    return 0;
}
