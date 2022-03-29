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


  


