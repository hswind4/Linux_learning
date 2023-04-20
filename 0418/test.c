#include<stdio.h>

int sum(int x)
{
  int sum = 0;
  for(int i = 0; i < x; ++i)
  {
    sum += i;
  }
  return sum;
}


int main()
{
  int top = 100;
  int result = sum(top);
  printf("%d",result);

  return 0;
}
