#include <stdio.h>

int StringLenght(char s[]);

int main()
{
     printf("%d\n",StringLenght("Hello"));
}

int StringLenght(char s[])
{
     int i = 0;
     while(s[i] != '\n')
          ++i;
     return i;
}