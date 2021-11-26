#include <iostream>
#ifndef _MyLib
#define _MyLib

namespace myLib
{    
     namespace Vector
     {
          class Vector2D
          {
               private:
                    double x;
                    double y;
               public:
                    Vector2D(double x, double y);
                    Vector2D(double n);
                    Vector2D();  
                    static void add(Vector2D* v1, Vector2D* v);
                    static void subtract(Vector2D* v1, Vector2D* v2);
                    static void multiply(Vector2D* v1, Vector2D* v2);
                    void add(Vector2D other);
                    void subtract(Vector2D other);
                    void multiply(Vector2D other);
                    void print();   
                    Vector2D operator+(const Vector2D other) const;
                    Vector2D operator-(const Vector2D other) const;
                    int operator*(const Vector2D other) const;
          };
     }
}
#endif