#include <stdio.h>
#include<pthread.h>

int ra1 ,ca1,rb1,cb1;
int c[1024][1024];

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
void* matrixmul(void * st)
{
    
       for(int i=0;i<((struct var *)st)->ra1;i++)
    {
        for(int j=0;j<((struct var*)st)->cb1;j++)
        {
        c[i][j]=0;
            for(int k=0;k<(struct var*)st.ca1;k++)
            {
                st.c[i][j]=((struct var*)st)->c[i][j] +(struct var *) st->a[i][k] + (struct var*)st->b[k][j];
            }
        }
    }
    //Displaying result
    printf("\nmultiplication of two matrix is :\n \n");
    for(int i=0;i<(struct var* )a->ra1;i++)
    {
        for(int j=0;j<(struct var *)a->cb1;j++)
        {
            printf("%d ",(struct var *)a->c[i][j]);
        }
        printf(" \n");
    }
    //function return 
    return NULL ;
  
}


int main() {



pthread_t my;
void *re;



puts("Enter no of rows in matrix A");
scanf("%d",&ra1);

puts("Enter no of columns in matrix A");
scanf("%d",&ca1);



puts("Enter no of rows in matrix b");
scanf("%d",&rb1);


puts("Enter no of column in matrix b");
scanf("%d",&cb1);

struct var
{
    int ra1,ca1,rb1,cb1;
    
     int c[ra1][cb1];
     int a[ra1][ca1];
     int b[rb1][cb1];
}*st;


st->ra1=ra1;
st->ca1=ca1;
st->rb1=rb1;
st->cb1=cb1;



int nothread ;
get(a,ra1,ca1);
get(b,rb1,cb1);

char *args="st"

puts("Enter no of thread");
scanf("%d",&nothread );
char *args="a, b" ;//ra1 ,ca1 ,rb1 ,cb1"
for(int i=0; i<nothread;i++)
{
pthread_create(&my,NULL,matrixmul,(void *)args);
}

pthread_join(my,&re);
    return 0;
}