#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    int i,L,T;
    double r,W,ac,ar;
    scanf("%d",&T);
    for(i=1; i<=T; T++)
    {
        scanf("%d",&L);
        W=(L*6)/10;
        r=L/5;
        ac=(r*r*PI);
        ar=((L*W)-ac);
        printf("%.2lf %.2lf\n",ac,ar);
    }
    return 0;
}
