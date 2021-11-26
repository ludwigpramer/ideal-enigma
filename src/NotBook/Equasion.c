#include <stdio.h>

#define start 0
#define stop 10
// #define Equasion( double number ) {

// }

int calc(double number);

int main()
{
     
     for(double f = start; start <= stop; f += 10)
          if(calc(f))
               printf("%f\n", f);
}
int calc(double x){
    
     if( 210 == 200 - x )
          return 1;
     else return 0;
}