#include <stdio.h>
//increament and decreament operators 
int main() {


int i=0;


printf("i++=%d\n",i++);//this print 0 because first the value of i return then only it increament the i value 

printf("\ni=%d\n",i);

//now the increament value is print 

i=0;


printf("\n++i=%d",++i);

 //now this time first the value of i is get increament after only it return the value so it print 1


//this is same for decrement operators 

i=1;

printf("\n\ni--=%d\n",i--);

//this print 0 because first the value of i return then only it decrement the i value 



printf("\ni=%d\n",i);

//now the decrement value is print 


i=1;
printf("\n--i=%d",--i); 


//now this time first the value of i is get decrement after only it return the value so it print 1
    return 0;
}