#ifndef _MyLib
#define _MyLib
#include <iostream>
#include <iostream>
#include <string>
#include <array>

namespace MyLib
{  
     namespace Color
     {
          namespace Style
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
               void print(const char* text);
               
               void print(std::string text);
              
               void printr(const char* text);
               
               void printr(std::string text);
               
               void printg(const char* text);
               
               void printg(std::string text);
              
               void printy(const char* text);
               
               void printy(std::string text);
               
               void printbl(const char* text);
               
               void printbl(std::string text);
              
               void printp(const char* text);
               
               void printp(std::string text);
              
               void printc(const char* text);
              
               void printc(std::string text);
              
               void printw(const char* text);
              
               void printw(std::string text);
               
          }
     }
}
#endif