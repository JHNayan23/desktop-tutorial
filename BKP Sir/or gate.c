#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter the value of a & b:");
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        n=a+b;
        if(a==0&&b==0)
        n=0;
        else
        n=1;
        printf("%d\n",n);

    }


    return 0;
}
