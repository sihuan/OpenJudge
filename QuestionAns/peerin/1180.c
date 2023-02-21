#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000
struct date{
  int year;
  int month;
  int day;
};

int get_date_array(struct date d[]){
  int n = 0;
  while(scanf("%d/%d/%d",&d[n].month,&d[n].day,&d[n].year) != EOF){
    n++;
  }
  return n;
}

int cmpdate(const void *a1,const void *a2){
  struct date *d1 = (struct date *)a1;
  struct date *d2 = (struct date *)a2;
  if(d1->year < d2->year)
    return -1;
  else if(d1->year > d2->year)
    return 1;
  else
    if(d1->month < d2->month)
      return -1;
    else if(d1->month > d2->month)
      return 1;
    else
      if(d1->day < d2->day)
	return -1;
      else if(d1->day > d2->day)
	return 1;
      else
	return 0;
}

void sort_date_array(struct date d[],int n){
  qsort(d,n,sizeof(int) * 3,cmpdate);
}


int main()
{
    struct date d_arr[MAX_SIZE];
    int cases = 0, i, j;

    cases = get_date_array(d_arr);
    sort_date_array(d_arr, cases);

    for(i = 0; i < cases; i++)
        printf("%02d/%02d/%d\n", d_arr[i].month, d_arr[i].day, d_arr[i].year);
    return 0;
}
/**************************************************************
	Problem: 1180
	User: 202211070518
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:800 kb
****************************************************************/

