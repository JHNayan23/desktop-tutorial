#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the value of a & b:\n");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swap value is = %d %d", a,b);

    return 0;
}
