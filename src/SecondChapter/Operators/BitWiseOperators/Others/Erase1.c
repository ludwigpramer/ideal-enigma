#include <stdio.h>

int main()
{
	int i = 6;   //0110
	
	int x = ~11; //0100 ->  1011

	i = i & x;   //0010 4	

	printf("%d", i); 
}
