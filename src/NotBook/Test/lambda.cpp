#include <iostream>
#include <string>
#include <functional>
int exec(std::function<void(std::string)> f())
{
     f();
}

int main()
{
     exec( [](std::string value){std::cout << value << std::endl;});
}