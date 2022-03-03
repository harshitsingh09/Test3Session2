#include <stdio.h>

struct _fraction
{
int num,den;
}
typedef Fraction;

int find_gcd(int a, int b)
{
  int t;
  while (b != 0)
    {
      t = b;
      b = a%b;
      a = t;
    }
  return a;
}
// Fraction input_fraction();
// Fraction add_fractions(Fraction f1, Fraction f2)
// void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)

int main()
{
  printf("%d\n", find_gcd(16,24));
  return 0;
}
