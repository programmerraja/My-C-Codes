#include <stdio.h>

int main() {

int a[10]={5,4,7,8}; //give your list here 

int sum;

scanf("%d",&sum);

for(int i=0;a[i];i++)
{
for(int j=i+1;a[j];j++)
{
    if(a[i]+a[j]==sum)
    {
        printf("%d + %d = %d ",a[i],a[j],sum);
        return 0;
    }
}
}
printf("false ");

    

    return 0;
}
