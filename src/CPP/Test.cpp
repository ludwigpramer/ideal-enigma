#include <iostream>
#include <string>
#include <vector>

/*
 * @author ludwigpramer
 *
 * @brief A short file.
 * 
 * @returns Returns 0 if executed successfully.
 */

class Logger
{
     private:
          std::vector<std::string> vec;
     public: 
     Logger()
     {

     }
     void print(std::string text)
     {
          std::cout << text << std::endl; 
          vec.push_back(text);
     }
     void printlist()
     {
          //std::cout << "Printing list" << std::endl;
          for(int i = 0; i <= vec.size()-1; i++)
          {
               std::cout << vec.at(i) << std::endl;
          }
     }
};
int main()
{
     Logger logger = Logger();
     logger.print("Hello");
     logger.print("Faldfkjaldf");
     logger.printlist();
     return 0;
}