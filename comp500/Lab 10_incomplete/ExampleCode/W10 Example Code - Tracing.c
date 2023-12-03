#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void)
{
  int input = 0;
  printf("> ");
  scanf("%d", & input);
  printf("%d! = %d\n", input, factorial(input));
  return 0;
}

int factorial(int n)
{
  printf("INFO Trace: factorial(%d) called.\n", n);
  
  if (n <= 1)
  {
    printf("INFO Trace: Base case, returning 1.\n");
    return 1;
  }
  else
  {
    printf("INFO Trace: Recursing...\n");
    return (n * factorial(n - 1));
  }
}