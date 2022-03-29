#include<conio.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int score()
{
  int run;
  run=rand()%8;
  if(run<4)
  printf("\n\nYou Score %d runs ",run);
  else
  switch(run)
  {
    case 4:
    printf("\n\nGood Shot! You hit a boundanry ");
    break;
    case 5:
    run=0 ;
    printf("\n\nYou Score %d runs ",run);
    break;
    case 6 :
    printf("\n\nGreat Shot !! That's a huge hit  ");
    break;
    case 7:
    printf("\n\nOOPs !! You are out");
    break;
  }
  return run;
}
int bat1(int e,char *c,int check)
{
  int i,orig,totalruns=0,we;

  printf("%s Get ready to Bat \nPress any key to hit the Ball",c);
  e=e*6;
  for(i=1;i<=e;i++)
  {
    getchar();
    if(check<totalruns)
    return totalruns;
    orig=score();
    if(orig==7)
    break;
    else
    {
      totalruns=totalruns+orig;
      printf(" Your total score is %d",totalruns);
    }
  }
  getchar();
  return totalruns;
}
void con(int we,int ew,char *c,char *d)
{
  if(we<ew)
    printf("\n\n\t\t\t*******Congratulation*******\n %s has won the game  \nScore of %s is %d\nScore of %s is %d",d,c,we,d,ew);
  else if(we>ew)
  {
    printf("\n\nTotal score of Player %s is %d",d,ew);
    printf("\n\n\t\t\t\t*******Congratulation******* \n%s has won the game\nScore of %s is %d\nScore of %s is %d",c,c,we,d,ew);
  }
  else
  {
    printf("\n\nTotal score of Player %s is %d",d,ew);
    printf("\n\n\t\t\t\t*******GAME HAS DRWRAN********\nScore of %s is %d\nScore of %s is %d",c,we,d,ew);
  }
}
void select()
{
  int yu,e,i,toss,y,aso,we=1000,ew=1000;
  char player1[50],player2[50];
  time_t po;
  (unsigned) time(&po);
  srand(po);
  toss=rand()%2;

  printf("\nEnter First Players Name    ");
  scanf("%s",player1);
  printf("\n\nEnter Second Players Name   ");
  scanf("%s",player2);
  printf("\nHow many overs to play\n");
  scanf("%d",&e);
  for(yu=0;yu>=80;yu++)
  printf("=");
  printf("\n\nNow its time for toss\n\nPlayer %s Please Choose heads or Tails (Press 1 for heads and 2 for tails)",player1);
  scanf("%d",&aso);
  if(toss==0)
  {
    printf("%s Has Won The Toss",player1);
    printf(" Select \n1.)Batting \t\t\t\tpress 1 \n2.)Bowling\t\t\t\tpress 2");
    scanf("%d",&y);
    switch(y)
    {
      case 1:
      we=bat1(e,player1,ew);
      ew=bat1(e,player2,we);
      con(we,ew,player1,player2);
      break;
      case 2:
      we=bat1(e,player2,ew);
      ew=bat1(e,player1,we);
      con(we,ew,player2,player1);
      break;
      default :
      printf("\n\nSorry wrong choice");
      break;
    }
  }
  else
  {
    printf("%s Has Won The Toss",player2);
    printf(" Select \n1.)Batting \t\t\t\tpress 1 \n2.)Bowling\t\t\t\tpress 2");
    scanf("%d",&y);
    switch(y)
    {
      case 1:
      we=bat1(e,player2,ew);
      ew=bat1(e,player1,we);
      con(we,ew,player2,player1);
      break;
      case 2:
      we=bat1(e,player1,ew);
      ew=bat1(e,player2,we);
      con(we,ew,player1,player2);
      default :
      printf("\n\nSorry wrong choice");
      break;
    }
  }
}
void main()
{
  int ret;
  char ch;

  printf("\n\n\n\t\t\t    CRICKET WORLD CUP 2022");
  printf("\n\n\n\npress any key to continue");
  getchar();
  while(1)
  {

    printf("\n\n\t\t\tCRICKET WORLD CUP 2022");
    printf("\n\n\n\t1.) START\t\t\tpress 1\n\n\t2.) INSTRUCTIONS\t\tpress 2\n\n\t3.) EXIT\t\t\tpress 3");
    scanf("%d",&ret);
    switch(ret)
    {
      case 1:

      select();
      break;
      case 2:

      printf("\t\t\t\tHOW TO PLAY\nWhen game starts you have to press any key ,when you press any key computer ");
      printf("will generate random number and that random number will be your runs. When 7 number is generated than you ");
      printf("get out so the game totaly depends on your luck. \n\n \n\t\t\t\tENJOY THE GAME\n press any key to continue..............");
      getchar();
      break;
      case 3:
      exit(0);
      default:
      printf("\nSorry Wrong Choice");
      break;
    }
  }
}

