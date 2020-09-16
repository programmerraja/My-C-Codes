//structure padding 

#include <stdio.h>

struct abc
{
    char c;
    int a;
    char b;
    
}f1;

struct def
{
    int a;
    char b;
    char c;
}f2;

int main() {
 //struct def *p=(int*)&f2;
 //printf("%c\n",*(p+6));
printf("size of f1 is %d\n",sizeof (f1));
printf("sizeof f2 is %d\n",sizeof(f2));
    return 0;
}