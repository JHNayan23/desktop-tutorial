#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],b[10][10],k[10][10];
    scanf("%d%d",&r,&c);
    printf("\n Matrix \n");
    for(i=1;i<=r;i=i+1)
    {
        for(j=1;j<=c;j=j+1)
     {
        scanf("%d",&a[i][j]);
        }

    }
   for(i=1;i<=r;i=i+1)
    {
        for(j=1;j<=c;j=j+1)
    {
        printf("%d  ",a[i][j]);}
        printf("\n");
    }

    printf("\n Matrix B \n");
    for(i=1;i<=r;i=i+1)
    {
        for(j=1;j<=c;j=j+1)
     {
        scanf("%d",&b[i][j]);
        }

    }
   for(i=1;i<=r;i=i+1)
    {
        for(j=1;j<=c;j=j+1)
    {
        printf("%d  ",b[i][j]);}
        printf("\n");
    }

    printf("Addition=\n");
   for(i=1;i<=r;i=i+1)
    {
        for(j=1;j<=c;j=j+1)
    {
        printf("%d  ",a[10][10]+b[i][j];}
        printf("\n");
    }

    printf("minus=\n");
   for(i=1;i<=r;i=i+1)
    {
        for(j=1;j<=c;j=j+1)
    {
        printf("%d  ",a[10][10]-b[i][j];}
        printf("\n");
    }
      printf("multiapplication=\n");
   for(i=1;i<=r;i=i+1)
    {
        for(j=1;j<=c;j=j+1)
    {
        printf("%d  ",(a[10][10]+b[i][j])*(a[10[10]-b[10][10]);}
        printf("\n");
    }

    return 0;
}

