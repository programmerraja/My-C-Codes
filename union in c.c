#include <stdio.h>
//unions in c 
union var
{
    int x,y;
    int a[20];
};
struct var2
{
    int a,b;
};

int main() {
struct var2 str;
union var un;
printf("the size of struct is %d\n",sizeof(str));

printf("the size of union is %d\n",sizeof(un));

str.a=5;
str.b=10;
printf("the value inside struct is a=%d b=%d\n",str.a,str.b);

un.x=5;
printf("the value inside union is x=%d\n",un.x);


un.y=10;

printf("the value inside union is  y=%d x=%d",un.y,un.x);





    return 0;
}