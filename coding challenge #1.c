#include <stdio.h>

int main() {

int num=2;
int bin[100];
int i=0,count=maxcount=0
while(num)
{
    bin[i]=num%2;
    num/=2;
    i++;
}

for(int j=i-1;j>=0;j--){
for(int k=j+1;k>=0;k--){
     if(bin[j]==bin[k]){
         if(count>maxcount){
             maxcount=count;
         }
         count++;
     }
}
    printf("%d",bin[j]);
}
    return 0;
}