#include <stdio.h>
struct my
{
    int c;
    int j;
    char *s;
    
};
int main() 
{
struct my v;
v.c=34;
v.j=200;
v.s="hai";
struct my *a=&v;

printf("address of v is %d\n",&v);

printf("address of c is %d\n",&(v.c));

printf("address of j is %d\n",&(v.j));

printf("address of s  is %d\n",&(v.s));
return 0;
}