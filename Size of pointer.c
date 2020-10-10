#include <stdio.h>

int main() {

    printf("%d",sizeof(int*));
    char *pChar;
int *pInt;
float *pFloat;

printf("%d",sizeof(pChar));
printf("%d",sizeof(pInt));
printf("%d",sizeof(pFloat));

    return 0;
}