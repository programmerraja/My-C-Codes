#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[10];
	int i;
  gets(a);
  for( i=0;a[i]!='\0';i++)
      if (a[i]<a[i+1] && a[i+1]!='\0')
        continue;
     else
      break;
     if(a[i+1]=='\0')
     printf("continue");
     else
     printf("not continue");
	return 0;
}