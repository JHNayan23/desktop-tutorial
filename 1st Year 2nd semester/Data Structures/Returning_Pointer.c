#include <stdio.h>
int* findLarger(int*, int*);
void main()
{
 int numa=0;
 int numb=0;
 int *result;
 	for(int i=1;i<=3;i++){
   printf(" Input the first number : ");
   scanf("%d", &numa);
   printf(" Input the second  number : ");
   scanf("%d", &numb);

 result=findLarger(&numa, &numb);
 printf(" The number %d is larger.  \n\n",*result);
}
}
int* findLarger(int *n1, int *n2)
{
 if(*n1 > *n2)
  return n1;
 else
  return n2;
}
