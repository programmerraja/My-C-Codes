#include <stdio.h>
void swap(char *s1,char *s2)
{
//printf("address inside =%d %d\n",s1,s2);
char *temp;
temp=s1;
s1=s2;
s2=temp;
    
}
void swap2(char **s1,char **s2)
{
char *temp;
temp=*s1;
*s1=s2;
*s2=temp;
    
}

int main() {
char *s1="hai",*s2="hello";
//printf("address=%d %d\n",s1,s2);
printf("before s1=%s s2=%s\n",s1,s2);
swap(s1,s2);
printf("after s1=%s s2=%s",s1,s2);
    return 0;
}