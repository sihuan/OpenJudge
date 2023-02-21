#include <stdio.h>

int trans(int hour24){



  if(hour24==0)return 12;
  if(hour24>0&&hour24<=12)return hour24;
  if(hour24>12&&hour24<24)return hour24-12;
  


}

int ap(int hour24){

  if(hour24==0)return 1;
  if(hour24>0&&hour24<12)return 1;
  if(hour24>=12&&hour24<24)return 0;
  


}


int main(){

  int hour24,minute24;
  scanf("%d:%d",&hour24,&minute24);
  int hour12,minute12;
  minute12 = minute24;
  hour12 = trans(hour24);
  printf("%02d:%02d %s\n",hour12,minute12,ap(hour24)?"a.m.":"p.m.");

  return 0;
}

/**************************************************************
	Problem: 1163
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

