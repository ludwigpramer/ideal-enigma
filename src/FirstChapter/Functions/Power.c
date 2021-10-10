#include <stdio.h>



int power(int base, int n)
{
     int p, i;

     p = 1;
     for(i = 1; i <= n; ++i) {
          p = p * base;
     }
     return p;
}
main()
     {
          printf("%d\n", power(2, 2));
     }