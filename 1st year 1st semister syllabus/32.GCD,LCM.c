#include <stdio.h>
int main() {
  int a, b, n1, n2, rem, gcd, lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &n1, &n2);

  a = n1;
  b = n2;

  while (b != 0)
  {
    rem = a % b;
    a = b;
    b=rem;
  }

  gcd = a;
  lcm = (n1*n2)/gcd;

  printf("Greatest common divisor of %d and %d = %d\n", n1, n2, gcd);
  printf("Least common multiple of %d and %d = %d\n", n1, n2, lcm);

  return 0;
}
