#include<stdio.h>
int main()
{
   int A,B,C;
   scanf("%d%d%d",&A,&B,&C);
   if(A<C&&B>C)
    printf("yes");
   else if(A==C&&B==C)
    printf("yes");
   else
    printf("No");

    return 0;
}

