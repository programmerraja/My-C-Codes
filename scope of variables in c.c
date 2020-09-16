
#include <stdio.h>
int i=10; //global var 
void f(void){
   int i=5; //local var 
    i=7; //altering global var 
}
void g()
{
    i=9; //altering global var 
}
int main() {
int i=1; //local var 
g();
f();
printf ("%d",i); //give precendence to local var so ouput is 1
    return 0;
}