#include <stdio.h>

main()
     {
          long nc;
          nc = 0;
          while(getchar() != EOF) {
               
               nc++;
               
          }
          nc /= 2;
          printf("%ld\n", nc);
     }