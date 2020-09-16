#include <stdio.h>
#include<string.h>
/*


Given two strings A and B, return whether or not A can be shifted some number of times to get B.

For example, if A is abcde and B is cdeab, return true. If A is abc and B is acb, return false.

*/

//give input that you like if you found any bug in my code plse tell me 


int main() {
char a[20]="abcde",b[20]="cdeab";
//gets(c);
//gets(d);
int i=0,j=0,k=0;

//this loop get this first char occurence postion in b 
while(b[j])
{
    if(a[i]==b[j])
    {
        break ;
    }
    else {
        j++;
    }
}
while(i<strlen(a)-1)
{

if(j>strlen(b)-1)
    {
        j=0;
    }

    else if(a[i]==b[j])
    {
        k+=1;
        i++;
        j++;
    }
    else {
        break;
    }
}
if(k==strlen(a))
{
    puts("true");
}
else
{
    puts("false");
}
    return 0;
}