#include<stdio.h>
#define PI acos(-1)
int main()
{
    int T,l,i;
    double width,radius,tla,rec,cr;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&l);
        width=l*(0.6);
        radius=l*(0.2);
        tla=(l*width);
        cr=PI*(radius*radius);
        rec=(tla-cr);
        printf("%.2lf %.2lf\n",cr,rec);
    }
return 0;

}
