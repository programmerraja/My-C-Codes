#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void move();
	char a[10]={'5','4','8','7','1','2','3','6',' '};
	int b[10]={'1','2' ,'3','4','5','6','7','8'};
	
	int check()
	{
	 for (int i=0;i<8;i++)
	 {
	 	if (a[i]==b[i])
	 	   {
	 	   	continue;
	 	   }
	 	  else
	 	  {
	 	  	return 1;
	 	  }
	 	  
	 }
	 	return 0;
	
	}
	void dispaly()
	{
	printf("|%c | %c |%c |\n",a[0],a[1],a[2]);
	   printf("-----------\n");
		printf("|%c | %c |%c |\n",a[3],a[4],a[5]);
    	printf("-----------\n");
	   printf("|%c | %c |%c |\n",a[6],a[7],a[8]);				
	printf("-----------\n");
	}	
void swap(int number ,int index)
{
	int t;
		if (number==1)
	{
		if (a[index+1]==' ')
		{
		t=a[index];
		a[index]=a[index+1];
		a[index+1]=t;
		dispaly();
		}
		else{
			printf("\ninvalid move");
            move();
		}
	}
	else if (number==2)
	{
		if (a[index-1]==' ')
		{
			t=a[index];
		a[index]=a[index-1];
		a[index-1]=t;
		dispaly();
		}
		else
		{
			printf("\nenter a valid move plse");
			move();
		}
	}
		
 else if (number==3)
 {
 	if (a[index-3]==' ')
 	{
 	   t=a[index];
		a[index]=a[index-3];
		a[index-3]=t;
		dispaly();
 	}
 	else{
 		printf("\nenter a valid move");
 		move();
 	}
 }
 else if (number==4)
 {
 	if(a[index+3]==' ')
 	{
    	t=a[index];
		a[index]=a[index+3];
		a[index+3]=t;
		dispaly();
 	}
 	else
 	{
 		printf("\nillegal move");
 		move();
 	}
 }
 else
   {
   	printf("\nenter a valid option");
   	move();
	}
}
void move()
{
	int num,i,index;
	int dir;
	printf("\nenter a number to move ");
	scanf("%d",&num);
	for (i=1;i<9;i++)
	{
		if (i==num)
		{
			num=b[i-1];
		}
	}
	for (i=0;i<9;i++)
	{
		if (a[i]==num)
		   {
		   	index=i;
		   }}
	printf("\nenter the direction to move \n1.Right\n2.Left\n3.Up\n4.Down\n");
	scanf("%d",&dir);
	swap(dir,index);
	if(check())
	{
    move();			
	}
	else
	{
		printf("you won");
}}
int main()
{
dispaly();
move();
	return 0;
}