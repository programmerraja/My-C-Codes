#include <stdio.h>

int square1(int );//need to tell which data type is passing 
int main() {

  int x, result;
  
  x = 5;
  result = square1(x);
  printf("%d squared is %d\n", x, result);
    
  return 0;
}

int square1(int a)
{
int c=a;
int b=c*c; //before debug the line is cxc 
    return b;
}