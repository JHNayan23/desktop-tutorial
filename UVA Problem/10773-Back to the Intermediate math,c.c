#include <stdio.h>
#include <math.h>
int main()
{
    int i,T;
    scanf("%d",&T);
    for (i=1 ; i <= T ; i++)
    {
        float d,v,u;
        scanf("%f%f%f",&d,&v,&u);
        printf("Case %d: ",i);
        if (u > v && v)
            printf("%.3f\n",d/sqrt(u*u-v*v)-d/u);
        else printf("can't determine\n");
    }
    return 0;
}
