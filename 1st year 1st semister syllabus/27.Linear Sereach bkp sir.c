#include<stdio.h>
int main()
{
    int a[8],i,s;

    scanf("%d", &s);

    for(i=0; i<=8; i++)
    {
        scanf("%d", a[i]);

    }
    if(a[i]==s)
            printf("%d", i);
    return 0;
}
