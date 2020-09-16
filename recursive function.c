#include <stdio.h>
void fun(int x)
{
    if(x>0)
    {
        printf("%d",x);
        fun(x-1);
        fun(x-1);
    }
}
int main() {
fun(8);
    return 0;
}