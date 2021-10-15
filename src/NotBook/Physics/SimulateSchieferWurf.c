#include <stdio.h>

const float g = 9.81;

float calc(float t);
float calculateHeight( float v0, float t);
int main()
{
     
     float v0 = 27.7;
     float h, t = 0;
     while(h >= 0)
     {
          h = calculateHeight(v0, t);
          printf("Height: %4.3f Time: %4.3f, down: %4.3f\n", h, t, calc(t));
          t = t + 0.1;
     }
     
}
float calc(float t)
{
     return ((g/2) * (t*t));
}
float calculateHeight( float v0, float t)
{
     return (v0 * t) - ((g/2)* (t*t));
}
