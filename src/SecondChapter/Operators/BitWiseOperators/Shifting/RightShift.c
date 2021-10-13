#include <stdio.h>

int returnAllBits(unsigned x);
unsigned int_to_int(unsigned k);
int main()
{
     int var = 10;
     printf("    Before\t    After\n%10d\t%9d\n%10d\t%9d\n", var, var >> 2, int_to_int(var), int_to_int(var >> 2));
}

int returnAllBits(unsigned x)
{
     return x >> 10;
}
unsigned int_to_int(unsigned k) {
    if (k == 0) return 0;
    if (k == 1) return 1;                       /* optional */
    return (k % 2) + 10 * int_to_int(k / 2);
}