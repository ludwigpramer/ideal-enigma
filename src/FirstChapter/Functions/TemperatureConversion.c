#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 10.0

float convert(float fahr)
{
     return ( (5.0/9.0) * ( fahr - 32.0 ));
}
main()
{
     printf("Fahr\tCelsius\n");
     for(float fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
          printf("%3.0f\t%6.2f\n", fahr, convert(fahr));
}
