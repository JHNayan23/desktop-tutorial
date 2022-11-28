#include<stdio.h>
int main()
{
   int a[20],i,x,s;
   printf("Enter the size of the array:\n");
   scanf("%d",&s);
   printf("Enter array elements:\n");
   for(i=0;i<s;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Enter the elements to search\n");
   scanf("%d",&x);
   for(i=0;i<s;i++)
    if(a[i]==x)
    break;
   if(i<s)
    printf("Element found at index %d",i);
   else
    printf("Element not found");
    return 0;
}

