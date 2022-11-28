#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,number=1;
    while(cin>>t && t!=0)
    {
        int s=0;
        int p=0;
        for(int i=0; i<t; i++)
        {
            cin>>n;
            if(n!=0)
                s++;
            else
                p++;
        }
        cout<<"Case "<<number<<":"<<" "<<(s-p)<<endl;
        number++;
    }

    return 0;
}
