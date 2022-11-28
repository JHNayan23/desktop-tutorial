
#include<stdio.h>
int main()
{
    int i,j,r,c,p,q,a[10][10],b[10][10],s[10][10],k,m[10][10];

    //printing mat a dimension

    printf("Enter your a mat dimension\n");
    scanf("%d%d",&r,&c);

    //input mat a

    printf("input a mat \n");
    for(i=1; i<=r; i++)
        for(j=1; j<=c; j++)
        {
            scanf("%d",&a[i][j]);
        }

    //printing mat a

    printf("your a mat is: \n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("%d ",a[i][j]);
        }

        printf("\n");
    }

   //printing mat b dimension

    printf("Enter your b mat dimension\n");
    scanf("%d%d",&p,&q);

   //input mat b

    printf("input b mat \n");
    for(i=1; i<=p; i++)
        for(j=1; j<=q; j++)
        {
            scanf("%d",&b[i][j]);
        }

   //printing mat b

    printf("your b mat is: \n");
    for(i=1; i<=p; i++)
    {
        for(j=1; j<=q; j++)
        {
            printf("%d ",b[i][j]);
        }

        printf("\n");
    }

   //printing mul mat
    printf("your a&b mat mul is: \n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=q; j++)
        {
            s[i][j]=0;
            for(k=1; k<=p; k++)
            {
                m[i][j]=a[i][k]*b[k][j];
                s[i][j]=s[i][j]+m[i][j];
            }
            printf("%d ",s[i][j]);
        }
        printf("\n");

    }
    return 0;
}
