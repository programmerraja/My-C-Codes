#include <stdio.h>
#define nu 0
int main() {
#if nu>0
printf("postive number ");
#elseif nu==0
puts("zero");

#else
puts("negative number ");
#endif 
    return 0;
}