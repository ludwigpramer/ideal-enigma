#include <stdio.h>
#include <stdarg.h>

const char* black(){ return "\033[0;30m";}
const char* red(){ return "\033[0;31m";} 
const char* green(){ return "\033[0;32m";} 
const char* yellow(){ return "\033[0;33m";} 
const char* blue(){ return "\033[0;34m";} 
const char* purple(){ return "\033[0;35m";}
const char* cyan(){ return "\033[0;36m";} 
const char* white(){ return "\033[0;37m";}

// void printblack(const char* text)
// {
//      printf(black());
//      printf("%s\n", text);
// }

// void printblack(int text)
// {
//      printf(black());
//      printf("%d\n", text);
// }

// void printred(const char* text, ...)
// {
//      printf("%s", text);
// }

// void printred(const char* text, ...)
// {
//      printf("%s", text);
// }

// void printgreen(const char* text, ...)
// {
//      printf("%s", text);
// }

// void printgreen(const char* text, ...)
// {
//      printf("%s", text);
// }

// void printyellow(const char* text, ...)
// {
//      printf("%s", text);
// }

// void printyellow(const char* text, ...)
// {
//      printf("%s", text);
// }

// void printblue(const char* text, ...)
// {
//      printf("%s", text);
// }

// void print(const char* text, ...)
// {
//      printf("%s", text);
// }

// void print(const char* text, ...)
// {
//      printf("%s", text);
// }

// void print(const char* text, ...)
// {
//      printf("%s", text);
// }

// void print(const char* text, ...)
// {
//      printf("%s", text);
// }

// void printwar(const char* error, ...)
// {
//      printf("%s", error);
// }
// void printerr( const char* warning, ...)
// {
//      printf("%s", warning);
// }

void reset() 
{
     printf("\033[0m"); 
}

int main()
{
     printf("%s",blue());
     printf("Blau\n");
     reset();
     printf("%s",red());
     printf("Red\n");
     reset();
     printf("%s",green());
     printf("Green\n");
     reset();
     printf("%s",purple());
     printf("Purple\n");
     reset();
     
     return 0; 
}