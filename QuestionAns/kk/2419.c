#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 101
struct date
{
    int y;
    int m;
    int d;
};
struct date get_maxdate()
{
    struct date d,ld;
    scanf("%d-%d-%d",&d.y,&d.m,&d.d);
    ld=d;
    while(scanf("%d-%d-%d",&d.y,&d.m,&d.d)!=EOF)
    {
        if((ld.y<d.y)||(ld.y==d.y&&ld.m<d.m)||(ld.y==d.y&&ld.m==d.m&&ld.d<d.d))
            ld=d;
    }
    return ld;
}

int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

/**************************************************************
	Problem: 2419
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

