#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The sum is : %d\n",c);
}
int sum(int a,int b)
{

    return a+b;
}
