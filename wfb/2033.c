#include <stdio.h>
#define MAX_STR_LEN 105

#define SWAP(a,b,t) t=a; a=b; b=t;
typedef struct DATE
{
    int y,m,d;
} DATE;
int getDate(DATE *d)
{
    scanf("%d %d %d",&d->y,&d->m,&d->d);
}
int putDate(DATE d)
{
    printf("%04d-%02d-%02d",d.y,d.m,d.d);
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

