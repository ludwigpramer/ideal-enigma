#include <stdio.h>

// #define true 1
// #define false 0

#define startYear 2020 
#define endYear 3000

int main()
{
     
     for(int i = endYear; i >= startYear; --i)
          i % 4 == 0 || i % 100 == 0 || i % 400 == 0 ? printf("%d is a leap year!\n", i) : printf("%d is not a leap year!\n", i);
}

