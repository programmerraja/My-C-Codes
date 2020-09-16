#include <stdio.h>
#include<ctype.h>

char msg[20]="a12b";
void fun(int start,int end);

int main() {
printf("%c\n",(int)msg[2]);
int index[20]={};
int start ,end;
int k=0;
for(int i=0;msg[i];i++)
{

   if( isalpha(msg[i]))
   {
    index[k]=i;
    //printf("%c",msg[i]);
    k++;
    }
}
for(int j=0;;j++)
{
    start=index[j]+1;
    //printf("%d",start);
    if(index[j+1])
    {
        end=index[j+1];
       // printf("%d",end);
        fun(start,end );       
        break;
    }
}
    return 0;
}
void fun(int start,int end)
{
     char num[20];
     int k=0;   
    for(int i=start;i<end;i++)
    {
       num[k]=msg[i];
       k++;
        }
        printf("\n%c",(c)num[0]);
}