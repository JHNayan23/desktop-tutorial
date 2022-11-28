#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i;  while(1)
    {

  scanf("%d",&n);
        if(n==0)
            break;
        for(i=0; i<3; i++)
        {
            s=0;
            while(n!=0)
            {
                s=s+(n%10);
                n=n/10;
            }
            n=s;
        }
        cout<<n<<endl;
    }
    return 0;
}
