#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct date {
    int y, m, d;
};

struct date get_maxdate()
{
    struct date t, max;
    scanf("%d-%d-%d", &t.y, &t.m, &t.d);
    max.y=t.y; max.m=t.m; max.d=t.d;

    while (scanf("%d-%d-%d", &t.y, &t.m, &t.d)==3) {
        if (t.y>max.y) {
            max.y=t.y; max.m=t.m; max.d=t.d;
        } else if (t.y==max.y) {
            if (t.m>max.m){
                max.y=t.y; max.m=t.m; max.d=t.d;
            } else if (t.m==max.m) {
                if (t.d>max.d) {
                    max.y=t.y; max.m=t.m; max.d=t.d;
                }
            }
        }

    }

    return max;
}

int main()
{
    struct date d;
    d = get_maxdate();
    printf("%04d-%02d-%02d\n", d.y, d.m, d.d);
}

/**************************************************************
	Problem: 2419
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

