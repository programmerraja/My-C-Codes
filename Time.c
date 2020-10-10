#include <stdio.h>
#include<time.h>
#include<string.h>

int main() {
struct tm *ptr;
char a[10];
time_t lt;
lt=time(NULL);
ptr=localtime(&lt);
strcpy(a,asctime(ptr));
puts("command the time you see plse\n ");
printf("%s",a);
    return 0;
}