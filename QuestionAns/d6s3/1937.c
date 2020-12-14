#include <stdio.h>

struct time {
    int hh; // 时
    int mm; // 分
    int ss; // 秒
};

struct time to_time(int n)
{
    struct time tm;
    tm.hh = n / 3600;
    tm.mm = (n % 3600) / 60;
    tm.ss = (n % 3600) % 60;
    return tm;
}

int put_time(struct time t)
{
    printf("%02d:%02d:%02d\n", t.hh, t.mm, t.ss);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

