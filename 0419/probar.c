#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
  #define NUM 100
  char bar[NUM+1];
  memset(bar,'\0',sizeof(bar));
  const char *lable = "|/-\\";
  int i =0;
  while(i<=100)
  {
    printf("[%-100s][%3d%%][%c]\r",bar,i, lable[i%4]);  // when i ==0, print once
    fflush(stdout);
    bar[i]='#';
    ++i;
    usleep(50000);
  }
  printf("\n");

  return 0;
}
