#include <stdio.h>

int main()
{
     int i = 0;
     int* address_i = &i;
     *address_i = 1;
     printf("%d %d %d", i,(int) address_i, *address_i);
}