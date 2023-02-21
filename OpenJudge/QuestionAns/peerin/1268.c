#include <stdio.h>

typedef enum{
  diamond = 1,//方块
  club = 2,//梅花
  spade = 3,//黑桃
  heart = 4//红桃
} Cards;

typedef struct {
  Cards type;
  int point;
} Poker;

int get_card(Poker *pk){
  char cT;
  scanf("%c",&cT);
  if(cT == ' '){
    scanf("%c",&cT);
  }
  switch(cT){
  case 'D':
    pk->type = heart;
    break;
  case 'C':
    pk->type = spade;
    break;
  case 'B':
    pk->type = club;
    break;
  case 'A':
    pk->type = diamond;
  }
  scanf("%d",&pk->point);
  return 0;
}

int card_cmp(Poker p1, Poker p2){
  if(p1.point == p2.point){
    if(p1.type == p2.type){
      return 0;
    }
    else{
      return (p1.type > p2.type) ? 1 : -1;
    }
  }
  else{
    return (p1.point > p2.point) ? 1 : -1;
  }
}


int main()
{
    Poker tom, jack;
    get_card(&tom);
    get_card(&jack);

    int result = card_cmp(tom, jack);
    if(result > 0)
        puts("Tom wins.");
    if(result < 0)
        puts("Jack wins.");
    if(result == 0)
        puts("Tie.");
}
/**************************************************************
	Problem: 1268
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

