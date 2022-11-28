#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,x,l;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        int count=0;
        for(x=0; x<=l; x++)
        {
            n=(a*x*x)+(b*x)+c;
            if(n%d==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
