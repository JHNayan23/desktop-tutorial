#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,ans,i;
    int kase=0;
    while(cin>>num)
    {
        if(num<0)
            break;
        else
        {
            for(i=0; i<num; i++)
            {
                if(pow(2,i)>=num)
                {
                    ans=i;
                    break;
                }
            }
            kase++;
            cout<<"Case "<<kase<<": "<<ans<<endl;
        }
    }
    return 0;
}
