// Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int s1(int, int);
int s2(int, int);

int s1(int m, int n)
{
  m = n;
  return m;
}
int s2(int x,int y)
{
  y = x;
  return y;
}

int main()
{
  int a, b;
  printf("Enter a number\n");
  scanf("%d", &a);
  printf("Enter a number\n");
  scanf("%d", &b);

  s1(a, b);
  s2(a, b);
  
  printf("The number a after being swapped is %d\n", s1(a, b));
  printf("The number b after being swapped is %d\n", s2(a, b));
  return 0;
}
