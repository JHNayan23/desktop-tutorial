#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A<=B)
    {
        if(B<=C)
            printf("YES");
        else
            printf("NO");
    }
    else if(B<=A)
    {
        if(A<=C)
            printf("YES");
        else
            printf("NO");
    }
    else
    {
        printf("NO");
    }


    return 0;
}
