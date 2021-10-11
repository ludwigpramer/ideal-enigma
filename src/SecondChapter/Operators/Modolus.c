#include <stdio.h>

#define startYear 0 
#define endYear 3000


int numberOfLeapYears = 0;
int currentIndex = 0;
int result[endYear - startYear + 1];

void isYear(int year)
{
     
     result[currentIndex] = year;
     ++currentIndex; 
     ++numberOfLeapYears;
     printf("%d is a leap year!\n", year);
}

int main()
{
     
     for(int i = endYear; i >= startYear; --i)
          i % 4 == 0 || i % 100 == 0 || i % 400 == 0 ? isYear(i) : printf("%d is not a leap year!\n", i);
     printf("%d leap years found\n", numberOfLeapYears);
    
     for(int j = 0; j <= sizeof(result)/sizeof(int)-1; ++j)
          if(result[j] != 0)
               printf("%d ", result[j]);
     printf("\n");
     

}



