#include<stdio.h>
int main()
{
    int n,x,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("sum is = %d\n", sum);
    return 0;
}

