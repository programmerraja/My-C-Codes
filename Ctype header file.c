#include <stdio.h>
#include<ctype.h>

int main() {
char c;
printf("enter ");
c=getchar();
if(isalpha(c))
{
    puts("alpha ");
}
if(isupper(c))
{
    puts("Captial ");
}
if(islower(c))
{
    puts("lower case ");
}
if(isspace(c))
{
    puts("space ");
}
if(isalnum(c))
{
    puts("alpha or  number ");
}
if(ispunct(c))
{
    puts("punctuation ");
}
if(isdigit(c))
{
    puts("digit ");
}
    return 0;
}
