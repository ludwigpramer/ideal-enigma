#include <iostream>
#include <fstream>

#define END 200


int main()
{
     std::ofstream out;
     out.open("Out.log");
    
     for(int i = 3; i <= END; i += 2)
     {
          for( int j = 0; j <= i/2; ++i)
               if(i%j == 0)
                    break;
               else
                    out << i << '\n';         
     }


     out.close();
     return 0;
}