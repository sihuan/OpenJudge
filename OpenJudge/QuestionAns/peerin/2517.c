#include <stdio.h>

struct time {
  int h;
  int m;
  int s;
};

void get_time(struct time *tm) {
  scanf("%d:%d:%d",&tm->h,&tm->m,&tm->s);
}

/*  SWAP(a,b,tmp)				\ */
/*   (tmp)=(a);					\ */
/*   (a)=(b);					\ */
/*   (b)=tmp; */

void time_swap(struct time *tm1, struct time *tm2) {
  int tmp;
  /* SWAP(tm1->h,tm2->h,tmp); */
  /* SWAP(tm1->m,tm2->m,tmp); */
  /* SWAP(tm1->s,tm2->s,tmp); */
  tmp=tm1->h;tm1->h=tm2->h;tm2->h=tmp;
  tmp=tm1->m;tm1->m=tm2->m;tm2->m=tmp;
  tmp=tm1->s;tm1->s=tm2->s;tm2->s=tmp;  
}

void put_time(struct time tm) {
  printf("%02d:%02d:%02d\n",tm.h,tm.m,tm.s);
}


int main()
{
    struct time tm, tn;
    get_time(&tm);
    get_time(&tn);
    time_swap(&tm, &tn);
    put_time(tm);
    put_time(tn);
    return 0;
}

/**************************************************************
	Problem: 2517
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

