#include <stdio.h>
#include <string.h>

struct date {
  int year;
  int month;
  int day;
};

void get_date(struct date *d){
  scanf("%d/%d/%d",&d->year,&d->month,&d->day);
}

void put_century(struct date d){
  int year = d.year;
  int century = year/100 + 1;
  char suffix[5];
  switch(century % 10){
  case 1:
    strcpy(suffix,"st");
    break;
  case 2:
    strcpy(suffix,"nd");
    break;
  case 3:
    strcpy(suffix,"rd");
    break;
  default:
    strcpy(suffix,"th");
  }
  printf("in the %d%s century\n",century,suffix);
}


int main()
{
    struct date d;
    get_date(&d);
    put_century(d);
    return 0;
}

/**************************************************************
	Problem: 2295
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

