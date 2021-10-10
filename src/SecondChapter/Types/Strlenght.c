#include <stdio.h>

int StringLenght(char s[]);

int main()
{
     printf("%d\n",StringLenght("a"));
}

int StringLenght(char s[])
{
     int i;
     i = 0;
     while(s[i] != '\n'){
          ++i;
     }   
     return i;
}