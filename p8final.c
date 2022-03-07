#include <stdio.h>

struct _fraction
{
int num, den;
}
typedef Fraction;

int input_n()
{
  int x;
  printf("Enter the value of n:\n");
  scanf("%d", &x);
  return x;
}

Fraction input_fraction()
{
  Fraction x;
  scanf("%d", x.num);
  scanf("%d", x.den);
  return x;
}

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

void input_in_fractions(int n, Fraction f[n])
{
  printf("Enter the numerator and denominator of %d fraction:\n", n);
  for(int i=0; i<n; i++)
    {
      scanf("%d\n%d", f[i].num, f[i].den);
      printf("Next fraction;\n");
    }
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
  sum.num = (f1.num * f2.den) + (f2.num * f1.den);
  sum.den = (f1.den * f2.den);
  int g = find_gcd(sum.num, sum.den);
  sum.num = sum.num/g;
  sum.den = sum.den/g;
  return sum;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
  Fraction x;
  for(int i=0; i<n; i++)
    {
      int n1, n2;
      n1 = f[i];
      n2 = f[i+1];
      x = add_n_fractions(n1, n2);
    }
  return x;
}

void output(int n, Fraction f[n], Fraction sum)
{
  printf("The sum of %d fractions:\n", n);
  for(int i=0; i<n-1; i++);
  {
    printf("%d/%d + ", f[i].num, f[i].den);
  }
  printf("%d/%d = %d/%d", f[n].num, f[n].den, sum.num, sum.den);
}

int main()
{
  int n;
  n = input_n();
  Fraction f[n], sum;
  input_in_fractions(n, f[n]);
  sum = add_n_fractions(n, f[n]);
  output(n, f[n], sum);
  return 0;
}