#include <stdio.h>
#include<ctype.h>
char st[10];
int top=-1;
void push(char  n){
    st[++top]=n;
}
char  pop(){
if(top==-1){
    return 0;
}
   return st[top--];
}


int value(char op){
    switch(op){
        case '+' :
        case '-':
            return 1;
        case '/':
            return 3;
        case '*':
           return 2;
           break;
        
    }
}
int main() {
char *infix="(a+b)*c";

while(*infix){
if(isalpha(*infix)){
    printf("%c",*infix);
}
else if(*infix==')')
{
char temp=pop();
    while(temp!='('){
        printf("%c",temp);
        temp=pop();
    }
    infix ++;
}
else{
if(top>=0){
if(value(st[top])>=value(*infix)){
    printf("%c",pop());
}
}
    push(*infix);
}


    infix++;
}
printf ("%c",pop());
printf ("%c",pop());

    return 0;
}