#include <iostream>

int main()
{
     int i = 10;
     auto la =  [i](int a, int b){
          return a + b + i;
     };
     la(200, 5);
}