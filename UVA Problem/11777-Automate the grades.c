#include<stdio.h>
int main()
{
    int T,i,p,s,all,t1,t2,f,a,ct1,ct2,ct3;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        if(ct3<ct2 && ct3<ct1)
            p=ct3;
        else if(ct2>ct1)
            p=ct1;
        else if(ct1>ct2)
            p=ct2;
        s=((ct1+ct2+ct3)-p)/2;
        all=s+t1+t2+f+a;
        if(all>=90)
            printf("Case %d: A\n", i);
        else if(all>=80 && all<90)
            printf("Case %d: B\n", i);
        else if(all>=70 && all<80)
            printf("Case %d: C\n", i);
        else if(all>=60 && all<70)
            printf("Case %d: D\n", i);
        else if(all<60)
            printf("Case %d: F\n", i);
    }
    return 0;
}
