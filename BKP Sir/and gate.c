#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter the value of a & b:");
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        n=a*b;
        if(a==1&&b==1)
        n=1;
        else
        n=0;
        printf("%d",n);

    }


    return 0;
}
