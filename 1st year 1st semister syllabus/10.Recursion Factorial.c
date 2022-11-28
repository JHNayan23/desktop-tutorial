#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int result= fact(n);
    printf("Factorial of n = %d",result);
}
int fact (int n)
{

    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
