#include <stdio.h>
#include <math.h>
int main()
{
  int t, a, i, ans, d, m;
  scanf("%d", &t);

  for (i = 1; i <= t; i++)
  {
    ans = 0;
    scanf("%d", &a);
    ans = ((((((a * 567) / 9) + 7492) * 235) / 47) - 498);
    d = ans / 10;
    m = d % 10;
    printf("%d\n", abs(m));
  }
  return 0;
}
