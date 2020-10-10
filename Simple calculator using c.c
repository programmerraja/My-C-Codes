#include <stdio.h>
int check(int p,int r);
int main()
 {
int a,b,p,d;

printf("\t\t\t \t\tt\t\tCalculator\n\n");

do
{

printf("\n\nEnter operation to do \n 1.Addition \n 2.Subraction \n 3.Multiplication \n 4.Division\n 5.Exit\n");
scanf("%d",&p);
switch(p)
{


 case 1:
    printf("\nEnter the first number \n");
    scanf("%d",&a);
    printf("\nEnter the second number\n ");
    scanf("%d",&b);
    
    printf("%d + %d = %d",a,b,a+b);
 break;
    

 case 2:
    printf("\nEnter the first number \n");
    scanf("%d",&a);
    printf("\nEnter the second number\n ");
    scanf("%d",&b);
    printf("\n%d - %d = %d\n",a,b,a-b);
    break;
    
 case 3:
    printf("\nEnter the first number \n");
    scanf("%d",&a);
    printf("\nEnter the second number\n ");
    scanf("%d",&b);
    printf("\n%d * %d = %d\n",a,b,a*b);
 break;
 case 4:
    printf("\nEnter the first number \n");
    scanf("%d",&a);
    printf("\nEnter the second number\n ");
    scanf("%d",&b);
    
    d=check(a,b);
    if (d)
    {
    printf("\n%d / %d = %d\n",a,b,a/b);
    }
    break;
    case 5:
    printf("\nThank you for using my calculator");
    break;

default :
printf("\nPlease select correct operation\n");
break;
    }
    }
    while(p!=5);
    return 0;
}
int check(int p ,int r)
{
    if(r==0)
    {
        printf("\nMATH ERROR\n");
        return 0;
    }
    else 
    {
        return 1;
    }
}