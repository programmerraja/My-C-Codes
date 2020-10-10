//program written by boopathi
#include<stdio.h>
void print(int p,int a[ ]);
int i;
int main()
{
int p,a[p];
int c,k,j;
    printf("Enter how many number you going to enter \n");
    scanf("%d",&p);
for (i=0;i<p;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe numbers are \n");
for (i=0;i<p;i++)
   {
printf(" \n %d\n",a[i]);
}
for (i=0;i<p-1;i++)
for (j=0;j<p;j++)
for(k=0;k<p;k++)
{
if(k==p-1)
{
printf("");
}
else
{
if(a[k]<a[k+1])
{
c=a[k];
a[k]=a[k+1];
a[k+1]=c;

}
}
}
printf("the second largest number is %d",a[1]);
return 0;
}


