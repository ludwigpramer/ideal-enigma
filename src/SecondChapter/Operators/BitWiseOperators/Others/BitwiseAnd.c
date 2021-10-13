#include <stdio.h>

unsigned intToBin(unsigned k);
int main(){
     int var = 10;
     int var2 = var & 01111;

     printf("%d\t%d\n%d\t%d\n", var, intToBin(var), var2, intToBin(var2) );
}
unsigned intToBin(unsigned k) {
    if (k == 0) return 0;
    if (k == 1) return 1;                      
    return (k % 2) + 10 * intToBin(k / 2);
}