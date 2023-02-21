#include <stdio.h>
#include <stdlib.h>

struct time {
  int hour;
  int min;
  int sec;
};

static void put_time(struct time tm[], int n){
  for(int i = 0;i < n;++i){
    printf("%02d:%02d:%02d\n",tm[i].hour,tm[i].min,tm[i].sec);
  }
}

static int get_time(struct time tm[]){
  int n;
  scanf("%d", &n);
  for(int i = 0;i < n;++i){
    scanf("%d%d%d",&tm[i].hour,&tm[i].min,&tm[i].sec);
  }
  return n;
}

static int tm_cmp(const void *t1, const void *t2){
  struct time *tm1 = (struct time *)t1;
  struct time *tm2 = (struct time *)t2;
  if(tm1->hour == tm2->hour){
    if(tm1->min == tm2->min){
      if(tm1->sec == tm2->sec){
	return 0;
      }
      else return tm1->sec - tm2->sec;
    }
    else return tm1->min - tm2->min;
  }
  else return tm1->hour - tm2->hour;
}

static void sort_time(struct time tm[], int n){
  qsort(tm,n,sizeof(struct time),tm_cmp);
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

