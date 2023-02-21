#include <stdio.h>

struct time{
  int hh;
  int mm;
  int ss;
};

struct time to_time(int n){
  int wholeMinute = n / 60;
  int leftSec = n % 60;
  int wholeHour = wholeMinute / 60;
  int leftMinute = wholeMinute % 60;
  struct time res = {
    wholeHour,
    leftMinute,
    leftSec
  };
  return res;
 }

void put_time(struct time t){
  printf("%02d:%02d:%02d\n",t.hh,t.mm,t.ss);
}

int main()
{
    int n;
    struct time tm;
    while(scanf("%d", &n) != EOF)
    {
        tm = to_time(n);
        put_time(tm);
    }
    return 0;
}

/**************************************************************
	Problem: 1937
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

