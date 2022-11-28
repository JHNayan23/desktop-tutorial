#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,count;
    int i,s;
    while(cin>>x>>y)
    {
        count=0;
        if(x==0 && y==0)
            break;
        else
        {
            for(i=x; i<=y; i++)
            {
               s=sqrt(i);
               if((s*s)==i)
               {
                   count++;
               }
            }
            cout<<count<<endl;
        }
    }

    return 0;
}
