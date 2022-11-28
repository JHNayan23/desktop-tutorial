#include<stdio.h>
int main()
{
    int base,height,Area;
    printf("Enter base and Height:\n");
    scanf("%d%d",&base,&height);
    Area=TA(base,height);
    printf("Area=%d\n",Area);
}
  int TA(int base, int height)
{
    return 0.5*base*height;
}
