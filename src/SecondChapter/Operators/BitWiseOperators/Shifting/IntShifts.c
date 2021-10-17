#include <stdio.h>

void left();
void right();

int main()
{
     left();
}

void left()
{
     int i = 0;
     while(scanf("%d", &i) && i != 0)
     {
          i = i << 1;
          printf("%d\n", i);
     }
}
void right()
{
     int i = 0;
     while(scanf("%d", &i) && i != 0)
     {
          i = i >> 1;
          printf("%d\n", i);
     }
}