#include <stdio.h>

int main()
{
	int i = 10;  //1010
	int i2 = 5;  //0101
	
	i = i | i2;

	printf("%d", i);
}
