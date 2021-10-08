#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

main()
     {
          printf("Fahr\tCelsius\n");

          float fahr;
          for( fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
               printf("%3.0f\t%6.2f\n",fahr, (5.0/9.0) * (fahr-32));
          }
     }