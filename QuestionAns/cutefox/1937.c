#include <stdio.h>
struct time
{
    int hh;
    int mm;
    int ss;
};
struct time to_time(int n)
{
    struct time tm;
     if(n>=0&&n<60)
     {
         tm.hh=0;
         tm.mm=0;
         tm.ss=n;
     }
     if(n>=60&&n<3600)
     {
         tm.hh=0;
         tm.mm=n/60;
         tm.ss=n%60;
     }
    if(n>=3600&&n<=86399)
     {
         tm.hh=n/3600;
         tm.mm=(n-n/3600*3600)/60;
         tm.ss=(n-n/3600*3600)%60;
     }
     return tm;
}
int put_time(struct time t)
{
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

