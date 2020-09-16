
//time complexity of the program is O(n^2)
// space complexity depend on size of 3 array 
#include <stdio.h>



int a[4]={1,2,3,7}; //give array here 
int b[4]={5,2,3,6};
int c[4]={1,6,8,9};
int size =4; //give a size here 

//function prototype 
void print(int d[],int size2,char name );



// making zero for repateing number 
void check(int a[],int b[], int c[],int time)
{
    for(int i=0;i<size;i++)
    {
    for(int j=0;j<size;j++)
    {
        if(a[i]==b[j]  ) 
        {
            b[j]=0;
        }
        if(a[i]==c[j])
        {
            c[j]=0;
            
        }
    }
        
    }
    if(time!=0)
    {
        check(b,a,c,1);
    }
    else
    {
    //passing array and array name for printing
        find_size (a,'a');
        find_size (b,'b');
        find_size (c,'c');
    }
}

// make perfect array by removing zero from it 
void  make_perfect (int d[],int size1,char name)
{
int k[size1];
int v=0;
    for(int i=0;i<size;i++){
        if(d[i]!=0){
           
            k[v]=d[i];
            v++;
        }
    }
    print(k,size1,name);
}

//print the new array 
void print(int d[],int size2,char name){
     printf("%c =[",name);
    for(int j=0;j<size2 ;j++){
        printf(" %d ", d[j]);
    }
    printf("]\n");
}

//finding the size of new array 
void find_size (int d[],char name){
    int temp_size=0 ;
    for(int i=0;i<size;i++)
    {
        if(d[i]!=0){
            temp_size ++;
        }
    }
    make_perfect (d,temp_size,name);
    
}

int main() {


check(a,b,c,0);

    return 0;
}