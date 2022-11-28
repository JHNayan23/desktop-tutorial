#include<stdio.h>
int main()
{
    int n,k,renew,total;
    total=n;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        while(n>=k)
        {
            renew=n/k;
            total=total+renew;
            n=renew+(n%k);

        }
    }
    printf("%d\n",total);
    return 0;
}
