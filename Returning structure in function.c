#include <stdio.h>
#include<string.h>
struct stud 
{
    int roll;
    char name[10];  
};

struct stud create(int no,char *name)
{
    struct stud var;
    var.roll=no;
    strcpy(var.name,name);
    return var ;    
}
int main() 
{
	struct stud var=create(12,"raja");
	printf("the roll no is %d\n",var.roll);
	printf("the name is %s",var.name);
    return 0;
}