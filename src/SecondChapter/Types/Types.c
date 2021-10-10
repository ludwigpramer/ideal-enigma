#include <stdio.h>

int main()
{
     char c = 'a';
     float f = 2.2;
     long l = 0;
     long int i = 0;
     int sd = 0;
     short int s = 0;
     printf("%lu, %lu, %lu, %lu, %lu, %lu\n",sizeof(f) , sizeof(c) ,sizeof(l), sizeof(i), sizeof(sd), sizeof(s));
}