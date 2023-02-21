#include <stdio.h>
typedef struct{
  int y;
  int m;
  int d;
} DATE;

int getDate(DATE *date){
  scanf("%d%d%d",&date->y,&date->m,&date->d);
  return 0;
}

int putDate(DATE date){
  printf("%04d-%02d-%02d\n",date.y,date.m,date.d);
  return 0;
}

int main()
{
    DATE date;
    getDate(&date);
    putDate(date);
    return 0;
}
/**************************************************************
	Problem: 2033
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

