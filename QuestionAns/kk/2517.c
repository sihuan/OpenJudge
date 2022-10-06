#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time
{
    int h;
    int m;
    int s;
};
void get_time(struct time *t)
{
    scanf("%d:%d:%d",&t->h,&t->m,&t->s);
}
void time_swap(struct time *tm,struct time *tn)
{
    struct time temp;
    temp=*tm;
    *tm=*tn;
    *tn=temp;
}
void put_time(struct time t)
{
    printf("%02d:%02d:%02d\n",t.h,t.m,t.s);
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
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

