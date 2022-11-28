#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        float f,a,c,d;
        cin>>c>>d;
        f=(9*c)/5+d;
        a=(f*5)/9;
        printf("Case %d: %.2f\n",i,a);
    }
    return 0;
}
