#include<stdio.h>
#include<stdarg.h>
void print(int arg,...)
{
	va_list a;
	va_start(a,arg);
	int i;
	for(i=0;i<arg;i++)
	{
		printf("%d",va_arg(a,int));
	}
	va_end(a);
}
int main()
{
	print(7,1,2,3,4,5,6,7);
	return 0;
}