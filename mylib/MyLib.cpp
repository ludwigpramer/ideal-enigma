#ifndef _MyLib
#define _MyLib
#include <iostream>
#include <string>
#include <array>


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
     namespace Vector
     {
          class Vector3D
          {
          private:
               double x;
               double y;
               double z;
          public:
               Vector3D(double x, double y, double z):
               x(x), y(y), z(z)
               {

               }
               void add(Vector3D v)
               {

               }
               Vector3D operator+(const Vector3D other) const
               {
                    return Vector3D(1, 1, 1);
               }
          };
          class Vector2D
          {
          private:
              double x;
              double y;
          public:
               Vector2D(double x, double y)
               {
                    this->x = x;
                    this->y = y;
               }
               Vector2D(double n) 
               {
                    x = n;
                    y = n;
               }
               Vector2D()
               {
                    x = 0.0f;
                    y = 0.0f;
               }
               static void add(Vector2D* v1, Vector2D* v2)
               {
                    v1->x += v2->x;
                    v1->y += v2->y;
               }
               static void subtract(Vector2D* v1, Vector2D* v2)
               {
                    v1->x -= v2->x;
                    v1->y -= v2->y;
               }
               static void multiply(Vector2D* v1, Vector2D* v2)
               {
                    v1->x *= v2->x;
                    v1->y *= v2->y;
               }
               void add(Vector2D other)
               {
                    x += other.x;
                    y += other.y;
               }
               void subtract(Vector2D other)
               {
                    x -= other.x;
                    y -= other.y;
               }
               void multiply(Vector2D other)
               {
                    x *= other.x;
                    y *= other.y;
               }
               void print()
               {
                    std::cout << "x: " << x << " y: " << y << std::endl;
               }
               Vector2D operator+(const Vector2D other) const
               {
                    return Vector2D(x + other.x, y + other.y);
               }
               Vector2D operator-(const Vector2D other) const
               {
                    return Vector2D(x - other.x, y - other.y);
               }
               int operator*(const Vector2D other) const
               {
                    return x * other.x + y * other.y;
               }
          };
     }
}

//Tesing method
int main()
{
     myLib::Vector::Vector3D()
}
#endif // 1