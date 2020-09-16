#include <stdio.h>
#include<stdlib.h>
// void * malloc (no.of bytes)


int main() {


char *name;
int bt;



printf("enter the no of bytes \n");
scanf("%d",&bt);


name =(char*)malloc(bt*sizeof(char));
if(!name){
    puts("memeory allocation failed ");
}


scanf("%s",name);
printf("your name is %s",name );
free(name);
    return 0;
}