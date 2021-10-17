#include <stdio.h>

void left();
void right();

int main()
{
     right();
}
void right()
{
     long int i = 0;
     while(scanf("%ld", &i) && i != 0)
     {
          i = i >> 1;
          printf("%ld\n", i);
     }
}
void left()
{
    long int i = 0;
     while(scanf("%ld", &i) != 0 && i != 0 ) {
     i = i << 1;
     printf("%ld", i);
     } 
}