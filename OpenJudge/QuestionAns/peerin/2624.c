#include <stdio.h>
#include <stdlib.h>

struct time {
  int hour;
  int min;
  int sec;
};
  
int time_cmp(const void *_a, const void *_b){
  struct time *a=(struct time*)_a;
  struct time *b=(struct time*)_b;
  if(a->hour==b->hour)
    if(a->min==b->min)
      if(a->sec==b->sec)
	return 0;
      else
	return a->sec-b->sec;
    else
      return a->min-b->min;
  else
    return a->hour-b->hour;
}

int get_time(struct time tm[]) {
  int n=0;
  scanf("%d",&n);
  for (int i = 0; i<n; ++i) {
    scanf("%d%d%d",&tm[i].hour,&tm[i].min,&tm[i].sec);
  }
  return n;
}

void sort_time(struct time tm[], int n) {
  qsort(tm, n, sizeof(struct time), time_cmp);
}

void put_time(struct time tm[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%02d:%02d:%02d\n",tm[i].hour,tm[i].min,tm[i].sec);
  }
}


int main()
{
    struct time tm[100];
    int i, n;
    n = get_time(tm);
    sort_time(tm, n);
    put_time(tm, n);
}

/**************************************************************
	Problem: 2624
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

