#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int y;
    int i, j;
    int judge(int);
    ;
    while (scanf("%d", &y)==1) {
        for (i=y+1; ; i++) {
            if (judge(i)) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}

int judge(int y)
{
    int a, b, c, d;
    a=y%10;
    b=y/10%10;
    c=y/100%10;
    d=y/1000;

    if (a==b||a==c||a==d||b==c||b==d||c==d)
        return 0;
    else
        return 1;
}

/**************************************************************
	Problem: 1297
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

