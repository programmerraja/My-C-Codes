#include <stdio.h>
#include<time.h>
#include<string.h>
#include<dos.h>

int main() {
struct tm *ptr;
char a[10];
time_t lt;
while (1)
{
lt=time(NULL);
ptr=localtime(&lt);
strcpy(a,asctime(ptr));
for(int i=11;i<19;i++)
{
printf("%c",a[i]);
}
printf("\n");
sleep(1);
//clrscr();
}
    return 0;
}