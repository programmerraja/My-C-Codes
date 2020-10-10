

//c program by k.boopathi
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include<string.h>
int die2 ,die1;
static int score=0;

int ran();
void sum_of_two(int *sum,int di1,int di2);


void division_of_two (int *sum,int di1,int di2);
void multiplication_of_two (int *sum,int di1,int di2);

int main() 
{ 
int y;
int sum,level ;
printf("\t\t---------------------------------------------\n\n");
printf("\t\twelcome to my quiz game for chilldren\n\n");
printf("\t\t---------------------------------------------\n");

printf("\nChoose the level\n");
printf("\t\n1.Addtion\n");
printf("\t\n2.Multiplication\n");
printf("\t\n3.Division\n\n");
scanf("%d",&level);

switch(level)
{
    case 1:
    {
    printf("\nYou choosing level 1\n");
    do
    {
        
        die1=ran();
        die2=ran();
     
        printf("\nEnter the sum of the two number %d+%d= \n",die1,die2);
        scanf("%d",&sum);
        sum_of_two (&sum,die1 ,die2 );
    printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     }
     
    while(y==1);
    printf("-------------------------------------------\n");
    printf("\t \t \n YOUR SOCRE IS  %d\n",score);
    break;
    }
    case 2:
    {
    printf("\nYou choosing level 2\n");
    do
    {
        die1=ran();
        die2=ran();
       
        printf("\nEnter the multiplication of the two number is... %d*%d=\n",die1 ,die2 );
        scanf("%d",&sum);
        multiplication_of_two  (&sum,die1 ,die2);
        printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     }
     
    while(y==1);
    printf("----------------------------------------------\n");
    printf("\t \t \n  YOUR SOCRE IS %d\n",score);
    break;
      
    }
    case 3:
    {
              printf("\nYou choosing level 3\n");
    do
    {
        die1=ran();
        die2=ran();
        printf("\nEnter the division of the two number  is.... %d/%d=\n",die1 ,die2  );
        scanf("%d",&sum);
        division_of_two  (&sum,die1 ,die2 );
        printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     }  
   while(y==1);                                     
    break;
    default :
    {
        printf("\nChoose a correct level plse\n");
        break;
   }   
    }
}
printf("\t\t\t\nTHANK YOU FOR PLAYING .\n \t\tHAVE A NICE DAY");
return 0; 
}
int ran()
{
    int randomnumber;
    randomnumber = rand(); 
    randomnumber=randomnumber % 7;
    if(randomnumber ==0)
    {
        return (1);
    }
    else
    {
return (randomnumber );
}   
}
void sum_of_two(int *sum,int di1,int di2)
{
int two = di1 +di2;
  if(*sum==two)
        {
        score++;
            printf("\nWell done the sum of the two number  is %d\n",two);
        }
           else
        {
            printf ("\nSorry your answer is wrong \n The sum of the two number is %d\n",two);
            printf("\n\ndon't worry try again you will won \n\n");
        }
}
void division_of_two(int *sum,int di1,int di2 )
{
int two = di1 /di2;
  if(*sum==two)
        {
        score++;
            printf("\nWell done the division of five die  is %d\n",two);
        }
           else
        {
            printf ("\nsorry your answer is wrong\n    The division of two number is is %d\n",two);
            printf("\n\ndon't worry try again you will won \n\n");
        } 
}
void multiplication_of_two (int *sum,int di1,int di2  )
{
int two = di1 *di2;
  if(*sum==two)
        {
        score++;
            printf("\nWell done the multiplication of two number   is %d\n",two);
        }
           else
        {
            printf ("\nSorry your answer is wrong\n    The multiplication of two number    is %d\n",two);
            printf("don't worry try again you will won ");   
      } 

}