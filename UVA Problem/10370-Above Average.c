#include <stdio.h>
int main()
{
  int t, n, i, j;
  float sum, avg, count, above;
  scanf("%d", &t);

  for (i = 1; i <= t; i++)
  {
    sum = 0, avg = 0, count = 0;
    scanf("%d", &n);
    int s[n];
    for (j = 0; j < n; j++)
    {
      scanf("%d", &s[j]);
      sum = sum + s[j];
    }
    avg = sum / (n);

    for (j = 0; j < n; j++)
    {
      if (s[j] > avg)
        count++;
    }

    above = (count / (n)) * 100;
    printf("%0.3f%%\n", above);
  }
  return 0;
}
