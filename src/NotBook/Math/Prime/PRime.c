#include <stdio.h>

#define start 0
#define end 100

int main()
{
	for(int i = start; start <= end; i++) {
		for(int j = 3; j <= i/2; j  += 2)
		{
			if(i % j == 0)
				printf("%d is prime\n", i);
			else 
				printf("%d is not prime, divisible by %d\n", i, j);
			
		}
	}
}
	
