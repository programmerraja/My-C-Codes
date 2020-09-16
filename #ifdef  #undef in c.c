#include <stdio.h>
#define pi 3.14
#undef pi
int main() {
#ifdef pi
puts("success");
#else
puts("failure ");

#endif

    return 0;
}