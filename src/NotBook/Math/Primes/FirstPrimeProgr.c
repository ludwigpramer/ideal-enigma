#include <stdio.h>

main()
{
     for(int i = 2; i <= 10000; i = i + 2) {
          for(int n = i / 2; n < i; n = n + 2) {
               if(n % i == 0){
                    printf("%d\n", i);
               }
          }
     }
}