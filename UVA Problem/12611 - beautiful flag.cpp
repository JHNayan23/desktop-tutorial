#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,T;
    int ul1,ul2,ur1,ur2,lr1,lr2,ll1,ll2;
    double w,L,R;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>R;
        L=5*R;
        w=L*(0.6);
        ul1=-(L*(0.45));
        ul2=w/2;
        ur1=L*(0.55);
        ur2=w/2;
        lr1=L*(0.55);
        lr2=-(w/2);
        ll1=-(L*(0.45));
        ll2=-(w/2);
        printf("Case %d:\n",i);
        cout<<ul1<<' '<<ul2<<endl<<ur1<<' '<<ur2<<endl;
        cout<<lr1<<' '<<lr2<<endl<<ll1<<' '<<ll2<<'\n';
    }
    return 0;
}

