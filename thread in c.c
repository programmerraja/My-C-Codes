#include <stdio.h>
#include<pthread.h>
int a[1024][1024];
int b[1024][1024];

int ra1 ,ca1,rb1,cb1;
int  c[1024][1024];



void get(int a[][1204],int r1,int c1)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("enter a number a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
}
}
// thread function need to return void pointer 
void* matrixmul()
{
printf("\nI am child thread\n");
// simple matrix program 
 
    
       for(int i=0;i<ra1;i++)
    {
        for(int j=0;j<cb1;j++)
        {
        c[i][j]=0;
            for(int k=0;k<ca1;k++)
            {
                c[i][j]=c[i][j] + a[i][k] + b[k][j];
            }
        }
    }
    //Displaying result
  
    //function return 
    return NULL ;
  
}
int main() {

//this is variable used to store thread id 
pthread_t my;
// this void pointer used to store return type of pointer 
void *re;
int no;

puts("Enter no of rows in matrix A");
scanf("%d",&ra1);

puts("Enter no of columns in matrix A");
scanf("%d",&ca1);



puts("Enter no of rows in matrix b");
scanf("%d",&rb1);


puts("Enter no of column in matrix b");
scanf("%d",&cb1);
get(a,ra1,ca1);
get(b,rb1,cb1);
puts("enter no of thread");
scanf("%d",&no);


for(int i=0;i<no;i++)
{
pthread_create(&my,NULL,matrixmul,NULL);

pthread_join(my,&re);
}



  printf("\nmultiplication of two matrix is :\n \n");
    for(int i=0;i<ra1;i++)
    {
        for(int j=0;j<cb1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf(" \n");
    }

    return 0;
}