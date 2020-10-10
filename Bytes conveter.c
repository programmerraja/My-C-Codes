#include<stdio.h>
#include<limits.h>
int main()
{
	int i,a;
  printf("enter a number to convert bits\n");
  scanf("%d",&a);
	int n=sizeof(int)* CHAR_BIT;
	int m=1<<(n-1);
	for (int i=1;i<=n;++i){
	putchar(((a&m)==0)? '0': '1');
	a=a<<1;
//	printf("%d\n",a);
	if(i%8==0 &&i <n)
	putchar(' ');
}
return 0;
}