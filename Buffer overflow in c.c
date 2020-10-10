#include <stdio.h>
/*
 give a input as any 43(jdjdgdhdhdjhhjjjjjddjsksitheseuusuduedjjdej) char length you can login 

*/
int main() {

printf("Buffer overflow \n");

char c[16]="password",p[14];
puts("enter a pasword ");
int flag=0;
scanf("%s",&p);
if(strcmp(c,p)==0)
{
    flag=1;
}
if (flag){
    puts("login sucess ");
}
else {
    puts("log in failed");
}
printf("%d is  the value of flag ",flag);
    return 0;
}