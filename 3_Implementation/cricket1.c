#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int bat1(int e,char *c,int check);
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
void sel()
{
  int yu,e,i,toss,y,aso,we=1000,ew=1000;
  char Team1[50],Team2[50];
  time_t po;
  (unsigned) time(&po);
  srand(po);
  toss=rand()%2;

  printf("\nEnter Team1 Name    ");
  scanf("%s",Team1);
  printf("\n\nEnter Team2 Name   ");
  scanf("%s",Team2);
  printf("\nHow many overs to play\n");
  scanf("%d",&e);
  for(yu=0;yu>=80;yu++)
  printf("=");
  printf("\n\nNow its time for toss\n\nPlayer %s Please Choose heads or Tails (Press 1 for heads and 2 for tails)",Team1);
  scanf("%d",&aso);
  if(toss==0)
  {
    printf("%s Has Won The Toss",Team1);
    printf(" sel \n1.)Batting \t\t\t\tpress 1 \n2.)Bowling\t\t\t\tpress 2");
    scanf("%d",&y);
    switch(y)
    {
      case 1:
      we=bat1(e,Team1,ew);
      ew=bat1(e,Team2,we);
      con(we,ew,Team1,Team2);
      break;
      case 2:
      we=bat1(e,Team2,ew);
      ew=bat1(e,Team1,we);
      con(we,ew,Team2,Team1);
      break;
      default :
      printf("\n\nSorry wrong choice");
      break;
    }
  }
  else
  {
    printf("%s Has Won The Toss",Team2);
    printf(" sel \n1.)Batting \t\t\t\tpress 1 \n2.)Bowling\t\t\t\tpress 2");
    scanf("%d",&y);
    switch(y)
    {
      case 1:
      we=bat1(e,Team2,ew);
      ew=bat1(e,Team1,we);
      con(we,ew,Team2,Team1);
      break;
      case 2:
      we=bat1(e,Team1,ew);
      ew=bat1(e,Team2,we);
      con(we,ew,Team1,Team2);
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

  printf("\n\n\n\t\t\t    INDIAN PREMIER LEAGUE 2022");
  printf("\n\n\n\npress any key to continue");
  getchar();
  while(1)
  {

    printf("\n\n\t\t\tINDIAN PREMIER LEAGUE 2022");
    printf("\n\n\n\t1.) START\t\t\tpress 1\n\n\t2.) INSTRUCTIONS\t\tpress 2\n\n\t3.) EXIT\t\t\tpress 3");
    scanf("%d",&ret);
    switch(ret)
    {
      
      case 1:

      sel();
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


