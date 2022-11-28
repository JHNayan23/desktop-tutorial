#include<stdio.h>
int main()
{
    int x,n,sum=1;
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        sum=sum*x;
        n=n/10;
    }
    printf("sum=%d",sum);




    return 0;
}
