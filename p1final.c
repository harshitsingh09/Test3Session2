#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator for 1st fraction:\n");
  scanf("%d", num1);
  printf("Enter the denominator for 1st fraction:\n");
  scanf("%d", den1);
  printf("Enter the numerator for 2nd fraction:\n");
  scanf("%d", num2);
  printf("Enter the denominator for 2nd fraction:\n");
  scanf("%d", den2);
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

void add(int num1, int den1, int num2, int den2, int *num3, int *den3)
{
  *num3 = num1*den2 + num2*den1;
  *den3 = den1*den2;
  int g = find_gcd(*num3, *den3);
  *num3 = *num3/g;
  *den3 = *den3/g;
}

void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("Sum of fractions %d/%d & %d/%d is %d/%d\n", num1, den1, num2, den2, num3, den3);
}

int main()
{
  int num1, num2, den1, den2, num3, den3;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &num3, &den3);
  output(num1, den1, num2, den2, num3, den3);
  return 0;
}