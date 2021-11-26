#include <iostream>

int main()
{
if( __cplusplus == 201103L ) std::cout << "C++11\n" ;
else if( __cplusplus == 19971L ) std::cout << "C++98\n" ;
else std::cout << "pre-standard C++\n" ;
}