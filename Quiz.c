
//c program by k.boopathi
// This was my first game 
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include<string.h>
int die2 ,die1,die3 ,die4 ,die5 ;
static int score=0;

int ran(int a );
void score1();
void sum_of_two(int *sum,int di1,int di2);
void sum_of_two_hard(int *sum,int di1 ,int di2,int di3,int di4,int di5);

void multiplication_of_two_hard(int *sum,int di1 ,int di2,int di3,int di4,int di5);

void division_of_two (int *sum,int di1,int di2);
void multiplication_of_two (int *sum,int di1,int di2);

int main() 
{ 
int y;
int sum,level ,level2 ;
printf("\t\t---------------------------------------------\n\n");
printf("\t\twelcome to my quiz game for chilldren\n\n");
printf("\t\t---------------------------------------------\n");

printf("\nChoose the weapon\n");
printf("\t\n1.Addtion\n");
printf("\t\n2.Multiplication\n");
printf("\t\n3.Division\n\n");
scanf("%d",&level);

switch(level)
{
    case 1:
    {
    printf("\nYou choosing Addtion\n");
    printf("plse.choose the level \n 1.Easy\n 2.Hard");
    scanf("%d",&level2);
    
    if(level2==1)
    {
    do
    {
        die1=ran(0);
        die2=ran(0);
        printf("\nEnter the sum of the two number %d+%d= \n",die1,die2);
        scanf("%d",&sum);
        sum_of_two (&sum,die1 ,die2 );
    printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     }
    while(y==1);
    score1();
    }
    
    else
    {
    do
    {
    die1=ran(1);
        die2=ran(1);
     die3=ran(1);
     die4=ran(1);
     die5=ran(1);
     printf("\nEnter the sum of the five number %d+%d+%d+%d+%d= \n",die1,die2,die3 ,die4 ,die5 );
        scanf("%d",&sum);
        sum_of_two_hard  (&sum,die1 ,die2 ,die3 ,die4 ,die5 );
    printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     
    }
    while(y==1);
    score1();
    }
    break;
    }
    case 2:
    {
    printf("\nYou choosing Multiplication\n");
    printf("plse.choose the level \n 1.Easy\n 2.Hard");
    scanf("%d",&level2);
    
    if(level2==1)
    {
    
    do
    {
        die1=ran(0);
        die2=ran(0);
       
        printf("\nEnter the multiplication of the two number is... %d*%d=\n",die1 ,die2 );
        scanf("%d",&sum);
        multiplication_of_two  (&sum,die1 ,die2);
        printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     }
     
    while(y==1);
    score1();
    }
     else
    {
    do
    {
    die1=ran(1);
    die2=ran(1);
    die3=ran(1);
    die4=ran(1);
    die5=ran(1);
    printf("\nEnter the multiplication of the five number %d*%d*%d*%d*%d= \n",die1,die2,die3 ,die4 ,die5 );
        scanf("%d",&sum);
        multiplication_of_two_hard( sum, die1 , die2, die3, die4, die5);

    printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     
    }
    while(y==1);
    score1();
    }
     break;
     }
    case 3:
    {
              printf("\nYou choosing Division \n");
              printf("plse.choose the level \n 1.Easy\n 2.Hard");
    scanf("%d",&level2);
    
    if(level2==1)
    {
              
    do
    {
        die1=ran(0);
        die2=ran(0);
        printf("\nEnter the division of the two number  is.... %d/%d=\n",die1 ,die2  );
        scanf("%d",&sum);
        division_of_two  (&sum,die1 ,die2 );
        printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     }  
   while(y==1);  
   score1 ();             
   }
   else
   {
    do
    {
        die1=ran(1);
        die2=ran(1);
        printf("\nEnter the division of the two number  is.... %d/%d=\n",die1 ,die2  );
        scanf("%d",&sum);
        division_of_two  (&sum,die1 ,die2 );
        printf("\nAre you want play the game again press\n 1.continue \n 2.exit\n");
        scanf("%d",&y);
     }  
   while(y==1);  
   score1 (); 
   
       
   }     
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
int ran(int a)
{
int randomnumber;
    randomnumber = rand();
if (a==1)
{
    randomnumber=randomnumber % 20;
    
    }
    else
    {
    randomnumber=randomnumber % 10;
    }
    
return (randomnumber );
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
float two = di2 /di1;
  if(*sum==two)
        {
        score++;
            printf("\nWell done the division of two number   is %f\n",two);
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
void sum_of_two_hard(int *sum,int di1 ,int di2,int di3,int di4,int di5)
{

int two = di1 +di2+di3+di4+di5;
  if(*sum==two)
        {
        score++;
            printf("\nWell done the sum of the five number  is %d\n",two);
        }
           else
        {
            printf ("\nSorry your answer is wrong \n The sum of the five number is %d\n",two);
            printf("\n\ndon't worry try again you will won \n\n");
        }
}
    
void score1()
{
    printf("-------------------------------------------\n");
    printf("\t \t \n YOUR SOCRE IS  %d\n",score);
}

void multiplication_of_two_hard(int *sum,int di1 ,int di2,int di3,int di4,int di5)
{
int two = di1 *di2*di3*di4*di5;
  if(*sum==two)
        {
        score++;
            printf("\nWell done the multiplication of the five number  is %d\n",two);
        }
           else
        {
            printf ("\nSorry your answer is wrong \n The multiplication of five number is %d\n",two);
            printf("\n\ndon't worry try again you will won \n\n");
        }
    
}







