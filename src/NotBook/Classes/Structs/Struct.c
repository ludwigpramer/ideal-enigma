#include <stdio.h>

#define Log(x) printf("%d", x)

struct Player {
    
     int x;
     int y;

 
};

void setPlayerPos(struct Player* p, int x, int y)
{
     struct Player p1 = *p;
     p1.x = x;
     p1.y = y;
     
}

int main()
{
     u_int64_t i = 1;
}