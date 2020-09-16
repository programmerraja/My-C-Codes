
/*

question https://www.sololearn.com/Discuss/1943807/?ref=app


*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

char *p=(char *)malloc(sizeof(char)*8);
//p="hello";
strcpy(p,"hello");
printf("%s\n",p);
//dangling pointer 
//p=Null;
printf("%d",p);
free(p);
printf("%d",p);
    return 0;
}