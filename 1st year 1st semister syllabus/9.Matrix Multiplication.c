#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    printf("Enter the row number\n");
    scanf("%d",&r);
    printf("Enter the coloumn number\n");
    scanf("%d",&c);
    printf("Enter the first matrix elements=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    printf("Enter the second matrix elements=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",b[i][j]);
        }
    }
    printf("Multiply of the Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    //for printing result
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    return 0;

}
