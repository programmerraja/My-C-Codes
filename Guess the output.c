#include <stdio.h>

int main() {

//Post fix /pre fix problem:
int a=3;
int b=a++;
int c=++a;
int d =--b+ ++c*++a/--b%++c;
printf("%d",d);
    return 0;
}