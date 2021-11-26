#include <stdio.h>

#define NUMBER 100

enum colors {
  RED = 1, YELLOW = 2, STD = 0
};
void printerr(const char *text, ...)
{

}
void red () {
  printf("\033[1;31m");
}

void yellow() {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}

void printc(const char* text, int color)
{
  switch(color) {
    case 0:
      reset();
    case 1:
      red();
    case 2:
      yellow();
      printf(text);
      break;
    default:
      reset();
      printf(text); 
  }
  reset();
}
void printci(int i, int color)
{
  switch(color) {
    case 0:
      reset();
      printf("%d\n", i);
      break;
    case 1:
      red();
      printf("%d\n", i);
      break;
    case 2:
      yellow();
      printf("%d\n", i);
      break;
    default:
      reset();
      printf("%d\n", i); 
  }
  reset();
}

int main() {
  for(int i = 0; i <= NUMBER; ++i)
  {
    if(i % 2 == 0) 
    {
     printci(i, 1);
    }
    else 
    {
      printci(i, 2);
    }
  }
}