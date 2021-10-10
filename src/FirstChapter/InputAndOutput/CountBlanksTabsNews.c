#include <stdio.h>

int main()
     {
          int b, t, nl, c;
          b, t, nl = 0;
          while((c = getchar()) != EOF) {
               if(c == ' ') {
                    ++b;
               } else if( c == '\t') {
                    ++t;
               } else if( c == '\n') {
                    ++nl;
               }
          }
          printf("%d, %d, %d", b, t, nl);
     }