#include<stdio.h>
int main()
{
    int a[100],b[100],i,size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<size-1; i++)
    {
        b[i]=a[size-1-i];
    }
    for(i=0; i<size; i++)
    {
        a[i]=b[i];
    }
    for(i=0; i<size; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}

