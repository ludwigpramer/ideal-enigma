#include <stdio.h>

#define p 100

int comp(int number);
int main()
{         
     int i = 0;
     while(scanf("%d", &i) && i != 0)
     {
     comp(i) ? printf("%d is a prime number!\n", i) : printf("%d is not a prime number!\n", i);
     }
}

int comp(int number)
{
     if(number % 2 == 0) return 0;
     if(number == 1) return 0;
     for(int i = 3; i <= number/2; i += 2)
     {
          if(number % i == 0)
          {
               return 0;
          }
     }
     return 1;
}