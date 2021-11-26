#include <iostream>
#include <vector>

#define start 0
#define end 1000

int main()
{
	
	int last = 0;
	for(int i = start; start <= end; i++)
	{
		std::cout <<(last - i) << std::endl;
		last = i; 
	}
}
