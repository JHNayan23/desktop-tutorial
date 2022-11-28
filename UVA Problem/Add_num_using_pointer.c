#include <stdio.h>
int main()
{
   int fno, sno, *ptr, *qtr, sum,t;

   for(int i=1;i<=3;i++){

   printf(" Input the first number : ");
   scanf("%d", &fno);
   printf(" Input the second  number : ");
   scanf("%d", &sno);

   ptr = &fno;
   qtr = &sno;

   sum = *ptr + *qtr;

   printf(" Case %d: The sum of the entered numbers is - %d\n\n",i,sum);
   }

   return 0;
}
