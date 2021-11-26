#ifndef _MyLib
#define _MyLib
#include <MyLib.hpp>


namespace myLib
{
     namespace style
     {
          namespace color
          {
               //The colors as String representations
               static const char* black = "\033[0;30m";
               static const char* red = "\033[0;31m";
               static const char* green = "\033[0;32m";
               static const char* yellow = "\033[0;33m"; 
               static const char* blue = "\033[0;34m"; 
               static const char* purple = "\033[0;35m";
               static const char* cyan = "\033[0;36m"; 
               static const char* white = "\033[0;37m";
                    
               //printing in colors
               void print(const char* text)
               {
                    std::cout << black << text << "\n";
               }
               void print(std::string text)
               {
                    std::cout << black << text << "\n";
               }
               void printr(const char* text)
               {
                    std::cout << red << text << "\n";
               }
               void printr(std::string text)
               {
                    std::cout << red << text << "\n";
               }
               void printg(const char* text)
               {
                    std::cout << green << text << "\n";
               }
               void printg(std::string text)
               {
                    std::cout << green << text << "\n";
               }
               void printy(const char* text)
               {
                    std::cout << yellow << text << "\n";
               } 
               void printy(std::string text)
               {
                    std::cout << yellow << text << "\n";
               }
               void printbl(const char* text)
               {
                    std::cout << blue << text << "\n";
               }
               void printbl(std::string text)
               {
                    std::cout << blue << text << "\n";
               }
               void printp(const char* text)
               {
                    std::cout << purple << text << "\n";
               }
               void printp(std::string text)
               {
                    std::cout << purple << text << "\n";
               }
               void printc(const char* text)
               {
                    std::cout << cyan << text << "\n";
               }
               void printc(std::string text)
               {
                    std::cout << cyan << text << "\n";
               }
               void printw(const char* text)
               {
                    std::cout << white << text << "\n";
               }
               void printw(std::string text)
               {
                    std::cout << white << text << "\n";
               }
          }
     }
}

#endif // 1