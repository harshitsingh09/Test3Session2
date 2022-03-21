#include<stdio.h>

struct _fraction
{
int num, den;
}
typedef Fraction;

Fraction input_fraction()
{
  Fraction f;
  scanf("%d\n%d", &f.num, &f.den);
  return f;
}

Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  for(int i=2; i<n)
  
  // float a = f1.num/f1.den;
  // float b = f2.num/f2.den;
  // float c = f3.num/f3.den;
  // float largest;
  // if(a>b && a>c)
  //   largest = a;
  // else if(b>a && b>c)
  //   largest = b;
  // else
  //   largest = c;
  // return largest;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("The largest of the 3 fractions:  %d/%d, %d/%d & %d/%d is %d/%d\n", f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, largest);
}

int main()
{
  Fraction f1, f2, f3, largest;
  printf("Enter the fraction 1:\n");
  f1 = input_fraction();
  printf("Enter the fraction 2:\n");
  f2 = input_fraction();
  printf("Enter the fraction 3:\n");
  f3 = input_fraction();
  largest = Largest_fraction(f1, f2, f3);
  output(f1, f2, f3, largest);
  return 0;
}