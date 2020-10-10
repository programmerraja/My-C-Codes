#include <stdio.h>
/*int is return type of function because 
return 
max to main */
int arrange(int a[],int n)
{
    int max ,i;
    /*assume a first element as maximum number*/
    max=a[0];
    for (i=0;i<n;i++)
    {
    /*checking if first number lesser than other
    number if greater than store that number in max*/ 
        if(max<a[i])
        {
            max=a[i];
        }
        }
        /*if max is greater than all number in 
        array then return max */      
    printf("max=%d\n",max);
        
   return max;
}

int main() 
{
int i,n,a[10],c;
printf("enter numbe if element \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the elements \n");
    scanf("%d",&a[i]);
}
/*arrange function return a max so we need a variable to store that so we use c*/
c=arrange(a,n);
printf("max=%d",c);
    return 0;
}