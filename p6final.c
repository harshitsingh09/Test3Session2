#include <stdio.h>

void input_string(char *a)
{
  printf("Enter a string:\n");
}

int count_words(char *string)
{}

void output(char *string, int no_words)
{
  printf("The string %s has %d characters", string, no_words);
}

int main()
{
  char a;
  char string = input_string(a);
  int no_words = count_words(string);
  output(string, no_words);
  return 0;
}