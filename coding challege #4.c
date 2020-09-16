#include <stdio.h>
#include<string.h>
#include<ctype.h>


/*

Given a string of words delimited by spaces, reverse the words in string. For example, given "hello world here", return "here world hello"

*/

int main() 
{
char s[39]="hello world",b[10][10];
int p=0;
int k=0;
for (int i=0;i<strlen(s);i++)
{
    if(!isspace(s[i]))
    {
        b[p][k]=s[i];
        k++;
    }
    else
    {
    p++;
    k=0;
    }
}
for(;p>=0;p--)
{
printf("%s ",b[p]);
}
    return 0;
}