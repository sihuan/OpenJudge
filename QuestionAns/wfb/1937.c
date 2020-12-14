#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define SWAP(a,b,t) t=a; a=b; b=t;
#define MAX_STR_LEN 1005

struct time
{
    int hh; // 时
    int mm; // 分
    int ss; //秒
} ;

struct time to_time(int n)
{
    struct time t;
    t.hh = n/3600;
    t.mm = (n-t.hh*3600)/60;
    t.ss = n-t.hh*3600-t.mm*60;
    return t;
}
int put_time(struct time t)
{
    printf("%02d:%02d:%02d\n",t.hh,t.mm,t.ss);
    return 0;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

