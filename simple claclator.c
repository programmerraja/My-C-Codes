#include <stdio.h>
#include<math.h>

int main() {
int option ,a,b;


printf("enter the operation 1.add 2.sub 3.mul 4.sin 5.cos 6.tan 7.sqrt 8.power");

scanf("%d",&option);

switch(option){
    case 1:
         printf("enter two number ");
         scanf("%d%d",&a,&b);
         printf("a+b=%d",a+b);
         break;
     case 2:
         printf("enter two number ");
         scanf("%d%d",&a,&b);
         printf("a-b=%d",a-b);
         break;
     case 3:
         printf("enter two number ");
         scanf("%d%d",&a,&b);
         printf("a*b=%d",a*b);
         break;

      case 4:
         printf("enter angle  ");
         scanf("%d",&a);
         printf("sin()=%d",sin(a));
         break;
      case 5:
         printf("enter angle  ");
         scanf("%d",&a);
         printf("cos()=%d",cos(a));
         break;

      case 6:
         printf("enter angle  ");
         scanf("%d",&a);
         printf("tan()=%d",tan(a));
         break;
      case 7:
         printf("enter the number to square  ");
         scanf("%d",&a);
         printf("sqrt()=%d",sqrt(a));
         break;
         
     case 8:
         printf("enter the number  ");
         scanf("%d",&a);
         printf("pow()=%d",pow(a,2));
         break;
}
    return 0;
}