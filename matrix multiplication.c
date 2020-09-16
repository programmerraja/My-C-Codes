#include <stdio.h>

int a[4]={1,2,3,7};
int b[4]={5,2,3,6};
int c[4]={1,6,8,9};
int size =4;


void print(int d[],int size2);

void  make_perfect (int d[] );

void check(int a[],int b[])
{
    for(int i=0;i<size;i++)
    {
    for(int j=0;j<size;j++)
    {
        if(a[i]==b[j])
        {
            b[j]=0;
        }
    }
        
    }
}

void  make_perfect (int d[],int size1)
{
int k[size1];
int v=0;
    for(int i=0;i<size;i++){
        if(d[i]!=0){
           
            k[v]=d[i];
            v++;
        }
    }
    print(k,size1);
}

void print(int d[],int size2){
    for(int j=0;j<size2 ;j++){
        printf("%d\n",d[j]);
    }
}

void find_size (int d[]){
    int temp_size=0 ;
    for(int i=0;i<size;i++)
    {
        if(d[i]!=0){
            temp_size ++;
        }
    }
    make_perfect (d,temp_size);
    
}

int main() {

check(a,b);
check(b,c);
check(a,c);
find_size (a);
find_size (b);
find_size (c);

    return 0;
}