#include <stdio.h>
#define MAX_STR_LEN 1009

 struct time{
    int hh; // 时
    int mm; // 分
    int ss; //秒
} ;

struct time to_time(int n)
{
     struct time p;
     int i=0;
     p.hh=0;p.mm=0;p.ss=0;
     for(i=1;i<=n;++i)
     {
         ++p.ss;
         if(p.ss==60)
         {
             p.mm++;
             p.ss=0;

         }
         if(p.mm==60)
         {
             p.hh++;
             p.mm=0;
         }
     }
     return p;
};

void put_time(struct time tm)
{
    printf("%02d:%02d:%02d\n",tm.hh,tm.mm,tm.ss);
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:88 ms
	Memory:748 kb
****************************************************************/

