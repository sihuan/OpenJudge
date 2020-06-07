#include <stdio.h>

struct date{
    int y,m,d;
};

struct date get_maxdate()
{
    int y, m, d;
    struct date ret;
    ret.y=ret.m=ret.d = 0;
    while(scanf("%d-%d-%d", &y, &m, &d)!=EOF){
        if(y>ret.y){
            ret.y = y;
            ret.m = m;
            ret.d = d;
        }
        else if (y==ret.y && m>ret.m){
            ret.y = y;
            ret.m = m;
            ret.d = d;
        }
        else if(y==ret.y && m==ret.m && d>ret.d){
            ret.y = y;
            ret.m = m;
            ret.d = d;
        }
    }
    return ret;
}

int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

/**************************************************************
	Problem: 2419
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

