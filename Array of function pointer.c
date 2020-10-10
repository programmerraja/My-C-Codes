#include <stdio.h>
void add(int num, int num2)
{
    printf("add=%d\n",num+num2);
}


void sub(int num, int num2)
{
    printf("sub=%d",num-num2);
}

void mul(int num ,int num2)
{
    printf("\nmul=%d",num*num2);
}
int main() {

void (*fun_pointer[3])(int ,int )={&add,&sub,&mul};

for(int i=0;i<3;i++)

{
fun_pointer[i](2,3);
}
    return 0;
}