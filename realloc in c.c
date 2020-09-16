#include <stdio.h>
#include<stdlib.h>
// void * malloc (no.of bytes)


//void * realloc(ptr,no of bytes )


int main() {


int *no;
int bt;



printf("enter the no of bytes \n");
scanf("%d",&bt);


no =(int*)malloc(bt*sizeof(int));
if(!no){
    puts("memory allocation failed ");
}
for(int i=0;i<bt;i++)
{
    scanf("%d",&no[i]);
}
for(int i=0;i<bt;i++)
{
    printf("%d\n",no[i]);
}


puts("do you need more memory ");
scanf("%d",&bt);

no=(int *)realloc(no,bt);

if(!no){
    puts("memory allocation failed ");
}
for(int i=0;i<bt;i++)
{
    scanf("%d",&no[i]);
}
for(int i=0;i<bt;i++)
{
    printf("%d\n",no[i]);
}
free(no);
    return 0;
}