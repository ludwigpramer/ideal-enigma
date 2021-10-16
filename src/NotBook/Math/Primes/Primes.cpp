#include <iostream>
#include <vector>
#include <string>


#define start 2
#define end 100
#define prime 11

std::vector<int> computeAllPrimes();
bool computeOnePrime(int number);

int main()
{
  computeOnePrime(prime) ? std::cout << prime << " is a prime number." << std::endl : std::cout << prime << " is not a prime number." << std::endl;
}

std::vector<int> computeAllPrimes()
{
     std::vector<int> result = std::vector<int>();
     for(int i = start; i <= end; i += 2)
     {
          if( computeOnePrime(i) )
          {
               result.push_back(i);               
          }
     }
     return result;
}

bool computeOnePrime(int number)
{
     for(int i = 2; i <= number/2; i += 2)
     {
          if(number % i == 0)
          {
               return false;
          }
     }
     return true;
}