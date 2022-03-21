#include <stdio.h>

int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  for(int i=0; i<n; i++)
    {
      printf("Enter value %d:\n", i+1);
      scanf("%d", &a[i]);
    }
}

int find_largest(int n, int a[n])
{
  int t = 0, t1 = 0;
  for(int i = 0; i<n; i++)
    {
      if(a[i]>t)
      {t = a[i];}
      t1 = i;
    }
  return t1;
}

void out_put(int n, int a[n], int largest)//EDIT THIS SHITT
{
  printf("The greatest value in the array is %d", largest);
}

int main()
{
  int n = input();
  int a[n];
  input_array(n, a);
  int largest = find_largest(n, a);
  out_put(n, a, largest);
  return 0;
}