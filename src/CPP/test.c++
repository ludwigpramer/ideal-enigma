#include <functional>
#include <string>
#include <iostream>

void exec(std::string s,std::function<void(std::string s)> func)
{
     func.operator();
}

int main()
{
     exec("Hello" ,[](std::string st){std::cout << st << std::endl;});
}