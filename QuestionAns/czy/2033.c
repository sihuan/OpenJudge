#include <stdio.h>
#define MAX_STR_LEN 200

typedef struct DATe
{
    int y;
    int m;
    int d;
}DATE;

int getDate(DATE *dat)
{
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    (*dat).y=y;(*dat).m=m;(*dat).d=d;
    return 0;
}

int putDate(DATE dat)
{
    printf("%04d-%02d-%02d\n",dat.y,dat.m,dat.d);
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

