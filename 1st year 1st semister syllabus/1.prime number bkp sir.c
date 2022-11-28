 #include<stdio.h>
int main()
{
    int flag=1,i,n;
    scanf("%d",&n);
    for(i=2; i<=n/2; i++)
        if(n%i==0)
            flag=0;
    if(flag==1)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
