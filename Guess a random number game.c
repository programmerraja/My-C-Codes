#include <stdio.h>
#include<string.h>
#include <stdlib.h> 
int play();
void random();
void number();
int num,guess;
static int score=0;
static   int a=0;
int main()
{
 printf("\t\t__________________________________\n");
    printf("\t\twelcome to my games guess a number\n");
 printf("\t\t__________________________________\n");
 printf("\nADIVCE:\nplse don't play this game in android because you need to give input before output so plse play this game at pc \n");
    printf("\nThe rule is simple guess a number between 1 to 50");
random();
number();
printf ("YOUR SCORE IS ......%d\n",score );
printf ("\tTHANK YOU FOR PLAYING");
    return 0;
    
}
int play()
{
    int b;
    
    printf("\n\nDo you want to \n 1.Guess again\n 2.New game\n 3.Exit\n ");
    scanf("%d",&b);
    if (b==1 || b==2 || b==3)
    {
    return b;
        }
        else 
        {
      printf ("Plse choose correct option...");
        play();
    }
}
void random()
{

   
    num=rand();
   num=num%50;
}
  void number()
        {
        do
        {
        if (a==2)
        {
            printf("\t\t__________________________________\n");
 printf("\t\tWELOME TO NEW GAME");        printf("\t\t__________________________________\n");
 printf ("The random number for last you try is %d",num);
            random();
            a=0;
            number();
        }
        if (a==1 || a==0)
        {
        printf("\n\nThe guess number range is  between [1 to 50]:\n\n");
        scanf("%d",&guess);
        if(num==guess)
        {
            printf("\nwell done your guess is correct.\nThe number is %d \n",num);
            a=play();
            score++;
        }
        else if (num>guess)
        {
            printf("\nsorry your guess is less than a random number \n");
            a=play();
        }
    else if (guess>100)
        {
            printf("\n sorry out of range\n");
            a=play();
        }
            else if (num>guess)
        {
            printf("\nsorry your guess is greater than a random number\n");
            a=play();
        }
        }
        }
        while (a!=3);
        }