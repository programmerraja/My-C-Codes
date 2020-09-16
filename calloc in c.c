#include <stdio.h>

#include<stdlib.h>
// void * malloc (no.of bytes)

//void * calloc (no_of bytes,size of each bytes )

int main() {


char *name;
int bt;

printf("enter the no of bytes \n");
scanf("%d",&bt);


if(!name){
    puts("memeory allocation failed ");
}

name =(char*)calloc(bt,sizeof(char));
scanf("%s",name);
printf("your name is %s\n",name );
printf("the sizeof name is %d",sizeof(name));
free(name);
    return 0;
}