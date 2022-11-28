#include <stdio.h>
int main()
{
    int i,k,j;
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
   /* for(i=1;i<=n;i++)
    {
       for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(k=1;k<=i;k++)
        {
            printf("%d",k);        }


        printf("\n");
    }*/

for(i=n;i>=1;i++)
{
    for(j=1;j<n;j++)
    {
        printf("%d",j);

    }
    printf("\n");
}






}
