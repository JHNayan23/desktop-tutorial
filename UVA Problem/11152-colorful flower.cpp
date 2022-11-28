#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    int a, b, c;
    while(scanf("%d%d%d", &a,&b,&c)!=EOF)
    {
        double r, R, areatri, areacir, s, ans1, ans2, ans3;
        s=(a+b+c)/2.0;
        areatri=sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4*areatri);
        areacir=pi*R*R;
        ans1=areacir-areatri;
        r=areatri/s;
        ans3=pi*r*r;
        ans2=areatri-ans3;
        printf("%.4lf %.4lf %.4lf\n", ans1,ans2,ans3);
    }
    return 0;
}
